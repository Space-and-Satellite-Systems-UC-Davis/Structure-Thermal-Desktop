HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 24.1 Patch 0
C    Installed Sinda: Sinda/Fluint 24.1 patch level 0
C    Generated on Fri Feb 16 18:24:43 2024
C    From file: CUBESAT.dwg
C    XREF name: Frame file: .\Frame.dwg
C    Case Set: 7 Orbit
C    Radiation Groups: External HR, External RDK, Internal RDK
C    Running Steady and 90min (10800s) Transient States
C    TDUNITS,   Energy     = J
C    TDUNITS,   Time       = s
C    TDUNITS,   Temp       = C
C    TDUNITS,   Mass       = kg
C    TDUNITS,   Length     = m
C    TDUNITS,   Orbit      = km
C    TDUNITS,   Pressure   = Pa
C    TDUNITS,   Force      = N
C    TDUNITS,   Angle      = Degrees
C    TDUNITS,   Volt       = volt
C    TDUNITS,   Current    = amp
C    DWG name:      CUBESAT.dwg
C    Thermophysical Property Database: ThermalDataFilled.tdp
C    Optical Property Database:        optical properties\rcoptics_open_v1.3 (2).rco
C    Computer name: RYANLAPTOP
C    User name:     rpkar
C    Symbol Names, Evaluated values, Input Strings, Comments
C    hrBetaAngle          51.64         51.64
C    hrEccen              0.00029567    0.00029567
C    hrIllum              0.            0
C    hrMeanAnom           0.            0
C    hrPeriod             5578.17       5578.17              Always in current user units. If programming, use hrPeri...
C    hrPeriodSec          5578.17       5578.17
C    hrPlanetX            6.310890e-30  6.31089e-30
C    hrPlanetY            0.            0
C    hrPlanetZ            1.            1
C    hrPos                0.            0
C    hrShadowEntry        123.9306      1.239305657959e+02  
C    hrShadowExit         236.0694      2.360694342042e+02  
C    hrSpeed              7.65956       7.65956
C    hrSubSolarMeanAnom   7.038290e-12  7.03829e-12          -180 to 180
C    hrSubSolarTrueAnom   7.042450e-12  7.04245e-12          -180 to 180
C    hrSunX               7.628050e-14  7.62805e-14
C    hrSunY               -0.784127     -0.784127
C    hrSunZ               -0.620601     -0.620601
C    hrTime               0.            0                    Always in current user units. If programming, use hrTime...
C    hrTimeSec            0.            0
C    hrTimeShadowEntry    1919.86       1919.86
C    hrTimeShadowEntrySec 1919.86       1919.86
C    hrTimeShadowExit     3658.314      3.658314108841e+03  
C    hrTimeShadowExitSec  3658.314      3.658314108841e+03  
C    hrTrueAnom           0.            0
C    hrVelocityX          1.            1
C    hrVelocityY          -6.310890e-30 -6.31089e-30
C    hrVelocityZ          -1.262180e-29 -1.26218e-29
HEADER OUTPUT CALLS, GLOBAL
C Case Set Prop Generated Code

      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 ) THEN
          IF(TIMEN .GE. TIMEND) THEN
              CALL SAVE('ALL',0)
          ELSE
              CALL SAVE('TR',0)
          ENDIF
      ELSE IF( LOOPCT .GT. 0 ) THEN
          CALL SAVE('ALL',0)
      ENDIF

HEADER NODE DATA, SPACE
            -1,    -270.42,    -1.0
