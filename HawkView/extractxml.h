#ifndef EXTRACTXML_H
#define EXTRACTXML_H

#include <QObject>
#include <QXmlStreamReader>
#include <QGeoCoordinate>
#include "message.h"

class extractXML : public QObject
{
    Q_OBJECT
public:
    explicit extractXML(QObject *parent = nullptr);
    ~extractXML();

    Q_INVOKABLE double getLongitude() {
        return longitude;
    }

    Q_INVOKABLE double getLatitude() {
        return latitude;
    }


public:
    Q_SLOT void onDeviceStatusReceived(const MessageReceivedEventArgs &curr_XML);

signals:
    void newPosition();


 public:
    double longitude;
    double latitude;
    QXmlStreamReader *XMLReader;
};

#endif // EXTRACTXML_H
