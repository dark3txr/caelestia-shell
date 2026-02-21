import Quickshell.Io

JsonObject {
    property bool enabled: true
    property int maxToasts: 3

    property Sizes sizes: Sizes {}
    property Toasts toasts: Toasts {}
    property Vpn vpn: Vpn {}
    property NightLight nightLight: NightLight {}
    property Calendar calendar: Calendar {}

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
        property list<var> provider: [
            {
                displayName: "Proton VPN",
                enabled: true,
                interface: "proton0",
                name: "proton"
            }
        ]
    }

    component NightLight: JsonObject {
        property bool enabled: true
        property int temperature: 4500
    }

    component Calendar: JsonObject {
        property bool enabled: true
        property string dataPath: "~/.local/share/caelestia/calendar-events.json"
        property bool showReminderToasts: true
        property bool showUpcomingInSidebar: false
        property int defaultReminderMinutes: 15
        property list<var> quickReminderOptions: [5, 15, 30, 60, 1440]
    }

    property list<var> quickToggles: [
        {
            id: "wifi",
            enabled: true
        },
        {
            id: "bluetooth",
            enabled: true
        },
        {
            id: "mic",
            enabled: true
        },
        {
            id: "settings",
            enabled: true
        },
        {
            id: "gameMode",
            enabled: false
        },
        {
            id: "dnd",
            enabled: true
        },
        {
            id: "caffeine",
            enabled: true
        },
        {
            id: "vpn",
            enabled: true
        },
        {
            id: "nightLight",
            enabled: true
        }
    ]
}