HEADER NODE DATA, STRUCTURE
HEADER CONDUCTOR DATA, STRUCTURE
            1,    XNEG.1,    XNEG.2,    1.67
            2,    XNEG.1,    XNEG.6,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            3,    XNEG.1,    ZNEG.1,    0.012825
            4,    XNEG.2,    XNEG.3,    1.67
            5,    XNEG.2,    XNEG.7,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            6,    XNEG.2,    ZNEG.6,    0.01425
            7,    XNEG.3,    XNEG.4,    1.67
            8,    XNEG.3,    XNEG.8,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            9,    XNEG.3,    ZNEG.11,    0.01425
            10,    XNEG.4,    XNEG.5,    1.67
            11,    XNEG.4,    XNEG.9,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            12,    XNEG.4,    ZNEG.16,    0.01425
            13,    XNEG.5,    XNEG.10,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            14,    XNEG.5,    ZNEG.21,    0.01425
            15,    XNEG.6,    XNEG.7,    1.67
            16,    XNEG.6,    XNEG.11,    0.4175
            17,    XNEG.7,    XNEG.8,    1.67
            18,    XNEG.7,    XNEG.12,    0.4175
            19,    XNEG.8,    XNEG.9,    1.67
            20,    XNEG.8,    XNEG.13,    0.4175
            21,    XNEG.9,    XNEG.10,    1.67
            22,    XNEG.9,    XNEG.14,    0.4175
            23,    XNEG.10,    XNEG.15,    0.4175
            24,    XNEG.11,    XNEG.12,    1.67
            25,    XNEG.11,    XNEG.16,    0.4175
            26,    XNEG.12,    XNEG.13,    1.67
            27,    XNEG.12,    XNEG.17,    0.4175
            28,    XNEG.13,    XNEG.14,    1.67
            29,    XNEG.13,    XNEG.18,    0.4175
            30,    XNEG.14,    XNEG.15,    1.67
            31,    XNEG.14,    XNEG.19,    0.4175
            32,    XNEG.15,    XNEG.20,    0.4175
            33,    XNEG.16,    XNEG.17,    1.67
            34,    XNEG.16,    XNEG.21,    0.4175
            35,    XNEG.17,    XNEG.18,    1.67
            36,    XNEG.17,    XNEG.22,    0.4175
            37,    XNEG.18,    XNEG.19,    1.67
            38,    XNEG.18,    XNEG.23,    0.4175
            39,    XNEG.19,    XNEG.20,    1.67
            40,    XNEG.19,    XNEG.24,    0.4175
            41,    XNEG.20,    XNEG.25,    0.4175
            42,    XNEG.21,    XNEG.22,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            43,    XNEG.21,    ZPOS.21,    0.012825
            44,    XNEG.22,    XNEG.23,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            45,    XNEG.22,    ZPOS.16,    0.01425
            46,    XNEG.23,    XNEG.24,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            47,    XNEG.23,    ZPOS.11,    0.01425
            48,    XNEG.24,    XNEG.25,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            49,    XNEG.24,    ZPOS.6,    0.01425
            50,    XNEG.25,    ZPOS.1,    0.012825
            51,    XPOS.1,    XPOS.2,    1.67
            52,    XPOS.1,    XPOS.6,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            53,    XPOS.1,    ZNEG.25,    0.015675
            54,    XPOS.2,    XPOS.3,    1.67
            55,    XPOS.2,    XPOS.7,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            56,    XPOS.2,    ZNEG.20,    0.01425
            57,    XPOS.3,    XPOS.4,    1.67
            58,    XPOS.3,    XPOS.8,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            59,    XPOS.3,    ZNEG.15,    0.01425
            60,    XPOS.4,    XPOS.5,    1.67
            61,    XPOS.4,    XPOS.9,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            62,    XPOS.4,    ZNEG.10,    0.01425
            63,    XPOS.5,    XPOS.10,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            64,    XPOS.5,    ZNEG.5,    0.015675
            65,    XPOS.6,    XPOS.7,    1.67
            66,    XPOS.6,    XPOS.11,    0.4175
            67,    XPOS.7,    XPOS.8,    1.67
            68,    XPOS.7,    XPOS.12,    0.4175
            69,    XPOS.8,    XPOS.9,    1.67
            70,    XPOS.8,    XPOS.13,    0.4175
            71,    XPOS.9,    XPOS.10,    1.67
            72,    XPOS.9,    XPOS.14,    0.4175
            73,    XPOS.10,    XPOS.15,    0.4175
            74,    XPOS.11,    XPOS.12,    1.67
            75,    XPOS.11,    XPOS.16,    0.4175
            76,    XPOS.12,    XPOS.13,    1.67
            77,    XPOS.12,    XPOS.17,    0.4175
            78,    XPOS.13,    XPOS.14,    1.67
            79,    XPOS.13,    XPOS.18,    0.4175
            80,    XPOS.14,    XPOS.15,    1.67
            81,    XPOS.14,    XPOS.19,    0.4175
            82,    XPOS.15,    XPOS.20,    0.4175
            83,    XPOS.16,    XPOS.17,    1.67
            84,    XPOS.16,    XPOS.21,    0.4175
            85,    XPOS.17,    XPOS.18,    1.67
            86,    XPOS.17,    XPOS.22,    0.4175
            87,    XPOS.18,    XPOS.19,    1.67
            88,    XPOS.18,    XPOS.23,    0.4175
            89,    XPOS.19,    XPOS.20,    1.67
            90,    XPOS.19,    XPOS.24,    0.4175
            91,    XPOS.20,    XPOS.25,    0.4175
            92,    XPOS.21,    XPOS.22,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            93,    XPOS.21,    ZPOS.5,    0.015675
            94,    XPOS.22,    XPOS.23,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            95,    XPOS.22,    ZPOS.10,    0.01425
            96,    XPOS.23,    XPOS.24,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            97,    XPOS.23,    ZPOS.15,    0.01425
            98,    XPOS.24,    XPOS.25,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            99,    XPOS.24,    ZPOS.20,    0.01425
            100,    XPOS.25,    ZPOS.25,    0.01425
            101,    YNEG.1,    YNEG.2,    1.67
            102,    YNEG.1,    YNEG.6,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            103,    YNEG.1,    ZNEG.21,    0.01425
            104,    YNEG.2,    YNEG.3,    1.67
            105,    YNEG.2,    YNEG.7,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            106,    YNEG.2,    ZNEG.22,    0.01425
            107,    YNEG.3,    YNEG.4,    1.67
            108,    YNEG.3,    YNEG.8,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            109,    YNEG.3,    ZNEG.23,    0.01425
            110,    YNEG.4,    YNEG.5,    1.67
            111,    YNEG.4,    YNEG.9,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            112,    YNEG.4,    ZNEG.24,    0.01425
            113,    YNEG.5,    YNEG.10,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            114,    YNEG.5,    ZNEG.25,    0.012825
            115,    YNEG.6,    YNEG.7,    1.67
            116,    YNEG.6,    YNEG.11,    0.4175
            117,    YNEG.7,    YNEG.8,    1.67
            118,    YNEG.7,    YNEG.12,    0.4175
            119,    YNEG.8,    YNEG.9,    1.67
            120,    YNEG.8,    YNEG.13,    0.4175
            121,    YNEG.9,    YNEG.10,    1.67
            122,    YNEG.9,    YNEG.14,    0.4175
            123,    YNEG.10,    YNEG.15,    0.4175
            124,    YNEG.11,    YNEG.12,    1.67
            125,    YNEG.11,    YNEG.16,    0.4175
            126,    YNEG.12,    YNEG.13,    1.67
            127,    YNEG.12,    YNEG.17,    0.4175
            128,    YNEG.13,    YNEG.14,    1.67
            129,    YNEG.13,    YNEG.18,    0.4175
            130,    YNEG.14,    YNEG.15,    1.67
            131,    YNEG.14,    YNEG.19,    0.4175
            132,    YNEG.15,    YNEG.20,    0.4175
            133,    YNEG.16,    YNEG.17,    1.67
            134,    YNEG.16,    YNEG.21,    0.4175
            135,    YNEG.17,    YNEG.18,    1.67
            136,    YNEG.17,    YNEG.22,    0.4175
            137,    YNEG.18,    YNEG.19,    1.67
            138,    YNEG.18,    YNEG.23,    0.4175
            139,    YNEG.19,    YNEG.20,    1.67
            140,    YNEG.19,    YNEG.24,    0.4175
            141,    YNEG.20,    YNEG.25,    0.4175
            142,    YNEG.21,    YNEG.22,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            143,    YNEG.21,    ZPOS.1,    0.015675
            144,    YNEG.22,    YNEG.23,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            145,    YNEG.22,    ZPOS.2,    0.01425
            146,    YNEG.23,    YNEG.24,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            147,    YNEG.23,    ZPOS.3,    0.01425
            148,    YNEG.24,    YNEG.25,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            149,    YNEG.24,    ZPOS.4,    0.01425
            150,    YNEG.25,    ZPOS.5,    0.012825
            151,    YPOS.1,    YPOS.2,    1.67
            152,    YPOS.1,    YPOS.6,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            153,    YPOS.1,    ZNEG.5,    0.012825
            154,    YPOS.2,    YPOS.3,    1.67
            155,    YPOS.2,    YPOS.7,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            156,    YPOS.2,    ZNEG.4,    0.01425
            157,    YPOS.3,    YPOS.4,    1.67
            158,    YPOS.3,    YPOS.8,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            159,    YPOS.3,    ZNEG.3,    0.01425
            160,    YPOS.4,    YPOS.5,    1.67
            161,    YPOS.4,    YPOS.9,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            162,    YPOS.4,    ZNEG.2,    0.01425
            163,    YPOS.5,    YPOS.10,    0.4175
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16E
            164,    YPOS.5,    ZNEG.1,    0.015675
            165,    YPOS.6,    YPOS.7,    1.67
            166,    YPOS.6,    YPOS.11,    0.4175
            167,    YPOS.7,    YPOS.8,    1.67
            168,    YPOS.7,    YPOS.12,    0.4175
            169,    YPOS.8,    YPOS.9,    1.67
            170,    YPOS.8,    YPOS.13,    0.4175
            171,    YPOS.9,    YPOS.10,    1.67
            172,    YPOS.9,    YPOS.14,    0.4175
            173,    YPOS.10,    YPOS.15,    0.4175
            174,    YPOS.11,    YPOS.12,    1.67
            175,    YPOS.11,    YPOS.16,    0.4175
            176,    YPOS.12,    YPOS.13,    1.67
            177,    YPOS.12,    YPOS.17,    0.4175
            178,    YPOS.13,    YPOS.14,    1.67
            179,    YPOS.13,    YPOS.18,    0.4175
            180,    YPOS.14,    YPOS.15,    1.67
            181,    YPOS.14,    YPOS.19,    0.4175
            182,    YPOS.15,    YPOS.20,    0.4175
            183,    YPOS.16,    YPOS.17,    1.67
            184,    YPOS.16,    YPOS.21,    0.4175
            185,    YPOS.17,    YPOS.18,    1.67
            186,    YPOS.17,    YPOS.22,    0.4175
            187,    YPOS.18,    YPOS.19,    1.67
            188,    YPOS.18,    YPOS.23,    0.4175
            189,    YPOS.19,    YPOS.20,    1.67
            190,    YPOS.19,    YPOS.24,    0.4175
            191,    YPOS.20,    YPOS.25,    0.4175
            192,    YPOS.21,    YPOS.22,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            193,    YPOS.21,    ZPOS.25,    0.01425
            194,    YPOS.22,    YPOS.23,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            195,    YPOS.22,    ZPOS.24,    0.01425
            196,    YPOS.23,    YPOS.24,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            197,    YPOS.23,    ZPOS.23,    0.01425
            198,    YPOS.24,    YPOS.25,    1.67
