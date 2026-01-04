import Quickshell.Io
import QtQuick

JsonObject {
    property string weatherLocation: "" // A lat,long pair or empty for autodetection, e.g. "37.8267,-122.4233"
    property bool useFahrenheit: [Locale.ImperialUSSystem, Locale.ImperialSystem].includes(Qt.locale().measurementSystem) // Uses system configuration
    property bool useTwelveHourClock: Qt.locale().timeFormat(Locale.ShortFormat).toLowerCase().includes("a") // Uses system configuration
    property string gpuType: ""
    property int visualiserBars: 45
    property real audioIncrement: 0.1
    property real maxVolume: 1.0
    property real brightnessIncrement: 0.05
    property bool smartScheme: true
    property string defaultPlayer: "Spotify"
    property list<var> playerAliases: [
        {
            "from": "com.github.th_ch.youtube_music",
            "to": "YT Music"
        }
    ]
}
