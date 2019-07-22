import QtQuick 2.0
import QtLocation 5.9


    MapPolyline {
        //
        property var name: ""
        id: track
        objectName: "name"
        line.width: 3
        line.color: 'blue'

        //path: []
        //Component.onCompleted: {
        //    ID = 'name';
        //}
    }

    //MapQuickItem {
    //    id: targetSign

    //    sourceItem: Image {
    //        id: targetMarker
    //        source: "qrc:///drone.jpg"
    //        width: 20;
    //        height: 22;
    //    }

        //coordinate: QtPositioning.coordinate(44.786568, 20.4489216)
    //    anchorPoint.x: targetMarker.width / 2
    //    anchorPoint.y: targetMarker.height / 2
    //}



