import QtQuick 2.14
import QtQuick.Window 2.14
import QtMultimedia 5.12
import AlvModbus 1.0

Window {

    id: window
    width: 920
    height: 800
    color: "black"
    visible: true
    property bool isCameraAvailable: QtMultimedia.availableCameras.length > 0

    Image {
        width: parent.width
        height: parent.height
        y:50
           source: "qrc:/pictures/home_back6"
           fillMode: Image.PreserveAspectFit
        }


    Menu {
        id: mainScreen
        x: 150
        y: 80
        width: 635
        height: 800
    }

        Energy{
            id: energyPopup
            opacity: 0.95
        }
        Climate{
            id: climatePopup
            opacity: 0.9
        }

        Socket{
            id: socketPopup
            opacity: 0.9
        }

        Lock{
            id: lockPopup
            opacity: 0.9
        }

        Rectangle{
            id : cameraViewRect
            width: 600
            height: 610
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

        VideoPlayer{
            id: videoPlayer
            opacity: 0.9
        }

    AlvModbus{
        id: modbus
    } 
}
