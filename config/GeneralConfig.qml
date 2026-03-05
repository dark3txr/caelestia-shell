import Quickshell.Io

JsonObject {
    property string logo: ""
    property Apps apps: Apps {}
    property Idle idle: Idle {}
    property Battery battery: Battery {}


    component PowerActionSchema: JsonObject {
        property string setPowerProfile: ""
        property string setRefreshRate: ""
        property string disableAnimations: ""
        property string disableBlur: ""
        property string disableRounding: ""
        property string disableShadows: ""
    }

    component ChargingBehavior: PowerActionSchema {
        property string setPowerProfile: "restore"
        property string setRefreshRate: "restore"
        property string disableAnimations: ""
        property string disableBlur: ""
        property string disableRounding: ""
        property string disableShadows: ""
    }

    component UnpluggedBehavior: PowerActionSchema {
        property string setPowerProfile: "restore"
        property string setRefreshRate: "restore"
        property string disableAnimations: ""
        property string disableBlur: ""
        property string disableRounding: ""
        property string disableShadows: ""
        property bool evaluateThresholds: true
    }

    component ProfileBehavior: PowerActionSchema {
    }

    component ProfileBehaviors: JsonObject {
        property ProfileBehavior powerSaver: ProfileBehavior {
            setPowerProfile: ""
            setRefreshRate: "auto"
            disableAnimations: "enable"
            disableBlur: "disable"
            disableRounding: "enable"
            disableShadows: "disable"
        }

        property ProfileBehavior balanced: ProfileBehavior {
            setPowerProfile: ""
            setRefreshRate: "120"
            disableAnimations: "enable"
            disableBlur: "enable"
            disableRounding: "enable"
            disableShadows: "enable"
        }

        property ProfileBehavior performance: ProfileBehavior {
            setPowerProfile: ""
            setRefreshRate: "120"
            disableAnimations: "enable"
            disableBlur: "enable"
            disableRounding: "enable"
            disableShadows: "enable"
        }
    }

    component PowerManagement: JsonObject {
        property bool enabled: true
        property list<var> thresholds: [
            {
                disableAnimations: "",
                disableBlur: "",
                disableRounding: "",
                disableShadows: "",
                level: 50,
                setPowerProfile: "power-saver",
                setRefreshRate: ""
            },
            {
                disableAnimations: "",
                disableBlur: "disable",
                disableRounding: "",
                disableShadows: "disable",
                level: 20,
                setPowerProfile: "",
                setRefreshRate: "auto"
            },
            {
                disableAnimations: "disable",
                disableBlur: "disable",
                disableRounding: "",
                disableShadows: "disable",
                level: 10,
                setPowerProfile: "",
                setRefreshRate: "auto"
            }
        ]
        property ChargingBehavior onCharging: ChargingBehavior {}
        property UnpluggedBehavior onUnplugged: UnpluggedBehavior {}
        property ProfileBehaviors profileBehaviors: ProfileBehaviors {}
    }

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
        property PowerManagement powerManagement: PowerManagement {}
    }
}
