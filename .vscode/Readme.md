``launch.json``
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++.exe build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false, //set to true to see output in cmd instead
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\MinGW64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "g++.exe build active file"
        },
        {
            "name": "g++ build & run active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true, //set to true to see output in cmd instead
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\MinGW64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "g++ build & run active file"
        }
    ]
}
```
``task.json``
```json
{
    "tasks": [
        {
            "type": "shell",
            "label": "g++.exe build active file",
            "command": "C:\\MinGW64\\bin\\g++.exe",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "C:\\MinGW64\\bin"
            }
        },
        {
            "type": "shell",
            "label": "g++ build & run active file",
            "command": "C:\\MinGW64\\bin\\g++.exe",
            "args": [
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "C:\\MinGW64\\bin"
            }
        }
    ],
    "version": "2.0.0"
}
```