C Contact - Edge Contactor[STRUCTURE][0][Frame]::16D
            199,    YPOS.24,    ZPOS.22,    0.01425
            200,    YPOS.25,    ZPOS.21,    0.015675
            201,    ZNEG.1,    ZNEG.2,    0.835
            202,    ZNEG.1,    ZNEG.6,    0.835
            203,    ZNEG.2,    ZNEG.3,    0.835
            204,    ZNEG.2,    ZNEG.7,    0.835
            205,    ZNEG.3,    ZNEG.4,    0.835
            206,    ZNEG.3,    ZNEG.8,    0.835
            207,    ZNEG.4,    ZNEG.5,    0.835
            208,    ZNEG.4,    ZNEG.9,    0.835
            209,    ZNEG.5,    ZNEG.10,    0.835
            210,    ZNEG.6,    ZNEG.7,    0.835
            211,    ZNEG.6,    ZNEG.11,    0.835
            212,    ZNEG.7,    ZNEG.8,    0.835
            213,    ZNEG.7,    ZNEG.12,    0.835
            214,    ZNEG.8,    ZNEG.9,    0.835
            215,    ZNEG.8,    ZNEG.13,    0.835
            216,    ZNEG.9,    ZNEG.10,    0.835
            217,    ZNEG.9,    ZNEG.14,    0.835
            218,    ZNEG.10,    ZNEG.15,    0.835
            219,    ZNEG.11,    ZNEG.12,    0.835
            220,    ZNEG.11,    ZNEG.16,    0.835
            221,    ZNEG.12,    ZNEG.13,    0.835
            222,    ZNEG.12,    ZNEG.17,    0.835
            223,    ZNEG.13,    ZNEG.14,    0.835
            224,    ZNEG.13,    ZNEG.18,    0.835
            225,    ZNEG.14,    ZNEG.15,    0.835
            226,    ZNEG.14,    ZNEG.19,    0.835
            227,    ZNEG.15,    ZNEG.20,    0.835
            228,    ZNEG.16,    ZNEG.17,    0.835
            229,    ZNEG.16,    ZNEG.21,    0.835
            230,    ZNEG.17,    ZNEG.18,    0.835
            231,    ZNEG.17,    ZNEG.22,    0.835
            232,    ZNEG.18,    ZNEG.19,    0.835
            233,    ZNEG.18,    ZNEG.23,    0.835
            234,    ZNEG.19,    ZNEG.20,    0.835
            235,    ZNEG.19,    ZNEG.24,    0.835
            236,    ZNEG.20,    ZNEG.25,    0.835
            237,    ZNEG.21,    ZNEG.22,    0.835
            238,    ZNEG.22,    ZNEG.23,    0.835
            239,    ZNEG.23,    ZNEG.24,    0.835
            240,    ZNEG.24,    ZNEG.25,    0.835
            241,    ZPOS.1,    ZPOS.2,    0.835
            242,    ZPOS.1,    ZPOS.6,    0.835
            243,    ZPOS.2,    ZPOS.3,    0.835
            244,    ZPOS.2,    ZPOS.7,    0.835
            245,    ZPOS.3,    ZPOS.4,    0.835
            246,    ZPOS.3,    ZPOS.8,    0.835
            247,    ZPOS.4,    ZPOS.5,    0.835
            248,    ZPOS.4,    ZPOS.9,    0.835
            249,    ZPOS.5,    ZPOS.10,    0.835
            250,    ZPOS.6,    ZPOS.7,    0.835
            251,    ZPOS.6,    ZPOS.11,    0.835
            252,    ZPOS.7,    ZPOS.8,    0.835
            253,    ZPOS.7,    ZPOS.12,    0.835
            254,    ZPOS.8,    ZPOS.9,    0.835
            255,    ZPOS.8,    ZPOS.13,    0.835
            256,    ZPOS.9,    ZPOS.10,    0.835
            257,    ZPOS.9,    ZPOS.14,    0.835
            258,    ZPOS.10,    ZPOS.15,    0.835
            259,    ZPOS.11,    ZPOS.12,    0.835
            260,    ZPOS.11,    ZPOS.16,    0.835
            261,    ZPOS.12,    ZPOS.13,    0.835
            262,    ZPOS.12,    ZPOS.17,    0.835
            263,    ZPOS.13,    ZPOS.14,    0.835
            264,    ZPOS.13,    ZPOS.18,    0.835
            265,    ZPOS.14,    ZPOS.15,    0.835
            266,    ZPOS.14,    ZPOS.19,    0.835
            267,    ZPOS.15,    ZPOS.20,    0.835
            268,    ZPOS.16,    ZPOS.17,    0.835
            269,    ZPOS.16,    ZPOS.21,    0.835
            270,    ZPOS.17,    ZPOS.18,    0.835
            271,    ZPOS.17,    ZPOS.22,    0.835
            272,    ZPOS.18,    ZPOS.19,    0.835
            273,    ZPOS.18,    ZPOS.23,    0.835
            274,    ZPOS.19,    ZPOS.20,    0.835
            275,    ZPOS.19,    ZPOS.24,    0.835
            276,    ZPOS.20,    ZPOS.25,    0.835
            277,    ZPOS.21,    ZPOS.22,    0.835
            278,    ZPOS.22,    ZPOS.23,    0.835
            279,    ZPOS.23,    ZPOS.24,    0.835
            280,    ZPOS.24,    ZPOS.25,    0.835
