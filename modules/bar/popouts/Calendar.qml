pragma ComponentBehavior: Bound

import qs.components
import qs.components.controls
import qs.services
import qs.config
import qs.utils
import Quickshell
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ColumnLayout {
    id: root
    spacing: 0
    width: 320

    property date currentDate: new Date()
    property int currentYear: currentDate.getFullYear()
    property int currentMonth: currentDate.getMonth()
    property int cellHeight: 35
    property int cellWidth: Math.floor(root.width / 7)

    opacity: 0
    scale: 0.9
    y: -10

    Component.onCompleted: {
        opacity = 1
        scale = 1
        y = 0
    }

    Behavior on opacity { NumberAnimation { duration: Appearance.anim.durations.normal; easing.type: Easing.OutCubic } }
    Behavior on scale { NumberAnimation { duration: Appearance.anim.durations.normal; easing.type: Easing.OutBack } }
    Behavior on y { NumberAnimation { duration: Appearance.anim.durations.normal; easing.type: Easing.OutCubic } }

    ColumnLayout {
        id: calendarGrid
        Layout.fillWidth: true
        Layout.fillHeight: true
        Layout.topMargin: Appearance.padding.normal
        Layout.bottomMargin: Appearance.padding.small
        Layout.leftMargin: 0
        Layout.rightMargin: Appearance.padding.normal
        spacing: Appearance.spacing.small

        RowLayout {
            Layout.fillWidth: true
            Layout.bottomMargin: Appearance.spacing.small

            StyledRect {
                implicitHeight: prevIcon.implicitHeight + Appearance.padding.small * 1.5
                implicitWidth: implicitHeight
                radius: Appearance.rounding.full
                color: Colours.palette.m3primaryContainer

                StateLayer {
                    color: Colours.palette.m3onPrimaryContainer
                    function onClicked(): void {
                        root.currentMonth--
                        if (root.currentMonth < 0) {
                            root.currentMonth = 11
                            root.currentYear--
                        }
                    }
                }

                MaterialIcon {
                    id: prevIcon
                    anchors.centerIn: parent
                    text: "chevron_left"
                    color: Colours.palette.m3onPrimaryContainer
                }
            }

            StyledText {
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignHCenter
                text: Qt.formatDate(new Date(root.currentYear, root.currentMonth, 1), "MMMM yyyy")
                font.weight: 600
                font.pointSize: Appearance.font.size.normal
            }

            StyledRect {
                implicitHeight: nextIcon.implicitHeight + Appearance.padding.small * 1.5
                implicitWidth: implicitHeight
                radius: Appearance.rounding.full
                color: Colours.palette.m3primaryContainer

                StateLayer {
                    color: Colours.palette.m3onPrimaryContainer
                    function onClicked(): void {
                        root.currentMonth++
                        if (root.currentMonth > 11) {
                            root.currentMonth = 0
                            root.currentYear++
                        }
                    }
                }

                MaterialIcon {
                    id: nextIcon
                    anchors.centerIn: parent
                    text: "chevron_right"
                    color: Colours.palette.m3onPrimaryContainer
                }
            }
        }

        DayOfWeekRow {
            Layout.fillWidth: true
            Layout.preferredHeight: Appearance.font.size.extraLarge
            padding: 0
            spacing: 0

            delegate: StyledText {
                required property var model
                width: root.cellWidth
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                text: model.shortName
                color: Colours.palette.m3onSurfaceVariant
                font.pointSize: Appearance.font.size.small
                font.weight: 500
            }
        }

        MonthGrid {
            Layout.fillWidth: true
            Layout.preferredHeight: root.cellHeight * 6
            Layout.margins: 0
            month: root.currentMonth
            year: root.currentYear
            spacing: 0

            delegate: Item {
                id: dayItem
                required property var model
                width: root.cellWidth
                height: root.cellHeight

                StyledRect {
                    anchors.fill: parent
                    radius: Appearance.rounding.full
                    color: model.today ? Colours.palette.m3primary : "transparent"

                    StateLayer {
                        visible: model.month === root.currentMonth
                        color: Colours.palette.m3onSurface
                        function onClicked(): void {}
                    }

                    StyledText {
                        anchors.centerIn: parent
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                        text: Qt.formatDate(model.date, "d")
                        color: model.today ? Colours.palette.m3onPrimary :
                               model.month === root.currentMonth ? Colours.palette.m3onSurfaceVariant : Colours.palette.m3outline
                        font.pointSize: Appearance.font.size.small
                        font.weight: model.today ? 600 : 400
                    }
                }
            }
        }
    }
}

