import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.14
import QtMultimedia 5.12

Rectangle {
    id: rightScreen
    x: 300
    width: 635
    height: 800
    color:"transparent"
    radius:200
    Text {
        id: text7
        //x: 140
        y: 60
        width: 300
        height: 50
        color: "#ffffff"
        text: qsTr("     АКЫЛДУУ ҮЙ")
        font.pixelSize: 30
        wrapMode: Text.Wrap
        anchors.horizontalCenter: parent.horizontalCenter

        Image {
            id: im
            x: 235
            y: 2
            width: 30
            height: 30
            source: "qrc:/pictures/home"
            fillMode: Image.PreserveAspectFit
        }
    }

    Button {
        id: climateButton
        height: 120
        width: 120
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.rightMargin: parent.width-parent.width/4
        anchors.leftMargin: 30
        anchors.topMargin: 160
        font.pointSize: 9
        font.bold: true
        checkable: false
        contentItem: Text {
            font: climateButton.font
            color: "#ffffff"
            text: " КЛИМАТ"
            horizontalAlignment: Text.AlignHCenter
            anchors.top: parent.top
            anchors.topMargin: 15
            anchors.bottom: parent.bottom
            //verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            width: climateButton.width-5
            height: climateButton.height
//                color: alarmButton.down ? "#cccccc" : "#27292F"
            color: climateButton.down ? "#cccccc" : "black"
            opacity: 0.5
            //border.color: "#c65102"
            border.color: "#ffffff"
            radius: 90
        }
        Image {
            id: image
            x: 35
            y: 40
            width: 50
            height: 50
            source: "qrc:/pictures/thermometer"
            fillMode: Image.PreserveAspectFit
        }
        onClicked: {

            climatePopup.open()
        }
    }
    Button {
        id: lightButton
        height: 60
        //width: alarmButton.width
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: climateButton.bottom
        anchors.rightMargin: parent.width/2
        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: true
        contentItem: Text {
            font: lightButton.font
            color: "#ffffff"
            text: "             ЖАРЫКТЫ БАШКАРУУ"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            id: lightBtnColor
            width: lightButton.width-5
            height: lightButton.height
            //color: suctionButton.down ? "#cccccc" : "#333333"
            color: lightButton.down ? "#cccccc" : "black"
            opacity: 0.5
            radius: 2
//            border.color: "#c65102"
            border.color: "#ffffff"
        }

        Image {
            id: image1
            x: 30
            y: 6
            width: 40
            height: 50
            source: "qrc:/pictures/light"
            fillMode: Image.PreserveAspectFit
        }

        onClicked: {
            energyPopup.open()
        }
    }

    Button {
        id: cameraButton
        height: 60
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: lightButton.bottom
        anchors.rightMargin: parent.width/2
        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: false
        contentItem: Text {
            font: cameraButton.font
            color: "#ffffff"
            text: "              КЫЙМЫЛДЫ КӨЗӨМӨЛДӨӨ"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            width: cameraButton.width-5
            height: cameraButton.height
//                color: nebulizerButton.down ? "#cccccc" : "#333333"
            color: cameraButton.down ? "#cccccc" : "black"
            opacity:0.5
            radius: 2
            //border.color: "#c65102"
            border.color: "#ffffff"
        }

        Image {
            id: image2
            x: 35
            y: 13
            width: 35
            height: 35
            source: "qrc:/pictures/camera"
            fillMode: Image.PreserveAspectFit
        }

        onClicked: {

            videoPlayer.visible=true;
        }
    }
    Button {
        id: lockButton
        height: 60
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: cameraButton.bottom
        anchors.rightMargin: parent.width/2

        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: true
        contentItem: Text {
            font: lockButton.font
            color: "#ffffff"
            text: "           ДАРБАЗА"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        background: Rectangle{
            id: lockBtnColor
            width: lockButton.width-5
            height: lockButton.height
            //color: lockButton.checked ? "#13A10E" : "black"
            color: "black"
            opacity: 0.5
            radius: 2
            //border.color: "#c65102"
            border.color: "#ffffff"
        }
        Image {
            id: image3
            x: 35
            y: 15
            width: 35
            height: 35
            source: "qrc:/pictures/lock"
            fillMode: Image.PreserveAspectFit
        }

        onClicked: {
            lockPopup.visible=true;
        }
    }

    Button {
        id: airButton
        height: 120
        width: 120
        anchors.left: climateButton.right
        anchors.right: parent.right
        anchors.top: parent.top
//        anchors.bottom: freezeButton.top
        anchors.rightMargin: 35
        anchors.leftMargin: parent.width/2
        anchors.topMargin: 160
        anchors.bottomMargin: 20
        font.pointSize: 9
        font.bold: true
        checkable: true

        contentItem: Text {
            font: airButton.font
            color: "#ffffff"
            text: " РОЗЕТКА"
            horizontalAlignment: Text.AlignHCenter
            anchors.top: parent.top
            anchors.topMargin: 15
            anchors.bottom: parent.bottom
            //verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            id: airBtnColor
            width: airButton.width
            height: airButton.height
//            color: airButton.checked ? "#13A10E" : "black"
            color: "black"
            opacity: 0.5
            radius: 90
            //border.color: "#c65102"
            border.color: "#ffffff"
        }
        Image {
            id: image4
            x: 40
            y: 45
            width: 50
            height: 50
            source: "qrc:/pictures/plug7"
            fillMode: Image.PreserveAspectFit
        }

        onClicked: {
            socketPopup.open()
        }
    }
    Button {
        id: freezeButton
        height: 60
        anchors.left: lightButton.right
        anchors.right: parent.right
        anchors.top: airButton.bottom
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: true
        contentItem: Text {
            font: freezeButton.font
            color: "#ffffff"
            text: "           КӨШӨГӨЛӨР"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        background: Rectangle{
            id: freezeBtnColor
            width: freezeButton.width
            height: freezeButton.height
            color: freezeButton.checked ? "#13A10E" : "black"
            opacity:0.5
            radius: 2
            //border.color: "#c65102"
            border.color: "#ffffff"
        }

        Image {
            id: image5
            x: 32
            y: 15
            width: 30
            height: 30
            source: "qrc:/pictures/shade"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: freezeButton.checked === true
                PropertyChanges {
                    target: image5
                    source: "qrc:/pictures/shade"
                }
                PropertyChanges {
                    target: freezeBtnColor
                    color: "#13A10E"
                }

            },
            State {
                name: "off"//off state
                when: freezeButton.checked === false
                PropertyChanges {
                    target: image5
                    source: "qrc:/pictures/shade"
                }
                PropertyChanges {
                    target: freezeBtnColor
                    color: "black"
                }
            }
        ]
        onCheckedChanged: {
            if(freezeButton.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((freezeButton.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }
    }
    Button {
        id: setupButton
        height: 60
        anchors.left: cameraButton.right
        anchors.right: parent.right
        anchors.top: freezeButton.bottom
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: true
        contentItem: Text {
            font: setupButton.font
            color: "#ffffff"
            text: "           ЖЫЛЫТКЫЧ"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            width: setupButton.width
            height: setupButton.height
            //color: setupButton.down ? "#cccccc" : "#27292F"
            color: setupButton.down ? "#cccccc" : "black"
            opacity:0.5
            radius: 2
            //border.color: "#c65102"
            border.color: "#ffffff"
        }

        Image {
            id: image6
            x: 30
            y: 12
            width: 35
            height: 35
            source: "qrc:/pictures/radiator"
            fillMode: Image.PreserveAspectFit
        }
    }
    Button {
        id: standbyButton
        height: 60
        anchors.left: lockButton.right
        anchors.right: parent.right
        anchors.top: setupButton.bottom
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.topMargin: 40
        font.pointSize: 9
        font.bold: true
        checkable: false
        contentItem: Text {
            font: standbyButton.font
            color: "#ffffff"
            text: "           НАСТРОЙКА"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        background: Rectangle{
            id: backColor
            width: standbyButton.width
            height: standbyButton.height
            color: standbyButton.down ? "#cccccc" : "black"
            opacity: 0.5
            radius: 2
            //border.color: "#c65102"
            border.color: "#ffffff"
            //"#F8BC00"
        }
        Image {
            id: image7
            x: 30
            y: 12
            width: 35
            height: 35
            source: "qrc:/pictures/gear"
            fillMode: Image.PreserveAspectFit
        }
        onClicked: {
            confirmPopup.open()
        }
    }
    Connections{
        target: modbus
        onReadCoilLockBtnCompleted:{ airButton.state = value}
        //onReadSingleCoilCompleted:{ airButton.state = value}
    }
}
