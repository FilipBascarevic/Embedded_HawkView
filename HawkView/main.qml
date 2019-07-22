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

        property variant mapItems
        property variant mapItemIcons

        id : map
        anchors.fill: parent

        plugin: Plugin {
            name: "mapboxgl"
            //name: "esri"

            PluginParameter {
                name: "mapbox.access_token"
                value: "sk.eyJ1IjoiYWhtZWR6YW11cyIsImEiOiJjank1eHg4ZnYwYmh6M2xxMHhxMWlhZWlwIn0.cAMsqKrKKXqe8EllTQBD5Q"
            }

        }

        center: QtPositioning.coordinate(44.786568, 20.4489216) // Belgrade
        zoomLevel: 4
        minimumZoomLevel: 0
        maximumZoomLevel: 20
        tilt: 0

        activeMapType: supportedMapTypes[4]

        //MapParameter {
        //    id: source;
        //    type: "source"

        //    property var name: "routeSource"
        //    property var sourceType: "geojson"
        //    property var data: '{ "type": "FeatureCollection", "features": \
        //    [{ "type": "Feature", "properties": {}, "geometry": { \
        //    "type": "LineString", "coordinates": [[ 20.4389216, \
        //    44.776568 ], [ 20.4589216, 44.796568 ]]}}]}'
        //}

        Connections {
            target: extractedXML

            function deleteTarget(pos)
            {

                map.removeMapItem(map.mapItems[pos])
                map.removeMapItem(map.mapItemIcons[pos])
                map.mapItems[pos].destroy()
                map.mapItemIcons[pos].destroy()

            }

            function addTarget()
            {
                var count = map.mapItems.length
                var component = Qt.createComponent("Target.qml")
                if (component.status === Component.Ready) {
                    var object = component.createObject(map)
                    if(object !== null) {
                        object.objectName = extractedXML.currTarget.ID;
                        object.addCoordinate(QtPositioning.coordinate(extractedXML.currTarget.Latitude, extractedXML.currTarget.Longitude));
                        if (extractedXML.currTarget.Classification == 'Aircraft')
                            object.line.color = 'lightgreen'
                        else if (extractedXML.currTarget.Classification == 'Other')
                            object.line.color = 'black'
                        else if (extractedXML.currTarget.Classification == 'Vehicle')
                            object.line.color = 'orange'
                        else if (extractedXML.currTarget.Classification == 'Personal')
                            object.line.color = 'blue'
                    }
                    map.addMapItem(object)
                    //update list of items
                    var myArray = new Array()
                    for (var i = 0; i<count; i++){
                        myArray.push(map.mapItems[i])
                    }
                    myArray.push(object)
                    map.mapItems = myArray


                } else {
                    console.log("Target is not supported right now, please call us later.")
                }
            }

            function addTargetIcon()
            {
                var count = map.mapItemIcons.length
                var component
                if (extractedXML.currTarget.Classification == 'Aircraft')
                   component = Qt.createComponent("TargetIconDrone.qml")
                else if (extractedXML.currTarget.Classification == 'Other')
                    component = Qt.createComponent("TargetIconOther.qml")
                else if (extractedXML.currTarget.Classification == 'Vehicle')
                    component = Qt.createComponent("TargetIconVehicle.qml")
                else if (extractedXML.currTarget.Classification == 'Personal')
                    component = Qt.createComponent("TargetIconPerson.qml")
                else
                    component = Qt.createComponent("TargetIconOther.qml")

                if (component.status === Component.Ready) {
                    var object = component.createObject(map)
                    if(object !== null) {
                        object.coordinate = QtPositioning.coordinate(extractedXML.currTarget.Latitude, extractedXML.currTarget.Longitude)
                    }
                    map.addMapItem(object)
                    //update list of items
                    var myArray = new Array()
                    for (var i = 0; i<count; i++){
                        myArray.push(map.mapItemIcons[i])
                    }
                    myArray.push(object)
                    map.mapItemIcons = myArray


                } else {
                    console.log("Target is not supported right now, please call us later.")
                }
            }

            onNewPosition: {
                //map.center = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
                position.coordinate = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
            }

            onClearTrajectory: {
                var count = map.mapItems.length

                for (var i = 0; i < count; i++ ) {
                    if (map.mapItems[i].objectName == extractedXML.currTarget.ID) {
                        deleteTarget(i)
                        console.log("Trajectory Cleared!!!")
                    }
                }

            }

            onReadTarget: {
                // compare ID from Target Objects with received XML
                var count = map.mapItems.length
                var found = 0
                var idx = 0
                for (var i = 0; i < count; i++ ) {
                    if (map.mapItems[i].objectName == extractedXML.currTarget.ID) {
                        found = 1
                        idx = i
                        //console.log(extractedXML.currTarget.ID)
                        break
                    }
                }
                // ID is not in a table, create new component
                if (found == 0) {
                    addTarget()
                    addTargetIcon()
                }
                // ID is found, update elements
                else {
                    //console.log(map.mapItems[idx].path.length);
                    map.mapItems[idx].addCoordinate(QtPositioning.coordinate(extractedXML.currTarget.Latitude, extractedXML.currTarget.Longitude));
                    map.mapItemIcons[idx].coordinate = QtPositioning.coordinate(extractedXML.currTarget.Latitude, extractedXML.currTarget.Longitude);
                    //map.addMapItem(mapItems[idx]);
                }
            }

            //onClearTrajectory: {
            //    deleteTargets()
            //}

            //onPathChanged: {
            //    addTarget()
            //}
        }

        MapQuickItem {
            id: position

            sourceItem: Image {
                id: positionMarker
                source: "qrc:///location.png"
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
                    //target.path = extractedXML.path();

                    //map.center = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
                    //parent.coordinate = QtPositioning.coordinate(extractedXML.getLatitude(), extractedXML.getLongitude())
            //    }
            //}



        }

        Component.onCompleted: {
            mapItems = new Array();
            mapItemIcons = new Array();
        }

    }

}
