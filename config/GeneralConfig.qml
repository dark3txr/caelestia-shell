import Quickshell.Io

JsonObject {
    property string logo: ""
    property Apps apps: Apps {}
    property Idle idle: Idle {}
    property Battery battery: Battery {}

    component Apps: JsonObject {
        property list<string> terminal: ["foot"]
        property list<string> audio: ["pavucontrol"]
        property list<string> playback: ["mpv"]
        property list<string> explorer: ["thunar"]
        property list<string> image: ["swappy", "-f"]
    }

    component Idle: JsonObject {
        property bool lockBeforeSleep: true
        property bool inhibitWhenAudio: true
        property list<var> timeouts: [
            {
                timeout: 300,
                idleAction: "lock"
            },
            {
                timeout: 420,
                idleAction: "dpms off",
                returnAction: "dpms on"
            },
            {
                timeout: 1200,
                idleAction: ["systemctl", "suspend-then-hibernate"]
            }
        ]
    }

    component Battery: JsonObject {
        property list<var> warnLevels: [
            {
                level: 20,
                title: qsTr("Low battery level"),
                message: qsTr("Battery level is at 20%"),
                icon: "battery_android_frame_2"
            },
            {
                level: 10,
                title: qsTr("Very low battery level"),
                message: qsTr("Battery level is at 10%"),
                icon: "battery_android_frame_1"
            },
            {
                level: 5,
                title: qsTr("Critical battery level"),
                message: qsTr("Battery level at 5%"),
                icon: "battery_android_alert",
                critical: true
            },
        ]
        property int criticalLevel: 3
    }
}
