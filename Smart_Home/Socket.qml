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
            text: qsTr("                Электр жабдыктары")
            anchors.verticalCenter: parent.verticalCenter
            font.pointSize: 12
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }


    Button {
        id: socket_1
        x: 120
        y: 120
        width: 100
        height: 100
        checkable: true
        autoExclusive: true
        property bool wasChecked
            onPressed: wasChecked = checked
            onReleased: {
                if (wasChecked) {
                checked = false;
                toggled(); // emit the toggled signal manually, since we changed the checked value programmatically but it still originated as an user interaction.
                }
            }
        background: Rectangle {
            id:socket_1_BtnColor
            width: socket_1.width
            height: socket_1.height
            radius: 4
            color: socket_1.checked ? "transparent" : "transparent"
        }

        Image {
            id: image_1
            x: 5
            y: 5
            width: 90
            height: 90
            source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/plug5"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: socket_1.checked === true
                PropertyChanges {
                    target: image_1
                    source: "qrc:/pictures/plug4"
                }
                PropertyChanges {
                    target: socket_1_BtnColor
                    color: "transparent"
                }

            },
            State {
                name: "off"//off state
                when: socket_1.checked === false
                PropertyChanges {
                    target: image_1
                    source: "qrc:/pictures/plug5"
                }
                PropertyChanges {
                    target: socket_1_BtnColor
                    color: "transparent"
                }
            }
        ]
        onCheckedChanged: {
            if(socket_1.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((socket_1.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }

        Connections {
            target: modbus
            onReadCoilLight1_BtnCompleted:{ socket_1.state = value}
        }
    }

    Button {
        id: socket_2
        x: 120
        y: 300
        width: 100
        height: 100
        checkable: true
        autoExclusive: true
        property bool wasChecked
            onPressed: wasChecked = checked
            onReleased: {
                if (wasChecked) {
                checked = false;
                toggled(); // emit the toggled signal manually, since we changed the checked value programmatically but it still originated as an user interaction.
                }
            }
        background: Rectangle {
            id:socket_2_BtnColor
            width: socket_2.width
            height: socket_2.height
            radius: 4
            color: socket_2.checked ? "transparent" : "transparent"
        }

        Image {
            id: image_2
            x: 5
            y: 5
            width: 90
            height: 90
            source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/plug5"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: socket_2.checked === true
                PropertyChanges {
                    target: image_2
                    source: "qrc:/pictures/plug4"
                }
                PropertyChanges {
                    target: socket_2_BtnColor
                    color: "transparent"
                }

            },
            State {
                name: "off"//off state
                when: socket_2.checked === false
                PropertyChanges {
                    target: image_2
                    source: "qrc:/pictures/plug5"
                }
                PropertyChanges {
                    target: socket_2_BtnColor
                    color: "transparent"
                }
            }
        ]
        onCheckedChanged: {
            if(socket_2.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((socket_2.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }

        Connections {
            target: modbus
            onReadCoilLight1_BtnCompleted:{ socket_2.state = value}
        }
    }

    Button {
        id: socket_3
        x: 300
        y: 120
        width: 100
        height: 100
        checkable: true
        autoExclusive: true
        property bool wasChecked
            onPressed: wasChecked = checked
            onReleased: {
                if (wasChecked) {
                checked = false;
                toggled(); // emit the toggled signal manually, since we changed the checked value programmatically but it still originated as an user interaction.
                }
            }
        background: Rectangle {
            id:socket_3_BtnColor
            width: socket_3.width
            height: socket_3.height
            radius: 4
            color: socket_3.checked ? "transparent" : "transparent"
        }

        Image {
            id: image_3
            x: 5
            y: 5
            width: 90
            height: 90
            source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/plug5"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: socket_3.checked === true
                PropertyChanges {
                    target: image_3
                    source: "qrc:/pictures/plug4"
                }
                PropertyChanges {
                    target: socket_3_BtnColor
                    color: "transparent"
                }

            },
            State {
                name: "off"//off state
                when: socket_3.checked === false
                PropertyChanges {
                    target: image_3
                    source: "qrc:/pictures/plug5"
                }
                PropertyChanges {
                    target: socket_3_BtnColor
                    color: "transparent"
                }
            }
        ]
        onCheckedChanged: {
            if(socket_3.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((socket_3.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }

        Connections {
            target: modbus
            onReadCoilLight1_BtnCompleted:{ socket_3.state = value}
        }
    }


    Button {
        id: socket_4
        x: 300
        y: 300
        width: 100
        height: 100
        checkable: true
        autoExclusive: true
        property bool wasChecked
            onPressed: wasChecked = checked
            onReleased: {
                if (wasChecked) {
                checked = false;
                toggled(); // emit the toggled signal manually, since we changed the checked value programmatically but it still originated as an user interaction.
                }
            }
        background: Rectangle {
            id:socket_4_BtnColor
            width: socket_4.width
            height: socket_4.height
            radius: 4
            color: socket_1.checked ? "transparent" : "transparent"
        }

        Image {
            id: image_4
            x: 5
            y: 5
            width: 90
            height: 90
            source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/plug5"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: socket_4.checked === true
                PropertyChanges {
                    target: image_4
                    source: "qrc:/pictures/plug4"
                }
                PropertyChanges {
                    target: socket_4_BtnColor
                    color: "transparent"
                }

            },
            State {
                name: "off"//off state
                when: socket_4.checked === false
                PropertyChanges {
                    target: image_4
                    source: "qrc:/pictures/plug5"
                }
                PropertyChanges {
                    target: socket_4_BtnColor
                    color: "transparent"
                }
            }
        ]
        onCheckedChanged: {
            if(socket_4.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((socket_4.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }

        Connections {
            target: modbus
            onReadCoilLight1_BtnCompleted:{ socket_4.state = value}
        }
    }
}
