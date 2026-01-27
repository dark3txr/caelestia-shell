import Quickshell.Io

JsonObject {
    property bool enabled: true
    property int maxToasts: 3

    property Sizes sizes: Sizes {}
    property Toasts toasts: Toasts {}
    property Vpn vpn: Vpn {}
    property NightLight nightLight: NightLight {}

    component Sizes: JsonObject {
        property int width: 430
        property int toastWidth: 440
    }

    component Toasts: JsonObject {
        property bool configLoaded: false
        property bool chargingChanged: true
        property bool gameModeChanged: true
        property bool dndChanged: true
        property bool audioOutputChanged: true
        property bool audioInputChanged: true
        property bool capsLockChanged: true
        property bool numLockChanged: true
        property bool kbLayoutChanged: false
        property bool kbLimit: true
        property bool vpnChanged: true
        property bool nowPlaying: true
        property bool nightLight: true
    }

    component Vpn: JsonObject {
        property bool enabled: true
        property list<var> provider: ["protonvpn"]
    }

    component NightLight: JsonObject {
        property bool enabled: true
        property int temperature: 4500
    }
}
