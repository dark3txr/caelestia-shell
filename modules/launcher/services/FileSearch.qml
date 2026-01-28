pragma Singleton

import Quickshell
import Quickshell.Io
import qs.config
import qs.utils
import QtQuick

Singleton {
    id: root

    property var files: []
    property bool notFound: false

    function refresh(query): void {
        let cmd = `fd ${query} ~`;

        fileSearchProcess.command = ["sh", "-c", cmd];
        fileSearchProcess.running = true;
    }

    function openFile(item): void {
        Quickshell.execDetached(["xdg-open", item.content])
    }

    Process {
        id: fileSearchProcess
        stdout: StdioCollector {
            onStreamFinished: {
                if (text) {
                    const lines = text.trim().split('\n');

                    root.files = lines.map((line, index) => {
                        return {
                            id: index,
                            file: line.slice(line.lastIndexOf("/")+1),
                            path: line.replace(line.slice(line.lastIndexOf("/")+1), "")
                        }
                    });
                    root.notFound = false
                } else {
                    root.files = []
                    root.notFound = true
                }
            }
        }
        stderr: StdioCollector {
            onStreamFinished: {
                const error = text.trim();
                if (error && error.length > 0) {
                    root.files = []
                    root.notFound = false
                }
            }
        }
    }
}