#include "extractxml.h"

extractXML::extractXML(QObject *parent) : QObject(parent)
{
    // Create new reader
    XMLReader = new QXmlStreamReader;

    longitude = 0.0;
    latitude = 0.0;

    head = nullptr;
}

extractXML::~extractXML(){
    delete XMLReader;

    longitude = 0.0;
    latitude = 0.0;
}

Q_SLOT void extractXML::onDeviceStatusReceived(const MessageReceivedEventArgs &curr_XML) {

    XMLReader->addData(curr_XML.Message);

    //Parse the XML until we reach end of it
    while(!XMLReader->atEnd() && !XMLReader->hasError()) {
        // Read next element
        QXmlStreamReader::TokenType token = XMLReader->readNext();
        //If token is just StartDocument - go to next
        if(token == QXmlStreamReader::StartDocument) {
                continue;
        }
        //If token is StartElement - read it
        if(token == QXmlStreamReader::StartElement) {

            if(XMLReader->name() == "Latitude") {
                latitude = XMLReader->readElementText().toDouble();
            }
            if(XMLReader->name() == "Longitude") {
                longitude = XMLReader->readElementText().toDouble();
                qDebug() << "Collecting new Coordinates" << endl << endl;
                emit newPosition();
            }

        }
    }

    if(XMLReader->hasError()) {
        qDebug() << XMLReader->errorString();
        return;
    }

    //clear reader
    XMLReader->clear();

    return;

}

Q_SLOT void extractXML::onDeviceDetectionReceived(const MessageReceivedEventArgs &curr_XML) {

    QXmlStreamReader *XMLReader;
    XMLReader = new QXmlStreamReader;
    QString ReportMode;


    XMLReader->addData(curr_XML.Message);

    //Parse the XML until we reach end of it
    while (!XMLReader->atEnd() && !XMLReader->hasError()) {
        // Read next element
        QXmlStreamReader::TokenType token = XMLReader->readNext();
        //If token is just StartDocument - go to next
        if (token == QXmlStreamReader::StartDocument) {
            continue;
        }
        //If token is StartElement - read it
        if (token == QXmlStreamReader::StartElement) {

            if (XMLReader->name() == "DeviceDetectionRecord") {
                ReportMode = XMLReader->attributes().value("ReportMode").toString();
            }

            if (XMLReader->name() == "ID") {
                curr_target.ID = XMLReader->readElementText();
            }

            if (XMLReader->name() == "GeodeticLocation") {
                // Get Latitude of Target
                while (XMLReader->name() != "Latitude")
                    XMLReader->readNextStartElement();
                curr_target.Latitude = XMLReader->readElementText().toDouble();

                // Get Longitude of Target
                while (XMLReader->name() != "Longitude")
                    XMLReader->readNextStartElement();
                curr_target.Longitude = XMLReader->readElementText().toDouble();
            }

            if(XMLReader->name() == "Classification") {
                curr_target.Classification = XMLReader->readElementText();
            }

            if(XMLReader->name() == "Heading") {
                curr_target.HeadingUnits = XMLReader->attributes().value("Units").toString();
                curr_target.Heading = XMLReader->readElementText().toUInt();
            }

            if(XMLReader->name() == "Speed") {
                curr_target.SpeedUnits = XMLReader->attributes().value("Units").toString();
                curr_target.Speed = XMLReader->readElementText().toDouble();
            }

            if(XMLReader->name() == "UpdateTime") {
                curr_target.UpdateTime = XMLReader->readElementText();
            }

            if(XMLReader->name() == "TargetParameter") {
                QXmlStreamAttributes attributes = XMLReader->attributes();
                XMLReader->readNextStartElement();

                if (XMLReader->name() == "Name") {
                    QString parameterName = XMLReader->readElementText();
                    if (parameterName == "RCS") {
                        curr_target.RCSUnits = attributes.value("Units").toString();
                        XMLReader->readNextStartElement();
                        if (XMLReader->name() == "Value")
                            curr_target.RCS = XMLReader->readElementText().toDouble();
                    }
                    else if (parameterName == "Range") {
                        curr_target.RangeUnits = attributes.value("Units").toString();
                        XMLReader->readNextStartElement();
                        if (XMLReader->name() == "Value")
                            curr_target.Range = XMLReader->readElementText().toUInt();
                    }
                    else if (parameterName == "RelBearing") {
                        curr_target.RelBearingUnits = attributes.value("Units").toString();
                        XMLReader->readNextStartElement();
                        if (XMLReader->name() == "Value")
                            curr_target.RelBearing = XMLReader->readElementText().toUInt();
                    }
                    else if (parameterName == "HitNumber") {
                        XMLReader->readNextStartElement();
                        if (XMLReader->name() == "Value")
                            curr_target.HitNumber = XMLReader->readElementText().toUInt();
                    }
                }
            }


        }
    }

    if (XMLReader->hasError()) {
        qDebug() << XMLReader->errorString();
        return;
    }

    //clear reader
    XMLReader->clear();

    // Add current target to a dynemic matrix
    if (ReportMode == "Update") {
        // Add this identified target to matrix
        addTargetToMatrix(curr_target);
        emit readTarget();
    }
    else if (ReportMode == "Delete") {
        removeTargetFromMatrix(curr_target);
        emit clearTrajectory();
    }
    else {

    }


    // extract path of first row
    struct Node *curr = head, *temp = head;
    while (curr != nullptr) {
        m_path.clear();
        temp = curr;
        while(temp != nullptr) {
            drawMarker(temp->target.Longitude, temp->target.Latitude);
            temp = temp->right;
        }
        emit pathChanged();
        curr = curr->down;
    }


    return;

}

