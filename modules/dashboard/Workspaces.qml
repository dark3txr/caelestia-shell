pragma ComponentBehavior: Bound

import qs.components
import qs.components.controls
import qs.services
import qs.utils
import qs.config
import Caelestia.Services
import Quickshell
import Quickshell.Wayland
import Quickshell.Hyprland
import QtQuick
import QtQuick.Layouts

Item {
    id: root

    required property PersistentProperties visibilities

    property int workspacesShown: Config.dashboard.sizes.workspacesCellRows * Config.dashboard.sizes.workspacesCellColumns
    property int workspaceGroup: Math.floor(((Hyprland.monitors[0]?.activeWorkspace?.id ?? 1) - 1) / workspacesShown)

    property int draggingFromWorkspace: -1
    property int draggingTargetWorkspace: -1

    implicitWidth: workspaceColumnLayout.implicitWidth
    implicitHeight: workspaceColumnLayout.implicitHeight

    Item {
        id: workspaceContainer
        anchors.centerIn: parent
        width: workspaceColumnLayout.width
        height: workspaceColumnLayout.height

        ColumnLayout {
            id: workspaceColumnLayout
            spacing: Appearance.spacing.normal

            Repeater {
                model: Config.dashboard.sizes.workspacesCellRows
                delegate: RowLayout {
                    id: row
                    required property int index
                    spacing: Appearance.spacing.normal

                    Repeater {
                        model: Config.dashboard.sizes.workspacesCellColumns

                        Rectangle {
                            id: workspace
                            required property int index

                            property int workspaceValue: root.workspaceGroup * root.workspacesShown + row.index * Config.dashboard.sizes.workspacesCellColumns + index + 1
                            property bool hoveredWhileDragging: false
                            property bool isCurrent: Hyprland.focusedMonitor?.activeWorkspace?.id === workspaceValue

                            implicitWidth: Config.dashboard.sizes.workspacesCellWidth
                            implicitHeight: Config.dashboard.sizes.workspacesCellHeight

                            color: hoveredWhileDragging ? Colours.tPalette.m3surfaceContainerHighest : Colours.tPalette.m3surfaceContainer
                            radius: Appearance.rounding.normal
                            border.width: 2
                            border.color: hoveredWhileDragging ? Colours.palette.m3secondary : "transparent"

                            StyledText {
                                anchors.centerIn: parent
                                text: workspaceValue
                                font.pointSize: Appearance.font.size.normal
                                color: workspace.isCurrent ? Colours.palette.m3primary : Colours.palette.m3onSurfaceVariant
                                opacity: ToplevelManager.toplevels.values.some(toplevel => {
                                    const address = "0x" + toplevel.HyprlandToplevel.address;
                                    return HyprlandData.windowByAddress[address]?.workspace?.id === workspaceValue;
                                }) ? 0 : 1
                                Behavior on opacity {
                                    Anim {
                                        duration: Appearance.anim.durations.normal
                                    }
                                }
                            }

                            MouseArea {
                                anchors.fill: parent
                                onClicked: {
                                    if (root.draggingTargetWorkspace === -1) {
                                        root.visibilities.dashboard = false;
                                        Hyprland.dispatch(`workspace ${workspaceValue}`);
                                    }
                                }
                            }

                            DropArea {
                                anchors.fill: parent
                                onEntered: {
                                    root.draggingTargetWorkspace = workspaceValue;
                                    if (root.draggingFromWorkspace == root.draggingTargetWorkspace) return;
                                    workspace.hoveredWhileDragging = true;
                                }
                                onExited: {
                                    workspace.hoveredWhileDragging = false;
                                    if (root.draggingTargetWorkspace == workspaceValue) root.draggingTargetWorkspace = -1;
                                }
                            }
                        }
                    }
                }
            }
        }

        Rectangle {
            id: activeIndicator
            property int activeId: Hyprland.focusedMonitor?.activeWorkspace?.id ?? 1
            property int localIdx: activeId - (root.workspaceGroup * root.workspacesShown) - 1
            property bool isVisible: localIdx >= 0 && localIdx < root.workspacesShown

            visible: isVisible
            width: Config.dashboard.sizes.workspacesCellWidth
            height: Config.dashboard.sizes.workspacesCellHeight

            x: isVisible ? (localIdx % Config.dashboard.sizes.workspacesCellColumns) * (Config.dashboard.sizes.workspacesCellWidth + Appearance.spacing.normal) : 0
            y: isVisible ? Math.floor(localIdx / Config.dashboard.sizes.workspacesCellColumns) * (Config.dashboard.sizes.workspacesCellHeight + Appearance.spacing.normal) : 0
 
            color: "transparent"
            radius: Appearance.rounding.normal
            border.width: 2
            border.color: Colours.palette.m3primary
            z: 999

            Behavior on x { Anim { duration: Appearance.anim.durations.normal } }
            Behavior on y { Anim { duration: Appearance.anim.durations.normal } }
        }

        Item {
            id: windowSpace
            anchors.fill: parent
            z: 5

            Repeater {
                delegate: WorkspaceWindow {}
                model: ScriptModel {
                    values: {
                        return ToplevelManager.toplevels.values.filter((toplevel) => {
                            const address = `0x${toplevel.HyprlandToplevel.address}`;
                            var win = HyprlandData.windowByAddress[address];
                            return (root.workspaceGroup * root.workspacesShown < win?.workspace?.id && win?.workspace?.id <= (root.workspaceGroup + 1) * root.workspacesShown);
                        }).sort((a, b) => {
                            const winA = HyprlandData.windowByAddress[`0x${a.HyprlandToplevel.address}`];
                            const winB = HyprlandData.windowByAddress[`0x${b.HyprlandToplevel.address}`];
                            if (winA?.pinned !== winB?.pinned) return winA?.pinned ? 1 : -1;
                            if (winA?.floating !== winB?.floating) return winA?.floating ? 1 : -1;
                            return (winB?.focusHistoryID ?? 0) - (winA?.focusHistoryID ?? 0);
                        })
                    }
                }
            }
        }
    }

    component WorkspaceWindow: Item {
        id: windowRoot

        required property var modelData
        required property int index

        property var address: `0x${modelData.HyprlandToplevel.address}`
        property var windowData: HyprlandData.windowByAddress[address]
        property var windowMonitor: HyprlandData.monitors.find(m => m.id === windowData?.monitor) ?? HyprlandData.monitors[0]
        property real locationX: Math.max(((windowData?.at[0] ?? 0) - (windowMonitor?.x ?? 0) - (windowMonitor?.reserved?.[0] ?? 0)) * renderScale, 0) + (Config.dashboard.sizes.workspacesCellWidth + Appearance.spacing.normal) * (((((dragArea.drag.active && root.draggingTargetWorkspace !== -1) ? root.draggingTargetWorkspace : (windowData?.workspace?.id ?? 1)) - 1) % root.workspacesShown) % Config.dashboard.sizes.workspacesCellColumns)
        property real locationY: Math.max(((windowData?.at[1] ?? 0) - (windowMonitor?.y ?? 0) - (windowMonitor?.reserved?.[1] ?? 0)) * renderScale, 0) + (Config.dashboard.sizes.workspacesCellHeight + Appearance.spacing.normal) * Math.floor(((((dragArea.drag.active && root.draggingTargetWorkspace !== -1) ? root.draggingTargetWorkspace : (windowData?.workspace?.id ?? 1)) - 1) % root.workspacesShown) / Config.dashboard.sizes.workspacesCellColumns)
        property real renderScale: Math.min(Config.dashboard.sizes.workspacesCellWidth / ((windowMonitor?.transform % 2 === 1) ? ((windowMonitor?.height ?? 1080) / (windowMonitor?.scale ?? 1)) - (windowMonitor?.reserved?.[0] ?? 0) - (windowMonitor?.reserved?.[2] ?? 0) : ((windowMonitor?.width ?? 1920) / (windowMonitor?.scale ?? 1)) - (windowMonitor?.reserved?.[0] ?? 0) - (windowMonitor?.reserved?.[2] ?? 0)), Config.dashboard.sizes.workspacesCellHeight / ((windowMonitor?.transform % 2 === 1) ? ((windowMonitor?.width ?? 1920) / (windowMonitor?.scale ?? 1)) - (windowMonitor?.reserved?.[1] ?? 0) - (windowMonitor?.reserved?.[3] ?? 0) : ((windowMonitor?.height ?? 1080) / (windowMonitor?.scale ?? 1)) - (windowMonitor?.reserved?.[1] ?? 0) - (windowMonitor?.reserved?.[3] ?? 0)))

        x: locationX
        y: locationY
        width: (windowData?.size[0] ?? 100) * renderScale
        height: (windowData?.size[1] ?? 100) * renderScale

        z: dragArea.drag.active ? 99999 : (10 + index)

        Drag.active: dragArea.drag.active
        Drag.hotSpot.x: width / 2
        Drag.hotSpot.y: height / 2

        Behavior on x { 
            enabled: !dragArea.drag.active
            Anim { duration: Appearance.anim.durations.normal } 
        }
        Behavior on y { 
            enabled: !dragArea.drag.active 
            Anim { duration: Appearance.anim.durations.normal } 
        }

        Rectangle {
            anchors.fill: parent
            radius: Appearance.rounding.small
            clip: true
            color: "transparent"

            ScreencopyView {
                id: windowPreview
                anchors.fill: parent
                captureSource: root.visibilities.dashboard ? modelData : null
                live: true

                Rectangle {
                    anchors.fill: parent
                    radius: Appearance.rounding.small
                    color: dragArea.pressed ? Qt.rgba(Colours.palette.m3onSurface.r, Colours.palette.m3onSurface.g, Colours.palette.m3onSurface.b, 0.5) : 
                    dragArea.containsMouse ? Qt.rgba(Colours.palette.m3surfaceContainerHigh.r, Colours.palette.m3surfaceContainerHigh.g, Colours.palette.m3surfaceContainerHigh.b, 0.7) : 
                    Qt.rgba(Colours.palette.m3surface.r, Colours.palette.m3surface.g, Colours.palette.m3surface.b, 0.5)
                    border.color: Colours.tPalette.m3outline
                    border.width: 1
                }

                Loader {
                    anchors.centerIn: parent
                    active: Config.dashboard.workspacesAppIcons
                    width: Math.min(windowRoot.width, windowRoot.height) * 0.35
                    height: width
                    sourceComponent: Image {
                        anchors.fill: parent
                        property var entry: DesktopEntries.heuristicLookup(windowRoot.windowData?.class)
                        source: Quickshell.iconPath(entry?.icon ?? windowRoot.windowData?.class ?? "application-x-executable", "image-missing")
                        sourceSize: Qt.size(width, height)
                    }
                }
            }
        }

        MouseArea {
            id: dragArea
            anchors.fill: parent
            hoverEnabled: true
            acceptedButtons: Qt.LeftButton | Qt.MiddleButton
            drag.target: windowRoot

            onPressed: (mouse) => {
                root.draggingFromWorkspace = windowRoot.windowData?.workspace?.id;
            }
            onReleased: {
                windowRoot.Drag.drop();
                const targetWorkspace = root.draggingTargetWorkspace;
                if (targetWorkspace !== -1 && targetWorkspace !== windowRoot.windowData?.workspace?.id) {
                    Hyprland.dispatch(`movetoworkspacesilent ${targetWorkspace}, address:${windowRoot.windowData?.address}`);
                }
                windowRoot.x = Qt.binding(() => windowRoot.locationX);
                windowRoot.y = Qt.binding(() => windowRoot.locationY);
                root.draggingFromWorkspace = -1;
            }
            onClicked: (event) => {
                if (!windowRoot.windowData) return;
                if (event.button === Qt.LeftButton) {
                    root.visibilities.dashboard = false;
                    Hyprland.dispatch(`focuswindow address:${windowRoot.windowData.address}`);
                } else if (event.button === Qt.MiddleButton) {
                    Hyprland.dispatch(`closewindow address:${windowRoot.windowData.address}`);
                }
            }
        }
    }
}
