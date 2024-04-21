[
    {
        "id": "f027f866bea6aff6",
        "type": "tab",
        "label": "Flow 4",
        "disabled": false,
        "info": "",
        "env": []
    },
    {
        "id": "d2a7b5dd53e34c36",
        "type": "serial in",
        "z": "f027f866bea6aff6",
        "name": "",
        "serial": "7e867430e8cd5e56",
        "x": 90,
        "y": 120,
        "wires": [
            [
                "7dcd0e2a11bbea60",
                "924891a90efc01ff"
            ]
        ]
    },
    {
        "id": "ccec713062532c64",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc load Radia_jazz",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 720,
        "y": 140,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "924891a90efc01ff",
        "type": "debug",
        "z": "f027f866bea6aff6",
        "name": "debug 3",
        "active": true,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "false",
        "statusVal": "",
        "statusType": "auto",
        "x": 260,
        "y": 300,
        "wires": []
    },
    {
        "id": "7dcd0e2a11bbea60",
        "type": "switch",
        "z": "f027f866bea6aff6",
        "name": "",
        "property": "payload",
        "propertyType": "msg",
        "rules": [
            {
                "t": "cont",
                "v": "load playlist1",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "load playlist2",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc play",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc pause",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc stop",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc clear",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc next",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc prev",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "start pifmrds",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "mpc toggle",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "reboot",
                "vt": "str"
            },
            {
                "t": "cont",
                "v": "shutdown",
                "vt": "str"
            }
        ],
        "checkall": "true",
        "repair": false,
        "outputs": 12,
        "x": 310,
        "y": 140,
        "wires": [
            [
                "e1a4f77bcbfd3b5f"
            ],
            [
                "33ab3765720d51b7"
            ],
            [
                "8de6bee438125fdb"
            ],
            [
                "e2dd6f527465b319"
            ],
            [
                "61a7c2d422228be3"
            ],
            [
                "db143c2608e68022"
            ],
            [
                "77f944349b81c948"
            ],
            [
                "770178c591928c58"
            ],
            [
                "70a2e80d374d4966"
            ],
            [
                "a494af9bc1646238"
            ],
            [
                "fb9d548a91e5c42d"
            ],
            [
                "dcdd87bd0afa0e09"
            ]
        ]
    },
    {
        "id": "e1a4f77bcbfd3b5f",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc load playlist1",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 590,
        "y": 60,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "8de6bee438125fdb",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc play ",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 580,
        "y": 200,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "e2dd6f527465b319",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc pause",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 390,
        "y": 280,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "61a7c2d422228be3",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc stop",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 520,
        "y": 320,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "db143c2608e68022",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc clear",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 700,
        "y": 180,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "77f944349b81c948",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc next",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 680,
        "y": 260,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "770178c591928c58",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc prev",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 740,
        "y": 100,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "7cf008c8e250cad6",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": " sox -v 1.5 -t mp3 http://192.168.4.127:8000/ -t wav --input-buffer 80000 -r44100 -c2 - compand 0.01,1 -90,-90,-70,-70,-60,-20,0,0 0 | sudo /home/pi/install/rpitx/pifmrds -freq 102.3 -audio -",
        "addpay": false,
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 690,
        "y": 360,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "70a2e80d374d4966",
        "type": "debounce",
        "z": "f027f866bea6aff6",
        "time": 1000,
        "name": "",
        "x": 120,
        "y": 240,
        "wires": [
            [
                "7cf008c8e250cad6"
            ]
        ]
    },
    {
        "id": "a494af9bc1646238",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "mpc toggle",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 670,
        "y": 300,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "fb9d548a91e5c42d",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "sudo reboot",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 470,
        "y": 420,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "33ab3765720d51b7",
        "type": "debounce",
        "z": "f027f866bea6aff6",
        "time": 1000,
        "name": "",
        "x": 480,
        "y": 100,
        "wires": [
            [
                "ccec713062532c64"
            ]
        ]
    },
    {
        "id": "dcdd87bd0afa0e09",
        "type": "exec",
        "z": "f027f866bea6aff6",
        "command": "sudo halt",
        "addpay": "",
        "append": "",
        "useSpawn": "false",
        "timer": "",
        "winHide": false,
        "oldrc": false,
        "name": "",
        "x": 640,
        "y": 420,
        "wires": [
            [],
            [],
            []
        ]
    },
    {
        "id": "7e867430e8cd5e56",
        "type": "serial-port",
        "name": "",
        "serialport": "/dev/ttyUSB0",
        "serialbaud": "9600",
        "databits": "8",
        "parity": "none",
        "stopbits": "1",
        "waitfor": "",
        "dtr": "none",
        "rts": "none",
        "cts": "none",
        "dsr": "none",
        "newline": "\\n",
        "bin": "false",
        "out": "char",
        "addchar": "",
        "responsetimeout": "10000"
    }
]