HEADER NODE DATA, XNEG
            1,    20.,    9.6768
            2,    20.,    9.6768
            3,    20.,    9.6768
            4,    20.,    9.6768
            5,    20.,    9.6768
            6,    20.,    9.6768
            7,    20.,    9.6768
            8,    20.,    9.6768
            9,    20.,    9.6768
            10,    20.,    9.6768
            11,    20.,    9.6768
            12,    20.,    9.6768
            13,    20.,    9.6768
            14,    20.,    9.6768
            15,    20.,    9.6768
            16,    20.,    9.6768
            17,    20.,    9.6768
            18,    20.,    9.6768
            19,    20.,    9.6768
            20,    20.,    9.6768
            21,    20.,    9.6768
            22,    20.,    9.6768
            23,    20.,    9.6768
            24,    20.,    9.6768
            25,    20.,    9.6768
HEADER NODE DATA, XPOS
            1,    20.,    9.6768
            2,    20.,    9.6768
            3,    20.,    9.6768
            4,    20.,    9.6768
            5,    20.,    9.6768
            6,    20.,    9.6768
            7,    20.,    9.6768
            8,    20.,    9.6768
            9,    20.,    9.6768
            10,    20.,    9.6768
            11,    20.,    9.6768
            12,    20.,    9.6768
            13,    20.,    9.6768
            14,    20.,    9.6768
            15,    20.,    9.6768
            16,    20.,    9.6768
            17,    20.,    9.6768
            18,    20.,    9.6768
            19,    20.,    9.6768
            20,    20.,    9.6768
            21,    20.,    9.6768
            22,    20.,    9.6768
            23,    20.,    9.6768
            24,    20.,    9.6768
            25,    20.,    9.6768
