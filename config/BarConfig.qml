import Quickshell.Io

JsonObject {
    property bool persistent: true
    property bool showOnHover: true
    property int dragThreshold: 20
    property ScrollActions scrollActions: ScrollActions {}
    property Popouts popouts: Popouts {}
    property Workspaces workspaces: Workspaces {}
    property ActiveWindow activeWindow: ActiveWindow {}
    property Tray tray: Tray {}
    property Status status: Status {}
    property Clock clock: Clock {}
    property Sizes sizes: Sizes {}

    property list<var> entries: [
        {
            id: "logo",
            enabled: true
        },
        {
            id: "workspaces",
            enabled: true
        },
        {
            id: "spacer",
            enabled: true
        },
        {
            id: "activeWindow",
            enabled: true
        },
        {
            id: "spacer",
            enabled: true
        },
        {
            id: "tray",
            enabled: true
        },
        {
            id: "clock",
            enabled: true
        },
        {
            id: "statusIcons",
            enabled: true
        },
        {
            id: "power",
            enabled: true
        }
    ]

    component ScrollActions: JsonObject {
        property bool workspaces: true
        property bool volume: false
        property bool brightness: false
    }

    component Popouts: JsonObject {
        property bool activeWindow: true
        property bool tray: true
        property bool statusIcons: true
    }

    component Workspaces: JsonObject {
        property int shown: 5
        property bool activeIndicator: true
        property bool occupiedBg: true
        property bool showWindows: true
        property bool showWindowsOnSpecialWorkspaces: showWindows
        property bool activeTrail: true
        property bool perMonitorWorkspaces: true
        property string label: ""
        property string occupiedLabel: ""
        property string activeLabel: "󰮯"
        property string capitalisation: "preserve" // upper, lower, or preserve - relevant only if label is empty
        property list<var> specialWorkspaceIcons: []
    }

    component ActiveWindow: JsonObject {
        property bool inverted: false
    }

    component Tray: JsonObject {
        property bool background: true
        property bool recolour: false
        property bool compact: true
        property list<var> iconSubs: []
    }

    component Status: JsonObject {
        property bool showAudio: true
        property bool showMicrophone: true
        property bool showKbLayout: false
        property bool showNetwork: true
        property bool showBluetooth: true
        property bool showBattery: true
        property bool showLockStatus: false
    }

    component Clock: JsonObject {
        property bool showIcon: true
        property bool showCalendar: true
        property string calendarStyle: "simple"
    }

    component Sizes: JsonObject {
        property int innerWidth: 40
        property int windowPreviewSize: 400
        property int trayMenuWidth: 300
        property int batteryWidth: 270
        property int networkWidth: 320
    }
}
