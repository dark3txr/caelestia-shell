import QtQuick
import "."

Item {
    id: root
    required property string text
    property bool shown: false
    property real horizontalPadding: 10
    property real verticalPadding: 5
    implicitWidth: tooltipTextObject.implicitWidth + 2 * root.horizontalPadding
    implicitHeight: tooltipTextObject.implicitHeight + 2 * root.verticalPadding

    property bool isVisible: backgroundRectangle.implicitHeight > 0

    Rectangle {
        id: backgroundRectangle
        anchors {
            bottom: root.bottom
            horizontalCenter: root.horizontalCenter
        }
        color: "#3C4043"
        radius: 7
        opacity: shown ? 1 : 0
        implicitWidth: shown ? (tooltipTextObject.implicitWidth + 2 * root.horizontalPadding) : 0
        implicitHeight: shown ? (tooltipTextObject.implicitHeight + 2 * root.verticalPadding) : 0
        clip: true

        Behavior on implicitWidth {
            NumberAnimation {
                duration: elementMoveFast.duration
                easing.type: elementMoveFast.type
                easing.bezierCurve: elementMoveFast.bezierCurve
            }
        }

        Behavior on implicitHeight {
            NumberAnimation {
                duration: elementMoveFast.duration
                easing.type: elementMoveFast.type
                easing.bezierCurve: elementMoveFast.bezierCurve
            }
        }

        Behavior on opacity {
            NumberAnimation {
                duration: elementMoveFast.duration
                easing.type: elementMoveFast.type
                easing.bezierCurve: elementMoveFast.bezierCurve
            }
        }

        StyledText {
            id: tooltipTextObject
            anchors.centerIn: parent
            text: root.text
            font.pixelSize: 14
            font.hintingPreference: Font.PreferNoHinting
            color: "#FFFFFF"
            wrapMode: Text.Wrap
        }
    }   
}
