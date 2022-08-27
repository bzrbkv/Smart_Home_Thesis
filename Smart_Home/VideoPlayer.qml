import QtQuick 2.12
import QtMultimedia 5.12
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.13

Popup {
    id: videoPlayer
    background.visible: false
    width: 600
    height: 600
    leftPadding: 0
    bottomPadding: 0
    topPadding: 10

    MediaPlayer {
        id: player
    }

    Rectangle{
        id: videoPlayerRect
        x:0; y:0
        width: 600
        height: 600
        color: "#000000"
        visible: true

        VideoOutput {
//            anchors.fill: parent
            x:0
            y:0
            width: 480
            height: 480
            source: player

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    progressBar.visible = true
                    timer.start()
                }
            }
            Timer{
                id: timer
                interval: 5000
                triggeredOnStart: false
                onTriggered: {
                    progressBar.visible = false
                    console.log("timer triggered")
                }
            }
        }

        Rectangle {
            id: progressBar
            y:480
            height: 30
            visible: false
            anchors.left: parent.left
            anchors.right: parent.right
            color: "lightGray"

            Rectangle {
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                width: player.duration>0?parent.width*player.position/player.duration:0
                color: "darkGray"
            }

            MouseArea {
                anchors.fill: parent

                onClicked: {
                    if (player.seekable) {
                        player.seek(player.duration * mouse.x/width);
                    }
                    timer.restart()
                }
            }
        }

    }

    FileDialog {
        id: fileDialog
        title: "Please choose a file"
        modality: Qt.ApplicationModal
        //        folder: "file:///home/eldiiar/Desktop"
        folder: shortcuts.desktop
        onAccepted: {
            console.log("You chose: " + fileDialog.fileUrls)
            player.source = fileDialog.fileUrl
            player.play()

        }
        onRejected: {
            console.log("Canceled")
        }
    }

    Rectangle {
        id: controlRect
        x: 0
        y: 520
        width: 600
        height: 80
        color: "#2e3436"

        Button {
            id: cameraBtn
            x: 500
            y: 0
            width: 100
            height: 80
            text: qsTr("Camera")
            checkable: true
            onClicked: {
                if(checked){
                    camera.start()
                    if(MediaPlayer.PlayingState){
                        player.pause()
                    }
                    videoPlayerRect.visible = false
                    cameraViewRect.visible = true
                    disableBtns()
                }
                else if(!checked){
                    camera.stop()
                    if(MediaPlayer.PausedState){
                        player.play()
                    }
                    videoPlayerRect.visible = true
                    cameraViewRect.visible = false
                    enableBtns()
                }
            }
        }

        Button {
            id: playBtn
            x: 0
            y: 0
            width: 100
            height: 80
            text: qsTr("Play")
            onClicked: {
                player.play()
                progressBar.visible = true
                timer.restart()
            }
        }

        Button {
            id: pauseBtn
            y:0
            width: 100
            height: 80
            x: 106
            text: qsTr("Pause")
            onClicked: {
                player.pause()
                progressBar.visible = true
                timer.restart()
            }
        }

        Button {
            id: openBtn
            y:0
            width: 100
            height: 80
            x: 212
            text: qsTr("Open...")
            onClicked: {
                fileDialog.open()
                progressBar.visible = true
                timer.restart()
            }
        }
    }

    function enableBtns(){
        openBtn.enabled = true
        playBtn.enabled = true
        pauseBtn.enabled = true
    }
    function disableBtns(){
        openBtn.enabled = false
        playBtn.enabled = false
        pauseBtn.enabled = false
    }

}
