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

    readonly property var monitor: Hyprland.monitors[0]
    property var windowByAddress: HyprlandData.windowByAddress

    property int workspacesShown: Config.dashboard.sizes.workspacesCellRows * Config.dashboard.sizes.workspacesCellColumns
    property real workspaceSpacing: Appearance.spacing.normal
    readonly property int workspaceGroup: Math.floor(((monitor?.activeWorkspace?.id ?? 1) - 1) / workspacesShown)

    property int windowDraggingZ: 99999

    property int draggingFromWorkspace: -1
    property int draggingTargetWorkspace: -1

    implicitWidth: workspaceColumnLayout.implicitWidth
    implicitHeight: workspaceColumnLayout.implicitHeight

    ColumnLayout {
        id: workspaceColumnLayout
        z: 0
        anchors.centerIn: parent
        spacing: root.workspaceSpacing

        Repeater {
            model: Config.dashboard.sizes.workspacesCellRows
            delegate: RowLayout {
                id: row
                required property int index
                spacing: root.workspaceSpacing

                Repeater {
                    model: Config.dashboard.sizes.workspacesCellColumns

                    Rectangle {
                        id: workspace
                        required property int index

                        property int workspaceValue: root.workspaceGroup * root.workspacesShown + row.index * Config.dashboard.sizes.workspacesCellColumns + index + 1
                        property bool hoveredWhileDragging: false

                        implicitWidth: Config.dashboard.sizes.workspacesCellWidth
                        implicitHeight: Config.dashboard.sizes.workspacesCellHeight

                        color: hoveredWhileDragging ? Colours.tPalette.m3surfaceContainerHighest : Colours.tPalette.m3surfaceContainer
                        radius: Appearance.rounding.normal
                        border.width: 2
                        border.color: hoveredWhileDragging ? Colours.palette.m3primary : "transparent"

                        StyledText {
                            anchors.centerIn: parent
                            text: workspaceValue
                            font.pointSize: Appearance.font.size.normal
                            color: Colours.palette.m3onSurfaceVariant
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

    Item {
        id: windowSpace
        x: workspaceColumnLayout.x
        y: workspaceColumnLayout.y
        z: 1

        Repeater {
            model: ScriptModel {
                values: {
                    return ToplevelManager.toplevels.values.filter((toplevel) => {
                        const address = `0x${toplevel.HyprlandToplevel.address}`;
                        var win = root.windowByAddress[address];
                        return (root.workspaceGroup * root.workspacesShown < win?.workspace?.id && win?.workspace?.id <= (root.workspaceGroup + 1) * root.workspacesShown);
                    }).sort((a, b) => {
                        const winA = root.windowByAddress[`0x${a.HyprlandToplevel.address}`];
                        const winB = root.windowByAddress[`0x${b.HyprlandToplevel.address}`];
                        if (winA?.pinned !== winB?.pinned) return winA?.pinned ? 1 : -1;
                        if (winA?.floating !== winB?.floating) return winA?.floating ? 1 : -1;
                        return (winB?.focusHistoryID ?? 0) - (winA?.focusHistoryID ?? 0);
                    })
                }
            }
            delegate: WorkspaceWindow {
                required property var modelData
                required property int index
            }
        }
    }

    component WorkspaceWindow: Item {
        id: winRoot

        property var address: `0x${modelData.HyprlandToplevel.address}`
        property var windowData: root.windowByAddress[address]
        property var toplevel: modelData
        property var winMonitor: HyprlandData.monitors.find(m => m.id === windowData?.monitor) ?? HyprlandData.monitors[0]

        property real sourceWidth: (winMonitor?.transform % 2 === 1) ? ((winMonitor?.height ?? 1080) / (winMonitor?.scale ?? 1)) - (winMonitor?.reserved?.[0] ?? 0) - (winMonitor?.reserved?.[2] ?? 0) : ((winMonitor?.width ?? 1920) / (winMonitor?.scale ?? 1)) - (winMonitor?.reserved?.[0] ?? 0) - (winMonitor?.reserved?.[2] ?? 0)
        property real sourceHeight: (winMonitor?.transform % 2 === 1) ? ((winMonitor?.width ?? 1920) / (winMonitor?.scale ?? 1)) - (winMonitor?.reserved?.[1] ?? 0) - (winMonitor?.reserved?.[3] ?? 0) : ((winMonitor?.height ?? 1080) / (winMonitor?.scale ?? 1)) - (winMonitor?.reserved?.[1] ?? 0) - (winMonitor?.reserved?.[3] ?? 0)
        property real renderScale: Math.min(Config.dashboard.sizes.workspacesCellWidth / sourceWidth, Config.dashboard.sizes.workspacesCellHeight / sourceHeight)

        property int currentTargetWorkspace: (dragArea.drag.active && root.draggingTargetWorkspace !== -1) ? root.draggingTargetWorkspace : (windowData?.workspace?.id ?? 1)
        property int workspaceColIndex: (currentTargetWorkspace - 1) % Config.dashboard.sizes.workspacesCellColumns
        property int workspaceRowIndex: Math.floor(((currentTargetWorkspace - 1) % root.workspacesShown) / Config.dashboard.sizes.workspacesCellColumns)

        property real xOffset: (Config.dashboard.sizes.workspacesCellWidth + root.workspaceSpacing) * workspaceColIndex
        property real yOffset: (Config.dashboard.sizes.workspacesCellHeight + root.workspaceSpacing) * workspaceRowIndex

        property real initX: Math.max(((windowData?.at[0] ?? 0) - (winMonitor?.x ?? 0) - (winMonitor?.reserved?.[0] ?? 0)) * renderScale, 0) + xOffset
        property real initY: Math.max(((windowData?.at[1] ?? 0) - (winMonitor?.y ?? 0) - (winMonitor?.reserved?.[1] ?? 0)) * renderScale, 0) + yOffset

        property var targetWindowWidth: (windowData?.size[0] ?? 100) * renderScale
        property var targetWindowHeight: (windowData?.size[1] ?? 100) * renderScale

        x: initX
        y: initY
        width: Math.min(targetWindowWidth, Config.dashboard.sizes.workspacesCellWidth)
        height: Math.min(targetWindowHeight, Config.dashboard.sizes.workspacesCellHeight)

        z: dragArea.drag.active ? root.windowDraggingZ : (root.windowZ + index)

        clip: true

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

        ScreencopyView {
            id: windowPreview
            anchors.fill: parent
            captureSource: root.visibilities.dashboard ? winRoot.toplevel : null
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

                width: Math.min(winRoot.width, winRoot.height) * 0.35
                height: width

                sourceComponent: Image {
                    anchors.fill: parent
                    property var entry: DesktopEntries.heuristicLookup(winRoot.windowData?.class)
                    source: Quickshell.iconPath(entry?.icon ?? winRoot.windowData?.class ?? "application-x-executable", "image-missing")
                    sourceSize: Qt.size(width, height)
                }
            }
        }

        MouseArea {
            id: dragArea
            anchors.fill: parent
            hoverEnabled: true
            acceptedButtons: Qt.LeftButton | Qt.MiddleButton
            drag.target: winRoot

            onPressed: (mouse) => {
                root.draggingFromWorkspace = winRoot.windowData?.workspace?.id;
            }
            onReleased: {
                winRoot.Drag.drop();
                const targetWorkspace = root.draggingTargetWorkspace;

                if (targetWorkspace !== -1 && targetWorkspace !== winRoot.windowData?.workspace?.id) {
                    Hyprland.dispatch(`movetoworkspacesilent ${targetWorkspace}, address:${winRoot.windowData?.address}`);
                }

                winRoot.x = Qt.binding(() => winRoot.initX);
                winRoot.y = Qt.binding(() => winRoot.initY);

                root.draggingFromWorkspace = -1;
            }
            onClicked: (event) => {
                if (!winRoot.windowData) return;
                if (event.button === Qt.LeftButton) {
                    root.visibilities.dashboard = false;
                    Hyprland.dispatch(`focuswindow address:${winRoot.windowData.address}`);
                    event.accepted = true;
                } else if (event.button === Qt.MiddleButton) {
                    Hyprland.dispatch(`closewindow address:${winRoot.windowData.address}`);
                    event.accepted = true;
                }
            }
        }
    }
}
