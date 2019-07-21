#ifndef EXTRACTXML_H
#define EXTRACTXML_H

#include <QObject>
#include <QXmlStreamReader>
#include <QGeoCoordinate>
#include "message.h"


struct target_info {
    // ID of target
    QString ID;
    // Target type
    QString Classification;
    // Heading
    QString HeadingUnits;
    unsigned int Heading;
    // Hit number
    unsigned int HitNumber;
    // Position
    double Longitude;
    double Latitude;
    // Range
    QString RangeUnits;
    unsigned int Range;
    // RCS
    QString RCSUnits;
    double RCS;
    // Relative Bearing
    QString RelBearingUnits;
    double RelBearing;
    // SPeed of target
    QString SpeedUnits;
    double Speed;
    //Update Time
    QString UpdateTime;

};

struct Node {

    struct target_info target;

    struct Node *right;
    struct Node *down;

};

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

    Q_INVOKABLE QVariantList path() {
        return m_path;
    }

public:
    Q_SLOT void onDeviceStatusReceived(const MessageReceivedEventArgs &curr_XML);
    Q_SLOT void onDeviceDetectionReceived(const MessageReceivedEventArgs &curr_XML);

signals:
    void newPosition();
    void pathChanged();
    void clearTrajectory();

 public:
    double longitude;
    double latitude;
    QXmlStreamReader *XMLReader;

    struct target_info curr_target;
    struct Node *head;

    QVariantList m_path;

 private:
    void addTargetToMatrix(struct target_info &target);
    void removeTargetFromMatrix(struct target_info &target);
    void drawMarker(double &longitude, double &latitude);
};

#endif // EXTRACTXML_H
