import QtQuick
import QtQuick.Effects
import "."

RectangularShadow {
    required property var target
    anchors.fill: target
    radius: 20
    blur: 9
    offset: Qt.vector2d(0.0, 1.0)
    spread: 1
    color: Colours.palette.shadow
    cached: true
}
