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

Popup {
    id: alarmsPopup
//    modal: true
    background.visible: false
    width: 630
    height: 550
    leftPadding: 0
    bottomPadding: 0
    topPadding: 10


    TabView {
        id: tabView
        width: 630
        height: 550
        Rectangle{color:"black"}

        Tab {
            id: tab1
            title: qsTr("1-КАБАТ")
            component: Item {
                id: rect1
                Image {
                    width: parent.width+100
                    height: parent.height+112
                    x:-50
                    y:-50
                   source: "qrc:/pictures/first_fl3"
                   fillMode: Image.PreserveAspectFit
                }

                Button {
                    id: light1
                    x: 220
                    y: 190
                    width: 50
                    height: 50
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
                        width: 40
                        height: 40
                        source:"qrc:/pictures/light_off"
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
                            //modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                              modbus.writeSingleHolRegister(5000, 250)
                        }
                        else if((light1.checked === false)){
                            //modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                              modbus.writeSingleHolRegister(5000, 0)
                        }
                    }

//                    Connections {
//                        target: modbus
//                        onReadCoilLight1_BtnCompleted:{ light1.state = value}
//                    }
                }


            Button {
                id: light2
                x: 420
                y: 190
                width: 50
                height: 50
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
                    width: 40
                    height: 40
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
                        //modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                        modbus.writeSingleHolRegister(5001, 250)
                    }
                    else if((light2.checked === false)){
                        //modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                        modbus.writeSingleHolRegister(5001, 0)
                    }
                }

//                Connections {
//                    target: modbus
//                    onReadCoilLight1_BtnCompleted:{ light2.state = value}
//                }
            }


            Button {
                id: light3
                x: 420
                y: 340
                width: 50
                height: 50
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
                    width: 40
                    height: 40
                    source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                    fillMode: Image.PreserveAspectFit
                }

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
                        //modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                        modbus.writeSingleHolRegister(5002, 250)
                    }
                    else if((light3.checked === false)){
                        //modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                        modbus.writeSingleHolRegister(5002, 0)
                    }
                }

//                Connections {
//                    target: modbus
//                    onReadCoilLight1_BtnCompleted:{ light3.state = value}
//                }
            }

        }

        }

        Tab {
            id: tab2
            title: qsTr("2-КАБАТ")

            component: Item {
                id: rect2
                Image {
                   width: parent.width+100
                   height: parent.height+112
                   x:-50
                   y:-50
                   source: "qrc:/pictures/second_fl3"
                   fillMode: Image.PreserveAspectFit
                }


                Button {
                    id: light2_1
                    x: 220
                    y: 190
                    width: 50
                    height: 50
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
                        width: light2_1.width
                        height: light2_1.height
                        radius: 4
                        color: light2_1.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image2_1
                        x: 5
                        y: 5
                        width: 40
                        height: 40
                        source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                        fillMode: Image.PreserveAspectFit
                    }

                    state: "off"
                    states: [
                        State {
                            name: "on"//on state
                            when: light2_1.checked === true
                            PropertyChanges {
                                target: image2_1
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
                                target: image2_1
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
                            //modbus.writeSingleCoil(5003/*address*/,1,250/*on*/)
                            modbus.writeSingleHolRegister(5003, 250)
                        }
                        else if((light2_1.checked === false)){
                            //modbus.writeSingleCoil(5003/*address*/,1,0/*off*/)
                            modbus.writeSingleHolRegister(5003, 0)
                        }
                    }

//                    Connections {
//                        target: modbus
//                        onReadCoilLight1_BtnCompleted:{ light2_1.state = value}
//                    }
                }


            Button {
                id: light2_2
                x: 420
                y: 190
                width: 50
                height: 50
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
                    width: light2_2.width
                    height: light2_2.height
                    radius: 4
                    color: light2_2.checked ? "transparent" : "transparent"
                }

                Image {
                    id: image2_2
                    x: 5
                    y: 5
                    width: 40
                    height: 40
                    source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                    fillMode: Image.PreserveAspectFit
                }

                state: "off"
                states: [
                    State {
                        name: "on"//on state
                        when: light2_2.checked === true
                        PropertyChanges {
                            target: image2_2
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
                            target: image2_2
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
                        modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                    }
                    else if((light2_2.checked === false)){
                        modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                    }
                }
            }


            Button {
                id: light2_3
                x: 420
                y: 340
                width: 50
                height: 50
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
                    width: light2_3.width
                    height: light2_3.height
                    radius: 4
                    color: light2_3.checked ? "transparent" : "transparent"
                }

                Image {
                    id: image2_3
                    x: 5
                    y: 5
                    width: 40
                    height: 40
                    source: /*oxygenButton.checked? "qrc:/pictures/light_on2" : */"qrc:/pictures/light_off"
                    fillMode: Image.PreserveAspectFit
                }

                state: "off"
                states: [
                    State {
                        name: "on"//on state
                        when: light2_3.checked === true
                        PropertyChanges {
                            target: image2_3
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
                            target: image2_3
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
                        modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                    }
                    else if((light2_3.checked === false)){
                        modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                    }
                }
            }

            }
        }

        Tab {
            id: tab3
            title: qsTr("КОРОО")
            z:1
            component: Item {
                id: rect3
                Image {
                    width: parent.width
                    height: parent.height
                   source: "qrc:/pictures/outside_fl3"
                   fillMode: Image.PreserveAspectFit
                }


                Button {
                    id: light3_1
                    x: 290
                    y: 220
                    width: 60
                    height: 60
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
                        width: light3_1.width
                        height: light3_1.height
                        radius: 4
                        color: light3_1.checked ? "transparent" : "transparent"
                    }

                    Image {
                        id: image3_1
                        x: 5
                        y: 5
                        width: 50
                        height: 50
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
                            modbus.writeSingleCoil(1/*address*/,1,1/*on*/)
                        }
                        else if((light3_1.checked === false)){
                            modbus.writeSingleCoil(1/*address*/,1,0/*off*/)
                        }
                    }
                }

            }
        }

        style: TabViewStyle {
            frameOverlap: 0
            tabOverlap:-10
            tab:
                Rectangle {
                color: styleData.selected ? "darkorange" : "#3E484F"
                border.color: styleData.selected ? "darkorange" : "#3E484F"
                    //"#36454F"  "#A1BFCB"
                border.width: 1

                //radius:3

                implicitWidth: Math.max(text.width + 4, 205)
                implicitHeight: 35

                Text {
                    id: text
                    anchors.centerIn: parent
                    text: styleData.title
                    font.pointSize: 10
                    color: styleData.selected ?  "#3E484F" : "white"
                }
            }

            frame: Rectangle {
                //color: "#3E484F"
                color: "#00000B"
                border.color: "darkorange"
                border.width: 1
            }
        }

        currentIndex : 1
    }

//    Connections {
//        target: modbus
//        onReadCoilLight1_BtnCompleted:{ light1.state = value}
//    }
}

