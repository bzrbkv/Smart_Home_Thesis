import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.14
import AlvModbus 1.0
import QtQml.Models 2.2
import QtQml 2.2
import QtQuick 2.12
import QtQuick.Controls 1.4
import QtQuick.Controls 2.12
import QtQuick.Controls.Styles 1.4
import QtGraphicalEffects 1.0

Popup {
    id: climatePopup
    background.visible: false
    width: 630
    height: 550
    leftPadding: 0
    bottomPadding: 0
    topPadding: 10

    Image {
        width: parent.width
        height: parent.height
        x: -50
        y: -50
       source: "qrc:/pictures/backgrd"
       fillMode: Image.PreserveAspectFit
    }

    Rectangle {
        id: rectangle
        color: "#72bcd4"
        x: -100
        y: 0
        width: climatePopup.width
        height: 40
        Text {
            id: climatePopHeaderRect
            color: "#ffffff"
            text: qsTr("                КЛИМАТ")
            anchors.verticalCenter: parent.verticalCenter
            font.pointSize: 12
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    Rectangle {
        id: temperature
        color: "transparent"
//        border.color: "#72bcd4"
        border.color: "#99cfe0"
        border.width: 0.5
        radius: 15
        x: 100
        y: 80
        width: 120
        height: 180
        Text {
            id: temperatureText
            color: "#ffffff"
            text: qsTr("ТЕМПЕРАТУРА")
//            anchors.verticalCenter: parent.verticalCenter
            topPadding: 10
            font.pointSize: 8
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Image {
            width: 80
            height: 80
            //topMargin: 30
            x: 30
            y: 35
           source: "qrc:/pictures/cold"
           fillMode: Image.PreserveAspectFit
        }

        Item {
            x: 30
            y: 130
//            FontLoader{
//                id: fontlcd
//                source: "DS-DIGI.TTF"
//            }

            Text {
                id:lcdnumber1
                color: "white"
                text: qsTr(" 31")
                //font.family: fontlcd.name
                font.pixelSize: 30
            }

            Text {
                id:lcdnumber2
                color: "white"
                text: qsTr("         C'")
                //font.family: fontlcd.name
                font.pixelSize: 15
            }

            Connections {
                target: modbus
                onReadHolTem_BtnCompleted:{ lcdnumber1.text = value }
            }
        }
    }


    Rectangle {
        id: humidity
        color: "transparent"
//        border.color: "#72bcd4"
        border.color: "#99cfe0"
        border.width: 0.5
        radius: 15
        x: 300
        y: 80
        width: 120
        height: 180
        Text {
            id: humidityText
            color: "#ffffff"
            text: qsTr("НЫМДУУЛУК")
            topPadding: 10
            font.pointSize: 8
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Image {
            width: 80
            height: 80
            x: 30
            y: 35
           source: "qrc:/pictures/humidity"
           fillMode: Image.PreserveAspectFit
        }

        Item {
            x: 30
            y: 130
//            FontLoader{
//                id: fontlcd
//                source: "DS-DIGI.TTF"
//            }

            Text {
                id:lcdnumber21
                color: "white"
                text: qsTr(" 56")
                //font.family: fontlcd.name
                font.pixelSize: 30
            }

            Text {
                id:lcdnumber22
                color: "white"
                text: qsTr("          %")
                //font.family: fontlcd.name
                font.pixelSize: 15
            }

//            Connections {
//                target: modbus
//                onReadHolTem_BtnCompleted:{ lcdnumber21.text ="  "+value }
//            }
        }
    }
}