HEADER NODE DATA, YNEG
            1,    20.,    9.6768
            2,    20.,    9.6768
            3,    20.,    9.6768
            4,    20.,    9.6768
            5,    20.,    9.6768
            6,    20.,    9.6768
            7,    20.,    9.6768
            8,    20.,    9.6768
            9,    20.,    9.6768
            10,    20.,    9.6768
            11,    20.,    9.6768
            12,    20.,    9.6768
            13,    20.,    9.6768
            14,    20.,    9.6768
            15,    20.,    9.6768
            16,    20.,    9.6768
            17,    20.,    9.6768
            18,    20.,    9.6768
            19,    20.,    9.6768
            20,    20.,    9.6768
            21,    20.,    9.6768
            22,    20.,    9.6768
            23,    20.,    9.6768
            24,    20.,    9.6768
            25,    20.,    9.6768
HEADER NODE DATA, YPOS
            1,    20.,    9.6768
            2,    20.,    9.6768
            3,    20.,    9.6768
            4,    20.,    9.6768
            5,    20.,    9.6768
            6,    20.,    9.6768
            7,    20.,    9.6768
            8,    20.,    9.6768
            9,    20.,    9.6768
            10,    20.,    9.6768
            11,    20.,    9.6768
            12,    20.,    9.6768
            13,    20.,    9.6768
            14,    20.,    9.6768
            15,    20.,    9.6768
            16,    20.,    9.6768
            17,    20.,    9.6768
            18,    20.,    9.6768
            19,    20.,    9.6768
            20,    20.,    9.6768
            21,    20.,    9.6768
            22,    20.,    9.6768
            23,    20.,    9.6768
            24,    20.,    9.6768
            25,    20.,    9.6768
