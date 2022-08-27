import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import AlvModbus 1.0
import QtQuick 2.5
import QtQuick.Window 2.2
//import QtQuick.Controls 1.0

Popup {
    id: alarmsPopup
    modal: true
    background.visible: true
    width: 680
    height: 460
    leftPadding: 0
    bottomPadding: 0
    topPadding: 0

    Rectangle {
        id: rectangle
        color: "#00000B"
        x: 0
        y: 0
        width: alarmsPopup.width
        height: 40
        Text {
            id: alarmPopHeaderRect
            color: "#ffffff"
            text: qsTr("LIGHTS")
            anchors.verticalCenter: parent.verticalCenter
            font.pointSize: 12
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    Rectangle{
        id: alarmPopMainRect
        y: 40
        width: alarmsPopup.width
        height: 420
        //color: "#00000B"
        color:yellow
        Image {
            width: parent.width
            height: parent.height
            y:0
            source: "qrc:/pictures/second"
            fillMode: Image.PreserveAspectFit
        }


        TabBar {
            id: bar
            width: alarmPopMainRect.width
            height: 40
            onFocusChanged: {
                group.checkedButton = null
            }
            TabButton {
                id: basicSettings
                text: qsTr("First_floor")
                x: 0
                y: 0
                width: bar/3
                height: 40
                font.bold: false
                font.pointSize: 10
                checkable: true

                contentItem: Text {
                    text: basicSettings.text
                    font: basicSettings.font
                    color: basicSettings.checked ? "#FFFFFF" : "#00000B"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                background: Rectangle {
                    implicitWidth: basicSettings.width
                    implicitHeight: 40
                    color: basicSettings.checked ? "#00000B" : "#999999"
                }


            }
            TabButton {
                id: extraTab
                text: qsTr("Second_floor")
                x: bar-bar/3
                y: 0
                width: bar/3
                height: 40
                font.bold: false
                font.pointSize: 10
                checkable: true

                contentItem: Text {
                    text: extraTab.text
                    font: extraTab.font
                    color: extraTab.checked ? "#FFFFFF" : "#00000B"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                background: Rectangle {
                    implicitWidth: extraTab.width
                    implicitHeight: 40
                    //source: "qrc:/pictures/home_back5"
                    color: extraTab.checked ? "#00000B" : "#999999"
                }

            }

            TabButton {
                id: outside
                text: qsTr("Outside")
                x: bar/3
                y: 0
                width: bar/3
                height: 40
                font.bold: false
                font.pointSize: 10
                checkable: true

                contentItem: Text {
                    text: outside.text
                    font: outside.font
                    color: outside.checked ? "#FFFFFF" : "#00000B"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                background: Rectangle {
                    implicitWidth: outside.width
                    implicitHeight: 40
                    color: outside.checked ? "#00000B" : "#999999"
                }
            }
        }

        StackLayout {
            width: parent.width
            currentIndex: bar.currentIndex

            Item {
                id: homeTab
                Button {
                    id: light1
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light1BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light1.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image1
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light1.checked === true
                            PropertyChanges {
                                target: image1
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light1BtnColor
                                color: "transparent"
                            }

                        },
                        State {
                            name: "off"//off state
                            when: light1.checked === false
                            PropertyChanges {
                                target: image1
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light1BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light1.checked === true){
                            modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                        }
                        else if((light1.checked === false)){
                            modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                        }
                    }
                }


                Button {
                    id: light2
                    x: 180
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light1.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light2BtnColor
                        width: light2.width
                        height: light2.height
                        radius: 4
                        color: light2.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image2
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2.checked === true
                            PropertyChanges {
                                target: image2
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light2BtnColor
                                color: "transparent"
                            }

                        },
                        State {
                            name: "off"//off state
                            when: light2.checked === false
                            PropertyChanges {
                                target: image2
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light2BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light2.checked === true){
                            modbus.writeSingleCoil(2/*address*/,1,1/*on*/)
                            //modbus.writeRegisterRequest(5,1,1,AlvModbus.Coils,1)
                        }
                        else if((light2.checked === false)){
                            modbus.writeSingleCoil(2/*address*/,1,0/*off*/)
                            //modbus.writeRegisterRequest(5,1,0,AlvModbus.Coils,1)
                        }
                    }
                }


                Button {
                    id: light3
                    //x: 180
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light2.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light3BtnColor
                        width: light3.width
                        height: light3.height
                        radius: 4
                        color: light3.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image3
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }
//                    onClicked: {
//                         if(modbus.readSingleCoil(6,1)>0){
//                             //modbus.writeSingleCoil(5,1,0);
//                             image2.source= "qrc:/pictures/light_off"
//                             modbus.writeSingleCoil(6,1,0);
//                         }
//                         else{
////                             modbus.writeSingleCoil(5,1,1);
//                             image2.source =  "qrc:/pictures/light_on2"
//                             modbus.writeSingleCoil(6,1,1);
//                         }
//                    }


                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light3.checked === true
                            PropertyChanges {
                                target: image3
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light3BtnColor
                                color: "transparent"
                            }

                        },
                        State {
                            name: "off"//off state
                            when: light3.checked === false
                            PropertyChanges {
                                target: image3
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light3BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light3.checked === true){
                            modbus.writeSingleCoil(3/*address*/,1,1/*on*/)
                        }
                        else if((light3.checked === false)){
                            modbus.writeSingleCoil(3/*address*/,1,0/*off*/)
                        }
                    }
                }

            }
            Item {
                id: extraTabLayout

                Image {
                    width: parent.width
                    height: parent.height
                    anchors.fill: parent
                    fillMode:  Image.PreserveAspectFit
                    source: "qrc:/pictures/second"
                    opacity: 0.1
                    }

                Button {
                    id: light2_1
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light2_1_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light2_1.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image4
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2_1.checked === true
                            PropertyChanges {
                                target: image4
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light2_1_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light2_1.checked === false
                            PropertyChanges {
                                target: image4
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light2_1_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light2_1.checked === true){
                            modbus.writeSingleCoil(4/*address*/,1,1/*on*/)
                        }
                        else if((light2_1.checked === false)){
                            modbus.writeSingleCoil(4/*address*/,1,0/*off*/)
                        }
                    }
                }

                Button {
                    id: light2_2
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light2_1.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light2_2_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light2_2.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image5
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2_2.checked === true
                            PropertyChanges {
                                target: image5
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light2_2_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light2_2.checked === false
                            PropertyChanges {
                                target: image4
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light2_2_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light2_2.checked === true){
                            modbus.writeSingleCoil(5/*address*/,1,1/*on*/)
                        }
                        else if((light2_2.checked === false)){
                            modbus.writeSingleCoil(5/*address*/,1,0/*off*/)
                        }
                    }
                }

                Button {
                    id: light2_3
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light2_2.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light2_3_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light2_3.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image6
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2_3.checked === true
                            PropertyChanges {
                                target: image6
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light2_3_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light2_3.checked === false
                            PropertyChanges {
                                target: image6
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light2_3_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light2_3.checked === true){
                            modbus.writeSingleCoil(6/*address*/,1,1/*on*/)
                        }
                        else if((light2_3.checked === false)){
                            modbus.writeSingleCoil(6/*address*/,1,0/*off*/)
                        }
                    }
                }

                Button {
                    id: light2_4
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light2_3.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light2_4_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light2_4.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image2_4
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2_4.checked === true
                            PropertyChanges {
                                target: image2_4
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light2_4_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light2_4.checked === false
                            PropertyChanges {
                                target: image2_4
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light2_4_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light2_4.checked === true){
                            modbus.writeSingleCoil(7/*address*/,1,1/*on*/)
                        }
                        else if((light2_4.checked === false)){
                            modbus.writeSingleCoil(7/*address*/,1,0/*off*/)
                        }
                    }
                }
            }

            Item {
                id: outsideLayout

                Button {
                    id: light3_1
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light3_1_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light3_1.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image3_1
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light3_1.checked === true
                            PropertyChanges {
                                target: image3_1
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light3_1_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light3_1.checked === false
                            PropertyChanges {
                                target: image3_1
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light3_1_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light3_1.checked === true){
                            modbus.writeSingleCoil(8/*address*/,1,1/*on*/)
                        }
                        else if((light3_1.checked === false)){
                            modbus.writeSingleCoil(8/*address*/,1,0/*off*/)
                        }
                    }
                }

                Button {
                    id: light3_2
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light3_1.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light3_2_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light3_2.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image3_2
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light3_2.checked === true
                            PropertyChanges {
                                target: image3_2
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light3_2_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light3_2.checked === false
                            PropertyChanges {
                                target: image3_2
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light3_2_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light3_2.checked === true){
                            modbus.writeSingleCoil(9/*address*/,1,1/*on*/)
                        }
                        else if((light3_2.checked === false)){
                            modbus.writeSingleCoil(9/*address*/,1,0/*off*/)
                        }
                    }
                }

                Button {
                    id: light3_3
                    x: 30
                    y: 60
                    width: 80
                    height: 80
                    anchors.left: light3_2.right
                    anchors.top: parent.top
                    anchors.leftMargin: 30
                    anchors.topMargin: 60
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
                        id:light3_3_BtnColor
                        width: light1.width
                        height: light1.height
                        radius: 4
                        color: light3_3.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image3_3
                        x: 5
                        y: 5
                        width: 70
                        height: 70
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light3_3.checked === true
                            PropertyChanges {
                                target: image3_3
                                source: "qrc:/pictures/light_on2"
                            }
                            PropertyChanges {
                                target: light3_3_BtnColor
                                color: "transparent"
                            }
                        },
                        State {
                            name: "off"//off state
                            when: light3_3.checked === false
                            PropertyChanges {
                                target: image3_3
                                source: "qrc:/pictures/light_off"
                            }
                            PropertyChanges {
                                target: light3_3_BtnColor
                                color: "transparent"
                            }
                        }
                    ]
                    onCheckedChanged: {
                        if(light3_3.checked === true){
                            modbus.writeSingleCoil(10/*address*/,1,1/*on*/)
                        }
                        else if((light3_3.checked === false)){
                            modbus.writeSingleCoil(10/*address*/,1,0/*off*/)
                        }
                    }
                }
            }
        }
    }

    ButtonGroup {
        id: group
        buttons: homeTab.children
        checkState: Qt.Unchecked
        exclusive: true
        checkedButton: null
    }


    Connections {
        target: modbus
        onReadCoilLight1_BtnCompleted:{ light1.state = value}
        onReadCoilLight2_BtnCompleted:{ light2.state = value}
        onReadCoilLight3_BtnCompleted:{ light3.state = value}
        onReadCoilLight2_1_BtnCompleted:{ light2_1.state = value}
        onReadCoilLight2_2_BtnCompleted:{ light2_2.state = value}
        onReadCoilLight2_3_BtnCompleted:{ light2_3.state = value}
        onReadCoilLight2_4_BtnCompleted:{ light2_4.state = value}
        onReadCoilLight3_1_BtnCompleted:{ light3_1.state = value}
        onReadCoilLight3_2_BtnCompleted:{ light3_2.state = value}
        onReadCoilLight3_3_BtnCompleted:{ light3_3.state = value}
        //onReadCoilLockBtnCompleted:{ light2.state = value}
        //onreadSingleCoil
        //onReadHRegOxygenBtnCompleted: {alProgressBarValue = value}
    }
}

