import Quickshell.Io

JsonObject {
    property bool enabled: true
    property int dragThreshold: 30
    property bool vimKeybinds: false
    property Icons icons: Icons {}
    property Commands commands: Commands {}

    property Sizes sizes: Sizes {}

    component Icons: JsonObject {
        property string suspend: "bedtime"
        property string logout: "logout"
        property string hibernate: "downloading"
        property string reboot: "cached"
        property string shutdown: "power_settings_new"
    }

    component Commands: JsonObject {
        property list<string> suspend: ["systemctl", "suspend-then-hibernate"]
        property list<string> logout: ["hyprctl", "dispatch", "exit"]
        property list<string> hibernate: ["systemctl", "hibernate"]
        property list<string> reboot: ["systemctl", "reboot"]
        property list<string> shutdown: ["systemctl", "poweroff"]
    }

    component Sizes: JsonObject {
        property int button: 80
    }
}
