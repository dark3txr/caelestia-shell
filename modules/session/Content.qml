pragma ComponentBehavior: Bound

import qs.components
import qs.services
import qs.config
import qs.utils
import Quickshell
import QtQuick

Column {
    id: root

    required property PersistentProperties visibilities

    padding: Appearance.padding.large
    spacing: Appearance.spacing.large

    SessionButton {
        id: suspend

        icon: Config.session.icons.suspend
        command: Config.session.commands.suspend

        KeyNavigation.down: logout

        Component.onCompleted: forceActiveFocus()

        Connections {
            target: root.visibilities

            function onLauncherChanged(): void {
                if (!root.visibilities.launcher)
                    logout.forceActiveFocus();
            }
        }
    }

    SessionButton {
        id: logout

        icon: Config.session.icons.logout
        command: Config.session.commands.logout

        KeyNavigation.up: suspend
        KeyNavigation.down: hibernate
    }

    SessionButton {
        id: hibernate

        icon: Config.session.icons.hibernate
        command: Config.session.commands.hibernate

        KeyNavigation.up: logout
        KeyNavigation.down: reboot
    }

    SessionButton {
        id: reboot

        icon: Config.session.icons.reboot
        command: Config.session.commands.reboot

        KeyNavigation.up: hibernate
        KeyNavigation.down: shutdown
    }

    SessionButton {
        id: shutdown

        icon: Config.session.icons.shutdown
        command: Config.session.commands.shutdown

        KeyNavigation.up: reboot
    }

    component SessionButton: StyledRect {
        id: button

        required property string icon
        required property list<string> command

        implicitWidth: Config.session.sizes.button
        implicitHeight: Config.session.sizes.button

        radius: Appearance.rounding.large
        color: button.activeFocus ? Colours.palette.m3primaryContainer : Colours.tPalette.m3surfaceContainer

        Keys.onEnterPressed: Quickshell.execDetached(button.command)
        Keys.onReturnPressed: Quickshell.execDetached(button.command)
        Keys.onEscapePressed: root.visibilities.session = false
        Keys.onPressed: event => {
            if (!Config.session.vimKeybinds)
                return;

            if (event.modifiers & Qt.ControlModifier) {
                if (event.key === Qt.Key_J && KeyNavigation.down) {
                    KeyNavigation.down.focus = true;
                    event.accepted = true;
                } else if (event.key === Qt.Key_K && KeyNavigation.up) {
                    KeyNavigation.up.focus = true;
                    event.accepted = true;
                }
            } else if (event.key === Qt.Key_Tab && KeyNavigation.down) {
                KeyNavigation.down.focus = true;
                event.accepted = true;
            } else if (event.key === Qt.Key_Backtab || (event.key === Qt.Key_Tab && (event.modifiers & Qt.ShiftModifier))) {
                if (KeyNavigation.up) {
                    KeyNavigation.up.focus = true;
                    event.accepted = true;
                }
            }
        }

        StateLayer {
            radius: parent.radius
            color: button.activeFocus ? Colours.palette.m3onSecondaryContainer : Colours.palette.m3onSurface

            function onClicked(): void {
                Quickshell.execDetached(button.command);
            }
        }

        MaterialIcon {
            anchors.centerIn: parent

            text: button.icon
            color: button.activeFocus ? Colours.palette.m3onSecondaryContainer : Colours.palette.m3onSurface
            font.pointSize: Appearance.font.size.extraLarge
            font.weight: 500
        }
    }
}
