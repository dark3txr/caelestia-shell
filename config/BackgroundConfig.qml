import Quickshell.Io

JsonObject {
    property bool enabled: true
    property bool wallpaperEnabled: true
    property DesktopClock desktopClock: DesktopClock {}
    property Visualiser visualiser: Visualiser {}

    component DesktopClock: JsonObject {
        property bool enabled: true
        property real scale: 1
        property string position: "bottom-right"
        property bool invertColors: false
        property DesktopClockBackground background: DesktopClockBackground {}
        property DesktopClockShadow shadow: DesktopClockShadow {}
    }

    component DesktopClockBackground: JsonObject {
        property bool enabled: false
        property real opacity: 0.36
        property bool blur: true
    }

    component DesktopClockShadow: JsonObject {
        property bool enabled: false
        property real opacity: 0.7
        property real blur: 0.4
    }

    component Visualiser: JsonObject {
        property bool enabled: true
        property bool autoHide: false
        property bool blur: false
        property real rounding: 0.5
        property real spacing: 0.8
    }
}
