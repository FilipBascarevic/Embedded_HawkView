import QtQuick 2.0
import QtLocation 5.9

MapPolyline {
    id: track
    line.width: 5
    line.color: 'blue'
    path: [
                { latitude: -27, longitude: 153.0 },
                { latitude: -27, longitude: 154.1 },
                { latitude: -28, longitude: 153.5 },
                { latitude: -29, longitude: 153.5 }
            ]
}

