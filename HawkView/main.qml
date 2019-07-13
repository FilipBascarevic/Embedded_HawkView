import QtQuick 2.12
import QtQuick.Window 2.12
import QtLocation 5.9
import QtPositioning 5.0
import QtQuick.Layouts 1.3

Window {
    id: window

    visible: true
    width: 1024
    height: 768
    title: qsTr("HawkView")



    Map {
        id : map
        anchors.fill: parent

        plugin: Plugin {
            name: "mapboxgl"
        }

        center: QtPositioning.coordinate(44.786568, 20.4489216) // Belgrade
        zoomLevel: 4
        minimumZoomLevel: 0
        maximumZoomLevel: 20
        tilt: 45

        MapParameter {
            id: source;
            type: "source"

            property var name: "routeSource"
            property var sourceType: "geojson"
            property var data: '{ "type": "FeatureCollection", "features": \
            [{ "type": "Feature", "properties": {}, "geometry": { \
            "type": "LineString", "coordinates": [[ 20.4389216, \
            44.776568 ], [ 20.4589216, 44.796568 ]]}}]}'
        }

        Connections {
            target: extractedXML

            onNewPosition: {
                //map.center = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
                position.coordinate = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
            }
        }

        MapQuickItem {
            id: position

            sourceItem: Image {
                id: positionMarker
                source: "qrc:///position.png"
                width: 50
                height: 50
            }

            coordinate: QtPositioning.coordinate(44.786568, 20.4489216)
            anchorPoint.x: positionMarker.width / 2
            anchorPoint.y: positionMarker.height

            //MouseArea {
                //drag.target: parent
            //    anchors.fill: parent

            //    onClicked: {
                    //map.center = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
                    //parent.coordinate = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
            //    }
            //}



        }

    }

}
