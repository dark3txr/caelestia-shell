pragma ComponentBehavior: Bound

import "items"
import "services"
import qs.components
import qs.components.controls
import qs.components.containers
import qs.services
import qs.config
import Quickshell
import QtQuick

StyledListView {
    id: root

    required property StyledTextField search
    required property PersistentProperties visibilities

    model: ScriptModel {
        id: model

        onValuesChanged: {
            root.currentIndex = 0;
        }
    }

    spacing: Appearance.spacing.small
    orientation: Qt.Vertical
    implicitHeight: (Config.launcher.sizes.itemHeight + spacing) * Math.min(Config.launcher.maxShown, count) - spacing

    preferredHighlightBegin: 0
    preferredHighlightEnd: height
    highlightRangeMode: ListView.ApplyRange

    highlight: Rectangle {
        color: Qt.alpha(Colours.palette.m3onSurface, 0.08)
        radius: Appearance.rounding.normal
    }
    highlightFollowsCurrentItem: true

    delegate: fileSearchItem

    Component {
        id: fileSearchItem

        FileSearchItem {
            visibilities: root.visibilities
        }
    }

    Connections {
        target: FileSearch

        function onFilesChanged(): void {
            updateModel();
        }
    }

    Connections {
        target: root.search

        function onTextChanged(): void {
            searchFiles();
        }
    }

    function searchFiles(): void {
        const query = root.search.text.replace(/^>search\s*/i, "").trim();

        FileSearch.refresh(query);
    }

    function updateModel(): void {
        let items = FileSearch.files;

        model.values = items;
    }
}