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
            text: qsTr("                ДАРБАЗА")
            anchors.verticalCenter: parent.verticalCenter
            font.pointSize: 12
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }



    Button {
        id: lock_1
        x: 210
        y: 180
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
            id:lock_1_BtnColor
            width: lock_1.width
            height: lock_1.height
            radius: 4
            color: lock_1.checked ? "transparent" : "transparent"
        }

        Image {
            id: image_1
            x: 5
            y: 5
            width: 90
            height: 90
            source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/padlock_close"
            fillMode: Image.PreserveAspectFit
        }

        state: "off"
        states: [
            State {
                name: "on"//on state
                when: lock_1.checked === true
                PropertyChanges {
                    target: image_1
                    source: "qrc:/pictures/padlock_open"
                }
                PropertyChanges {
                    target: lock_1_BtnColor
                    color: "transparent"
                }

            },
            State {
                name: "off"//off state
                when: lock_1.checked === false
                PropertyChanges {
                    target: image_1
                    source: "qrc:/pictures/padlock_close"
                }
                PropertyChanges {
                    target: lock_1_BtnColor
                    color: "transparent"
                }
            }
        ]
        onCheckedChanged: {
            if(lock_1.checked === true){
                modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
            }
            else if((lock_1.checked === false)){
                modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
            }
        }
    }
}
