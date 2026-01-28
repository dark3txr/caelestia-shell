pragma ComponentBehavior: Bound

import "../services"
import qs.components
import qs.components.controls
import qs.services
import qs.config
import Quickshell
import QtQuick
import QtQuick.Layouts

Item {
    id: root

    required property var modelData
    required property PersistentProperties visibilities

    implicitHeight: rect.implicitHeight
    anchors.left: parent?.left
    anchors.right: parent?.right

    StyledRect {
        id: rect

        anchors.fill: parent
        implicitHeight: content.implicitHeight + Appearance.padding.normal * 2
        radius: Appearance.rounding.normal
        color: {
            if (ListView.isCurrentItem) return Colours.layer(Colours.palette.m3surfaceContainer, 3);
            if (mouse.containsMouse) return Colours.layer(Colours.palette.m3surfaceContainer, 2);
            return "transparent";
        }

        Behavior on color { CAnim {} }

        MouseArea {
            id: mouse

            anchors.fill: parent
            hoverEnabled: true

            onClicked: {
                FileSearch.fileOpen(root.modelData);
                root.visibilities.launcher = false;
            }
        }

        RowLayout {
            id: content

            anchors.fill: parent
            anchors.margins: Appearance.padding.normal
            spacing: Appearance.spacing.normal

            ColumnLayout {
                Layout.fillWidth: true
                spacing: Appearance.spacing.smaller

                StyledText {
                    Layout.fillWidth: true
                    text: root.modelData.file
                    color: Colours.palette.m3onSurface
                    font.pointSize: Appearance.font.size.normal
                    elide: Text.ElideRight
                    maximumLineCount: 2
                    wrapMode: Text.Wrap
                }

                StyledText {
                    Layout.fillWidth: true
                    text: root.modelData.path
                    color: Colours.palette.m3outline
                    font.pointSize: Appearance.font.size.small
                    elide: Text.ElideRight
                    maximumLineCount: 2
                    wrapMode: Text.Wrap
                }
            }
        }
    }
}