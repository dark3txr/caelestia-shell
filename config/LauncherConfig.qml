import Quickshell.Io

JsonObject {
    property bool enabled: true
    property bool showOnHover: false
    property bool enableCategories: true
    property int maxShown: 7
    property int maxWallpapers: 9 // Warning: even numbers look bad
    property string specialPrefix: "!"
    property string actionPrefix: ">"
    property bool enableDangerousActions: true // Allow actions that can cause losing data, like shutdown, reboot and logout
    property int dragThreshold: 50
    property bool vimKeybinds: false
    property list<string> favouriteApps: ["rog-control-center", "zen", "vesktop", "geometrydash", "spotify-launcher"]
    property list<string> hiddenApps: []
    property list<var> contextMenuMain: []
    property list<var> contextMenuAdvanced: []
    property list<var> categories: [
        { name: "Development", icon: "code", apps: ["nvim", "github-desktop", "lmstudio", "stable-diffusion", "virt-manager"] },
        { name: "Graphics", icon: "palette", apps: ["org.gnome.gThumb", "com.obsproject.Studio"] },
        { name: "Communication", icon: "chat", apps: ["vesktop"] },
        { name: "Media", icon: "play_circle", apps: ["spotify-launcher", "mpv", "com.obsproject.Studio", "qvidcap", "qv4l2"] },
        { name: "Office", icon: "description", apps: ["thunar"] },
        { name: "Games", icon: "sports_esports", apps: ["geometrydash", "net.lutris.Lutris", "org.qbittorrent.qBittorrent"] },
        { name: "Utilities", icon: "build", apps: ["nm-connection-editor", "blueman-manager", "gparted", "btop", "rog-control-center", "net.davidotek.pupgui2"] }
    ]
    property UseFuzzy useFuzzy: UseFuzzy {}
    property Sizes sizes: Sizes {}

    component UseFuzzy: JsonObject {
        property bool apps: false
        property bool actions: false
        property bool schemes: false
        property bool variants: false
        property bool wallpapers: false
    }

    component Sizes: JsonObject {
        property int itemWidth: 600
        property int itemHeight: 57
        property int wallpaperWidth: 280
        property int wallpaperHeight: 200
    }

    property list<var> actions: [
        {
            name: "Calculator",
            icon: "calculate",
            description: "Do simple maths equations",
            command: ["autocomplete", "calc"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Python",
            icon: "code",
            description: "Execute Python one-liners",
            command: ["autocomplete", "python"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Scheme",
            icon: "palette",
            description: "Change the current colour scheme",
            command: ["autocomplete", "scheme"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Wallpaper",
            icon: "image",
            description: "Change the current wallpaper",
            command: ["autocomplete", "wallpaper"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Variant",
            icon: "colors",
            description: "Change the current colour scheme variant",
            command: ["autocomplete", "variant"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Transparency",
            icon: "opacity",
            description: "Change shell transparency",
            command: ["autocomplete", "transparency"],
            enabled: false,
            dangerous: false
        },
        {
            name: "Random",
            icon: "casino",
            description: "Switch to a random wallpaper",
            command: ["caelestia", "wallpaper", "-r"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Light",
            icon: "light_mode",
            description: "Change the scheme to light mode",
            command: ["setMode", "light"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Dark",
            icon: "dark_mode",
            description: "Change the scheme to dark mode",
            command: ["setMode", "dark"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Shutdown",
            icon: "power_settings_new",
            description: "Shutdown the system",
            command: ["systemctl", "poweroff"],
            enabled: true,
            dangerous: true
        },
        {
            name: "Reboot",
            icon: "cached",
            description: "Reboot the system",
            command: ["systemctl", "reboot"],
            enabled: true,
            dangerous: true
        },
        {
            name: "Logout",
            icon: "exit_to_app",
            description: "Log out of the current session",
            command: ["loginctl", "terminate-user", ""],
            enabled: true,
            dangerous: true
        },
        {
            name: "Lock",
            icon: "lock",
            description: "Lock the current session",
            command: ["loginctl", "lock-session"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Sleep",
            icon: "bedtime",
            description: "Suspend then hibernate",
            command: ["systemctl", "suspend-then-hibernate"],
            enabled: true,
            dangerous: false
        },
        {
            name: "Settings",
            icon: "settings",
            description: "Open the settings",
            command: ["caelestia", "shell", "controlCenter", "open"],
            enabled: true,
            dangerous: false
        }
    ]
}