void extractXML::addTargetToMatrix(struct target_info &target) {

    struct Node *curr_row = head, *prev_row = head;

    // Allocate now node
    struct Node *newNode = new Node;
    newNode->target = target;
    newNode->right = nullptr;
    newNode->down = nullptr;

    // Try to find identical ID of target in a matrix row
    bool found_flag = false;
    while (curr_row != nullptr) {
        if (curr_row->target.ID == target.ID) {
            found_flag = true;
            prev_row = curr_row;
            break;
        }
        prev_row = curr_row;
        curr_row = curr_row->down;
    }

    // ID is not in a matrix row, add new row
    if (found_flag == false) {
        if (head == nullptr) {
            head = newNode;
        }
        else {
            prev_row->down = newNode;
        }
    }
    // ID is recognized and it is in a matrix. Add current node at the end of current row
    else {
        struct Node *last_target = prev_row;
        while (prev_row != nullptr) {
            last_target = prev_row;
            prev_row = prev_row->right;
        }
        last_target->right = newNode;
    }

}

void extractXML::removeTargetFromMatrix(struct target_info &target) {

    struct Node *curr_target = head, *prev_target = head;

    //while(curr_target->target.ID != target.ID && curr_target != nullptr) {
    //    prev_target = curr_target;
    //    curr_target = curr_target->down;
    //}

    while(true) {
        // protection
        if (curr_target == nullptr)
            break;

        if (curr_target->target.ID == target.ID) {
            break;
        }
        else {
            prev_target = curr_target;
            curr_target = curr_target->down;
        }
    }

    // if current target is nullptr, it means there is no traget ID in matrix which we need to remove
    if (curr_target != nullptr) {
        // re-link previous and current next
        prev_target->down = curr_target->down;

        // Delete each node of this target
        struct Node *temp = curr_target;
        while(curr_target != nullptr) {
            temp = curr_target;
            curr_target = curr_target->right;
            delete temp;
        }
    }


}

void extractXML::drawMarker(double &longitude, double &latitude) {
    QGeoCoordinate *coord = new QGeoCoordinate(latitude, longitude, 0);
        if (coord->isValid()) {
            m_path.append(QVariant::fromValue(*coord));
        }
}


