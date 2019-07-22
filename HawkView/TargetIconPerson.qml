import QtQuick 2.0
import QtLocation 5.9

MapQuickItem {
    id: targetSign

    sourceItem: Image {
        id: targetMarker
        source: 'qrc:///person.jpg'
        width: 30;
        height: 30;
    }

    //coordinate: QtPositioning.coordinate(44.786568, 20.4489216)
    anchorPoint.x: targetMarker.width / 2
    anchorPoint.y: targetMarker.height / 2
}
