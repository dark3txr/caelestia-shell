import Quickshell.Io

JsonObject {
    property bool enabled: true
    property DesktopClock desktopClock: DesktopClock {}
    property Visualiser visualiser: Visualiser {}

    component DesktopClock: JsonObject {
        property bool enabled: true
    }

    component Visualiser: JsonObject {
        property bool enabled: true
        property bool autoHide: false
        property bool blur: false
        property real rounding: 0.5
        property real spacing: 0.8
    }
}
