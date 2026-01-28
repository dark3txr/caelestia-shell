pragma ComponentBehavior: Bound

import "services"
import qs.components
import qs.components.controls
import qs.services
import qs.config
import qs.utils
import Quickshell
import QtQuick

Item {
    id: root

    required property var content
    required property PersistentProperties visibilities
    required property var panels
    required property real maxHeight
    required property StyledTextField search
    required property int padding
    required property int rounding

    readonly property bool showWallpapers: search.text.startsWith(`${Config.launcher.actionPrefix}wallpaper `)
    readonly property bool showFileSearch: search.text.startsWith(`${Config.launcher.actionPrefix}search `)
    readonly property Item currentList: {
        if (showWallpapers) return wallpaperList.item;
        if (showFileSearch) return fileSearchList.item;
        return appList.item;
    }


    anchors.horizontalCenter: parent.horizontalCenter
    anchors.bottom: parent.bottom

    clip: true
    state: {
        if (showWallpapers) return "wallpapers";
        if (showFileSearch) return "fileSearch";
        return "apps";
    }

    states: [
        State {
            name: "apps"

            PropertyChanges {
                root.implicitWidth: Config.launcher.sizes.itemWidth
                root.implicitHeight: Math.min(root.maxHeight, appList.implicitHeight > 0 ? appList.implicitHeight : empty.implicitHeight)
                appList.active: true
            }

            AnchorChanges {
                anchors.left: root.parent.left
                anchors.right: root.parent.right
            }
        },
        State {
            name: "wallpapers"

            PropertyChanges {
                root.implicitWidth: Math.max(Config.launcher.sizes.itemWidth * 1.2, wallpaperList.implicitWidth)
                root.implicitHeight: Config.launcher.sizes.wallpaperHeight
                wallpaperList.active: true
            }
        },
        State {
            name: "fileSearch"

            PropertyChanges {
                root.implicitWidth: Config.launcher.sizes.itemWidth
                root.implicitHeight: Math.min(root.maxHeight, fileSearchList.implicitHeight > 0 ? fileSearchList.implicitHeight : empty.implicitHeight)
                fileSearchList.active: true
            }

            AnchorChanges {
                anchors.left: root.parent.left
                anchors.right: root.parent.right
            }
        }
    ]

    Behavior on state {
        SequentialAnimation {
            Anim {
                target: root
                property: "opacity"
                from: 1
                to: 0
                duration: Appearance.anim.durations.small
            }
            PropertyAction {}
            Anim {
                target: root
                property: "opacity"
                from: 0
                to: 1
                duration: Appearance.anim.durations.small
            }
        }
    }

    Loader {
        id: appList

        active: false

        anchors.fill: parent

        sourceComponent: AppList {
            search: root.search
            visibilities: root.visibilities
        }
    }

    Loader {
        id: wallpaperList

        active: false

        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        sourceComponent: WallpaperList {
            search: root.search
            visibilities: root.visibilities
            panels: root.panels
            content: root.content
        }
    }

    Loader {
        id: fileSearchList

        active: false

        anchors.fill: parent

        sourceComponent: FileSearchList {
            search: root.search
            visibilities: root.visibilities
        }
    }

    Row {
        id: empty

        opacity: root.currentList?.count === 0 ? 1 : 0
        scale: root.currentList?.count === 0 ? 1 : 0.5

        spacing: Appearance.spacing.normal
        padding: Appearance.padding.large

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        MaterialIcon {
            text: {
                if (root.state === "wallpapers") return "wallpaper_slideshow";
                if (root.state === "fileSearch") return "search";
                return "manage_search";
            }
            color: Colours.palette.m3onSurfaceVariant
            font.pointSize: Appearance.font.size.extraLarge

            anchors.verticalCenter: parent.verticalCenter
        }

        Column {
            anchors.verticalCenter: parent.verticalCenter

            StyledText {
                text: {
                    if (root.state === "wallpapers") return qsTr("No wallpapers found");
                    if (root.state === "fileSearch") return qsTr("No results");
                    return qsTr("No results");
                }
                color: Colours.palette.m3onSurfaceVariant
                font.pointSize: Appearance.font.size.larger
                font.weight: 500
            }

            StyledText {
                text: {
                    if (root.state === "wallpapers" && Wallpapers.list.length === 0) return qsTr("Try putting some wallpapers in %1").arg(Paths.shortenHome(Paths.wallsdir));
                    if (root.state === "fileSearch") {
                        if (FileSearch.notFound) {
                            return qsTr("Try searching for something else")
                        } else {
                            return qsTr("Try searching for something")
                        }
                    }
                    return qsTr("Try searching for something else")
                }
                color: Colours.palette.m3onSurfaceVariant
                font.pointSize: Appearance.font.size.normal
            }
        }

        Behavior on opacity {
            Anim {}
        }

        Behavior on scale {
            Anim {}
        }
    }

    Behavior on implicitWidth {
        enabled: root.visibilities.launcher

        Anim {
            duration: Appearance.anim.durations.large
            easing.bezierCurve: Appearance.anim.curves.emphasizedDecel
        }
    }

    Behavior on implicitHeight {
        enabled: root.visibilities.launcher

        Anim {
            duration: Appearance.anim.durations.large
            easing.bezierCurve: Appearance.anim.curves.emphasizedDecel
        }
    }
}