HEADER NODE DATA, ZNEG
            1,    20.,    4.8384
            2,    20.,    4.8384
            3,    20.,    4.8384
            4,    20.,    4.8384
            5,    20.,    4.8384
            6,    20.,    4.8384
            7,    20.,    4.8384
            8,    20.,    4.8384
            9,    20.,    4.8384
            10,    20.,    4.8384
            11,    20.,    4.8384
            12,    20.,    4.8384
            13,    20.,    4.8384
            14,    20.,    4.8384
            15,    20.,    4.8384
            16,    20.,    4.8384
            17,    20.,    4.8384
            18,    20.,    4.8384
            19,    20.,    4.8384
            20,    20.,    4.8384
            21,    20.,    4.8384
            22,    20.,    4.8384
            23,    20.,    4.8384
            24,    20.,    4.8384
            25,    20.,    4.8384
HEADER NODE DATA, ZPOS
            1,    20.,    4.8384
            2,    20.,    4.8384
            3,    20.,    4.8384
            4,    20.,    4.8384
            5,    20.,    4.8384
            6,    20.,    4.8384
            7,    20.,    4.8384
            8,    20.,    4.8384
            9,    20.,    4.8384
            10,    20.,    4.8384
            11,    20.,    4.8384
            12,    20.,    4.8384
            13,    20.,    4.8384
            14,    20.,    4.8384
            15,    20.,    4.8384
            16,    20.,    4.8384
            17,    20.,    4.8384
            18,    20.,    4.8384
            19,    20.,    4.8384
            20,    20.,    4.8384
            21,    20.,    4.8384
            22,    20.,    4.8384
            23,    20.,    4.8384
            24,    20.,    4.8384
            25,    20.,    4.8384
HEADER SUBROUTINE
      SUBROUTINE TDHTR
C     This routine is to hold heaters at their midpoint temps
C     for steady state solutions.
      RETURN
      END
      SUBROUTINE TDREL
C     This routine is to release heaters for transient runs
C     for steady state solutions.
F     RETURN
F     END
F     SUBROUTINE TDHTOT
C     This routine prints out heater ontime and cycle summaries
F     RETURN
F     END
F     SUBROUTINE TDHTRST
C     This routine resets heater statistics
F     RETURN
F     END
F     SUBROUTINE TDPREBL
C     This routine executes logic before the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTBL
C     This routine executes logic after the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTSL
C     This routine executes logic after the solution
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE BASEPLOT
      CALL COMMON
F     RETURN
F     END
