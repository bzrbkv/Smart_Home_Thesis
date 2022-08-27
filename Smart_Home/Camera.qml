import QtQuick 2.12
import QtQuick.Window 2.12
import QtMultimedia 5.12
import QtQuick.Controls 2.12
import QtQuick.Dialogs 1.3


    Rectangle{
        id : cameraViewRect
        width: 1280
        height: 720
        visible: false

        VideoOutput {
            id: videoOutput
            source: camera
            orientation: 0
            anchors.fill: parent
            Camera {
                id: camera
                deviceId: QtMultimedia.availableCameras[0].deviceId
                viewfinder.resolution : Qt.size(1280, 720)
                cameraState: Camera.LoadedState
            }
        }
        Component.onCompleted: {
            console.log("device id ", camera.deviceId)
            console.log("is camera available ", isCameraAvailable)
            console.log("camera count ", QtMultimedia.availableCameras.length)
        }
    }

