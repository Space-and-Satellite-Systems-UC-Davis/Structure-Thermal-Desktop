HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.3 Patch 22
C    Generated on Sun Nov  5 14:34:58 2023
C    From file: CubesatFrame_RYAN.dwg
C    Case Set: 1_DAY_TEST
C    TDUNITS,   Energy     = J
C    TDUNITS,   Time       = s
C    TDUNITS,   Temp       = K
C    TDUNITS,   Mass       = kg
C    TDUNITS,   Length     = m
C    TDUNITS,   Orbit      = km
C    TDUNITS,   Pressure   = Pa
C    TDUNITS,   Force      = N
C    TDUNITS,   Angle      = Degrees
C    TDUNITS,   Volt       = volt
C    TDUNITS,   Current    = amp
C    DWG name:      CubesatFrame_RYAN.dwg
C    Thermophysical Property Database: ThermalDataFilled.tdp
C    Optical Property Database:        OpticalDataCustom.rco
C    Computer name: LAPTOPCOPY
C    User name:     rpkar
C    Symbol Names, Evaluated values, Input Strings, Comments
C    hrBetaAngle          51.64         51.64
C    hrEccen              0.00029567    0.00029567
C    hrIllum              0.            0
C    hrMeanAnom           0.            0
C    hrPeriod             5578.17       5578.17              Always in current user units. If programming, use hrPeri...
C    hrPeriodSec          5578.17       5578.17
C    hrPos                0.            0
C    hrShadowEntry        123.9306      1.239305657959e+02  
C    hrShadowExit         236.0694      2.360694342042e+02  
C    hrSubSolarMeanAnom   7.038290e-12  7.03829e-12          -180 to 180
C    hrSubSolarTrueAnom   7.042450e-12  7.04245e-12          -180 to 180
C    hrTime               0.            0                    Always in current user units. If programming, use hrTime...
C    hrTimeSec            0.            0
C    hrTimeShadowEntry    1919.86       1919.86
C    hrTimeShadowEntrySec 1919.86       1919.86
C    hrTimeShadowExit     3658.314      3.658313998490e+03  
C    hrTimeShadowExitSec  3658.314      3.658313998490e+03  
C    hrTrueAnom           0.            0
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

HEADER NODE DATA, MAIN
HEADER CONDUCTOR DATA, MAIN
            1,    X_NEG.1,    X_NEG.2,    1.5317
            2,    X_NEG.1,    X_NEG.6,    0.382925
            3,    X_NEG.2,    X_NEG.3,    1.5317
            4,    X_NEG.2,    X_NEG.7,    0.382925
            5,    X_NEG.3,    X_NEG.4,    1.5317
            6,    X_NEG.3,    X_NEG.8,    0.382925
            7,    X_NEG.4,    X_NEG.5,    1.5317
            8,    X_NEG.4,    X_NEG.9,    0.382925
            9,    X_NEG.5,    X_NEG.10,    0.382925
            10,    X_NEG.6,    X_NEG.7,    1.5317
            11,    X_NEG.6,    X_NEG.11,    0.382925
            12,    X_NEG.7,    X_NEG.8,    1.5317
            13,    X_NEG.7,    X_NEG.12,    0.382925
            14,    X_NEG.8,    X_NEG.9,    1.5317
            15,    X_NEG.8,    X_NEG.13,    0.382925
            16,    X_NEG.9,    X_NEG.10,    1.5317
            17,    X_NEG.9,    X_NEG.14,    0.382925
            18,    X_NEG.10,    X_NEG.15,    0.382925
            19,    X_NEG.11,    X_NEG.12,    1.5317
            20,    X_NEG.11,    X_NEG.16,    0.382925
            21,    X_NEG.12,    X_NEG.13,    1.5317
            22,    X_NEG.12,    X_NEG.17,    0.382925
            23,    X_NEG.13,    X_NEG.14,    1.5317
            24,    X_NEG.13,    X_NEG.18,    0.382925
            25,    X_NEG.14,    X_NEG.15,    1.5317
            26,    X_NEG.14,    X_NEG.19,    0.382925
            27,    X_NEG.15,    X_NEG.20,    0.382925
            28,    X_NEG.16,    X_NEG.17,    1.5317
            29,    X_NEG.16,    X_NEG.21,    0.382925
            30,    X_NEG.17,    X_NEG.18,    1.5317
            31,    X_NEG.17,    X_NEG.22,    0.382925
            32,    X_NEG.18,    X_NEG.19,    1.5317
            33,    X_NEG.18,    X_NEG.23,    0.382925
            34,    X_NEG.19,    X_NEG.20,    1.5317
            35,    X_NEG.19,    X_NEG.24,    0.382925
            36,    X_NEG.20,    X_NEG.25,    0.382925
            37,    X_NEG.21,    X_NEG.22,    1.5317
            38,    X_NEG.22,    X_NEG.23,    1.5317
            39,    X_NEG.23,    X_NEG.24,    1.5317
            40,    X_NEG.24,    X_NEG.25,    1.5317
            41,    X_POS.1,    X_POS.2,    1.5317
            42,    X_POS.1,    X_POS.6,    0.382925
            43,    X_POS.2,    X_POS.3,    1.5317
            44,    X_POS.2,    X_POS.7,    0.382925
            45,    X_POS.3,    X_POS.4,    1.5317
            46,    X_POS.3,    X_POS.8,    0.382925
            47,    X_POS.4,    X_POS.5,    1.5317
            48,    X_POS.4,    X_POS.9,    0.382925
            49,    X_POS.5,    X_POS.10,    0.382925
            50,    X_POS.6,    X_POS.7,    1.5317
            51,    X_POS.6,    X_POS.11,    0.382925
            52,    X_POS.7,    X_POS.8,    1.5317
            53,    X_POS.7,    X_POS.12,    0.382925
            54,    X_POS.8,    X_POS.9,    1.5317
            55,    X_POS.8,    X_POS.13,    0.382925
            56,    X_POS.9,    X_POS.10,    1.5317
            57,    X_POS.9,    X_POS.14,    0.382925
            58,    X_POS.10,    X_POS.15,    0.382925
            59,    X_POS.11,    X_POS.12,    1.5317
            60,    X_POS.11,    X_POS.16,    0.382925
            61,    X_POS.12,    X_POS.13,    1.5317
            62,    X_POS.12,    X_POS.17,    0.382925
            63,    X_POS.13,    X_POS.14,    1.5317
            64,    X_POS.13,    X_POS.18,    0.382925
            65,    X_POS.14,    X_POS.15,    1.5317
            66,    X_POS.14,    X_POS.19,    0.382925
            67,    X_POS.15,    X_POS.20,    0.382925
            68,    X_POS.16,    X_POS.17,    1.5317
            69,    X_POS.16,    X_POS.21,    0.382925
            70,    X_POS.17,    X_POS.18,    1.5317
            71,    X_POS.17,    X_POS.22,    0.382925
            72,    X_POS.18,    X_POS.19,    1.5317
            73,    X_POS.18,    X_POS.23,    0.382925
            74,    X_POS.19,    X_POS.20,    1.5317
            75,    X_POS.19,    X_POS.24,    0.382925
            76,    X_POS.20,    X_POS.25,    0.382925
            77,    X_POS.21,    X_POS.22,    1.5317
            78,    X_POS.22,    X_POS.23,    1.5317
            79,    X_POS.23,    X_POS.24,    1.5317
            80,    X_POS.24,    X_POS.25,    1.5317
            81,    Y_NEG.1,    Y_NEG.2,    0.382925
            82,    Y_NEG.1,    Y_NEG.6,    1.5317
            83,    Y_NEG.2,    Y_NEG.3,    0.382925
            84,    Y_NEG.2,    Y_NEG.7,    1.5317
            85,    Y_NEG.3,    Y_NEG.4,    0.382925
            86,    Y_NEG.3,    Y_NEG.8,    1.5317
            87,    Y_NEG.4,    Y_NEG.5,    0.382925
            88,    Y_NEG.4,    Y_NEG.9,    1.5317
            89,    Y_NEG.5,    Y_NEG.10,    1.5317
            90,    Y_NEG.6,    Y_NEG.7,    0.382925
            91,    Y_NEG.6,    Y_NEG.11,    1.5317
            92,    Y_NEG.7,    Y_NEG.8,    0.382925
            93,    Y_NEG.7,    Y_NEG.12,    1.5317
            94,    Y_NEG.8,    Y_NEG.9,    0.382925
            95,    Y_NEG.8,    Y_NEG.13,    1.5317
            96,    Y_NEG.9,    Y_NEG.10,    0.382925
            97,    Y_NEG.9,    Y_NEG.14,    1.5317
            98,    Y_NEG.10,    Y_NEG.15,    1.5317
            99,    Y_NEG.11,    Y_NEG.12,    0.382925
            100,    Y_NEG.11,    Y_NEG.16,    1.5317
            101,    Y_NEG.12,    Y_NEG.13,    0.382925
            102,    Y_NEG.12,    Y_NEG.17,    1.5317
            103,    Y_NEG.13,    Y_NEG.14,    0.382925
            104,    Y_NEG.13,    Y_NEG.18,    1.5317
            105,    Y_NEG.14,    Y_NEG.15,    0.382925
            106,    Y_NEG.14,    Y_NEG.19,    1.5317
            107,    Y_NEG.15,    Y_NEG.20,    1.5317
            108,    Y_NEG.16,    Y_NEG.17,    0.382925
            109,    Y_NEG.16,    Y_NEG.21,    1.5317
            110,    Y_NEG.17,    Y_NEG.18,    0.382925
            111,    Y_NEG.17,    Y_NEG.22,    1.5317
            112,    Y_NEG.18,    Y_NEG.19,    0.382925
            113,    Y_NEG.18,    Y_NEG.23,    1.5317
            114,    Y_NEG.19,    Y_NEG.20,    0.382925
            115,    Y_NEG.19,    Y_NEG.24,    1.5317
            116,    Y_NEG.20,    Y_NEG.25,    1.5317
            117,    Y_NEG.21,    Y_NEG.22,    0.382925
            118,    Y_NEG.22,    Y_NEG.23,    0.382925
            119,    Y_NEG.23,    Y_NEG.24,    0.382925
            120,    Y_NEG.24,    Y_NEG.25,    0.382925
            121,    Y_POS.1,    Y_POS.2,    1.5317
            122,    Y_POS.1,    Y_POS.6,    0.382925
            123,    Y_POS.2,    Y_POS.3,    1.5317
            124,    Y_POS.2,    Y_POS.7,    0.382925
            125,    Y_POS.3,    Y_POS.4,    1.5317
            126,    Y_POS.3,    Y_POS.8,    0.382925
            127,    Y_POS.4,    Y_POS.5,    1.5317
            128,    Y_POS.4,    Y_POS.9,    0.382925
            129,    Y_POS.5,    Y_POS.10,    0.382925
            130,    Y_POS.6,    Y_POS.7,    1.5317
            131,    Y_POS.6,    Y_POS.11,    0.382925
            132,    Y_POS.7,    Y_POS.8,    1.5317
            133,    Y_POS.7,    Y_POS.12,    0.382925
            134,    Y_POS.8,    Y_POS.9,    1.5317
            135,    Y_POS.8,    Y_POS.13,    0.382925
            136,    Y_POS.9,    Y_POS.10,    1.5317
            137,    Y_POS.9,    Y_POS.14,    0.382925
            138,    Y_POS.10,    Y_POS.15,    0.382925
            139,    Y_POS.11,    Y_POS.12,    1.5317
            140,    Y_POS.11,    Y_POS.16,    0.382925
            141,    Y_POS.12,    Y_POS.13,    1.5317
            142,    Y_POS.12,    Y_POS.17,    0.382925
            143,    Y_POS.13,    Y_POS.14,    1.5317
            144,    Y_POS.13,    Y_POS.18,    0.382925
            145,    Y_POS.14,    Y_POS.15,    1.5317
            146,    Y_POS.14,    Y_POS.19,    0.382925
            147,    Y_POS.15,    Y_POS.20,    0.382925
            148,    Y_POS.16,    Y_POS.17,    1.5317
            149,    Y_POS.16,    Y_POS.21,    0.382925
            150,    Y_POS.17,    Y_POS.18,    1.5317
            151,    Y_POS.17,    Y_POS.22,    0.382925
            152,    Y_POS.18,    Y_POS.19,    1.5317
            153,    Y_POS.18,    Y_POS.23,    0.382925
            154,    Y_POS.19,    Y_POS.20,    1.5317
            155,    Y_POS.19,    Y_POS.24,    0.382925
            156,    Y_POS.20,    Y_POS.25,    0.382925
            157,    Y_POS.21,    Y_POS.22,    1.5317
            158,    Y_POS.22,    Y_POS.23,    1.5317
            159,    Y_POS.23,    Y_POS.24,    1.5317
            160,    Y_POS.24,    Y_POS.25,    1.5317
            161,    Z_NEG.1,    Z_NEG.2,    0.76585
            162,    Z_NEG.1,    Z_NEG.6,    0.76585
            163,    Z_NEG.2,    Z_NEG.3,    0.76585
            164,    Z_NEG.2,    Z_NEG.7,    0.76585
            165,    Z_NEG.3,    Z_NEG.4,    0.76585
            166,    Z_NEG.3,    Z_NEG.8,    0.76585
            167,    Z_NEG.4,    Z_NEG.5,    0.76585
            168,    Z_NEG.4,    Z_NEG.9,    0.76585
            169,    Z_NEG.5,    Z_NEG.10,    0.76585
            170,    Z_NEG.6,    Z_NEG.7,    0.76585
            171,    Z_NEG.6,    Z_NEG.11,    0.76585
            172,    Z_NEG.7,    Z_NEG.8,    0.76585
            173,    Z_NEG.7,    Z_NEG.12,    0.76585
            174,    Z_NEG.8,    Z_NEG.9,    0.76585
            175,    Z_NEG.8,    Z_NEG.13,    0.76585
            176,    Z_NEG.9,    Z_NEG.10,    0.76585
            177,    Z_NEG.9,    Z_NEG.14,    0.76585
            178,    Z_NEG.10,    Z_NEG.15,    0.76585
            179,    Z_NEG.11,    Z_NEG.12,    0.76585
            180,    Z_NEG.11,    Z_NEG.16,    0.76585
            181,    Z_NEG.12,    Z_NEG.13,    0.76585
            182,    Z_NEG.12,    Z_NEG.17,    0.76585
            183,    Z_NEG.13,    Z_NEG.14,    0.76585
            184,    Z_NEG.13,    Z_NEG.18,    0.76585
            185,    Z_NEG.14,    Z_NEG.15,    0.76585
            186,    Z_NEG.14,    Z_NEG.19,    0.76585
            187,    Z_NEG.15,    Z_NEG.20,    0.76585
            188,    Z_NEG.16,    Z_NEG.17,    0.76585
            189,    Z_NEG.16,    Z_NEG.21,    0.76585
            190,    Z_NEG.17,    Z_NEG.18,    0.76585
            191,    Z_NEG.17,    Z_NEG.22,    0.76585
            192,    Z_NEG.18,    Z_NEG.19,    0.76585
            193,    Z_NEG.18,    Z_NEG.23,    0.76585
            194,    Z_NEG.19,    Z_NEG.20,    0.76585
            195,    Z_NEG.19,    Z_NEG.24,    0.76585
            196,    Z_NEG.20,    Z_NEG.25,    0.76585
            197,    Z_NEG.21,    Z_NEG.22,    0.76585
            198,    Z_NEG.22,    Z_NEG.23,    0.76585
            199,    Z_NEG.23,    Z_NEG.24,    0.76585
            200,    Z_NEG.24,    Z_NEG.25,    0.76585
            201,    Z_POS.1,    Z_POS.2,    0.76585
            202,    Z_POS.1,    Z_POS.6,    0.76585
            203,    Z_POS.2,    Z_POS.3,    0.76585
            204,    Z_POS.2,    Z_POS.7,    0.76585
            205,    Z_POS.3,    Z_POS.4,    0.76585
            206,    Z_POS.3,    Z_POS.8,    0.76585
            207,    Z_POS.4,    Z_POS.5,    0.76585
            208,    Z_POS.4,    Z_POS.9,    0.76585
            209,    Z_POS.5,    Z_POS.10,    0.76585
            210,    Z_POS.6,    Z_POS.7,    0.76585
            211,    Z_POS.6,    Z_POS.11,    0.76585
            212,    Z_POS.7,    Z_POS.8,    0.76585
            213,    Z_POS.7,    Z_POS.12,    0.76585
            214,    Z_POS.8,    Z_POS.9,    0.76585
            215,    Z_POS.8,    Z_POS.13,    0.76585
            216,    Z_POS.9,    Z_POS.10,    0.76585
            217,    Z_POS.9,    Z_POS.14,    0.76585
            218,    Z_POS.10,    Z_POS.15,    0.76585
            219,    Z_POS.11,    Z_POS.12,    0.76585
            220,    Z_POS.11,    Z_POS.16,    0.76585
            221,    Z_POS.12,    Z_POS.13,    0.76585
            222,    Z_POS.12,    Z_POS.17,    0.76585
            223,    Z_POS.13,    Z_POS.14,    0.76585
            224,    Z_POS.13,    Z_POS.18,    0.76585
            225,    Z_POS.14,    Z_POS.15,    0.76585
            226,    Z_POS.14,    Z_POS.19,    0.76585
            227,    Z_POS.15,    Z_POS.20,    0.76585
            228,    Z_POS.16,    Z_POS.17,    0.76585
            229,    Z_POS.16,    Z_POS.21,    0.76585
            230,    Z_POS.17,    Z_POS.18,    0.76585
            231,    Z_POS.17,    Z_POS.22,    0.76585
            232,    Z_POS.18,    Z_POS.19,    0.76585
            233,    Z_POS.18,    Z_POS.23,    0.76585
            234,    Z_POS.19,    Z_POS.20,    0.76585
            235,    Z_POS.19,    Z_POS.24,    0.76585
            236,    Z_POS.20,    Z_POS.25,    0.76585
            237,    Z_POS.21,    Z_POS.22,    0.76585
            238,    Z_POS.22,    Z_POS.23,    0.76585
            239,    Z_POS.23,    Z_POS.24,    0.76585
            240,    Z_POS.24,    Z_POS.25,    0.76585
HEADER NODE DATA, SPACE
            -1,    2.73,    -1.0
HEADER NODE DATA, X_NEG
            1,    293.15,    9.60836
            2,    293.15,    9.60836
            3,    293.15,    9.60836
            4,    293.15,    9.60836
            5,    293.15,    9.60836
            6,    293.15,    9.60836
            7,    293.15,    9.60836
            8,    293.15,    9.60836
            9,    293.15,    9.60836
            10,    293.15,    9.60836
            11,    293.15,    9.60836
            12,    293.15,    9.60836
            13,    293.15,    9.60836
            14,    293.15,    9.60836
            15,    293.15,    9.60836
            16,    293.15,    9.60836
            17,    293.15,    9.60836
            18,    293.15,    9.60836
            19,    293.15,    9.60836
            20,    293.15,    9.60836
            21,    293.15,    9.60836
            22,    293.15,    9.60836
            23,    293.15,    9.60836
            24,    293.15,    9.60836
            25,    293.15,    9.60836
HEADER NODE DATA, X_POS
            1,    293.15,    9.60836
            2,    293.15,    9.60836
            3,    293.15,    9.60836
            4,    293.15,    9.60836
            5,    293.15,    9.60836
            6,    293.15,    9.60836
            7,    293.15,    9.60836
            8,    293.15,    9.60836
            9,    293.15,    9.60836
            10,    293.15,    9.60836
            11,    293.15,    9.60836
            12,    293.15,    9.60836
            13,    293.15,    9.60836
            14,    293.15,    9.60836
            15,    293.15,    9.60836
            16,    293.15,    9.60836
            17,    293.15,    9.60836
            18,    293.15,    9.60836
            19,    293.15,    9.60836
            20,    293.15,    9.60836
            21,    293.15,    9.60836
            22,    293.15,    9.60836
            23,    293.15,    9.60836
            24,    293.15,    9.60836
            25,    293.15,    9.60836
HEADER NODE DATA, Y_NEG
            1,    293.15,    9.60836
            2,    293.15,    9.60836
            3,    293.15,    9.60836
            4,    293.15,    9.60836
            5,    293.15,    9.60836
            6,    293.15,    9.60836
            7,    293.15,    9.60836
            8,    293.15,    9.60836
            9,    293.15,    9.60836
            10,    293.15,    9.60836
            11,    293.15,    9.60836
            12,    293.15,    9.60836
            13,    293.15,    9.60836
            14,    293.15,    9.60836
            15,    293.15,    9.60836
            16,    293.15,    9.60836
            17,    293.15,    9.60836
            18,    293.15,    9.60836
            19,    293.15,    9.60836
            20,    293.15,    9.60836
            21,    293.15,    9.60836
            22,    293.15,    9.60836
            23,    293.15,    9.60836
            24,    293.15,    9.60836
            25,    293.15,    9.60836
HEADER NODE DATA, Y_POS
            1,    293.15,    9.60836
            2,    293.15,    9.60836
            3,    293.15,    9.60836
            4,    293.15,    9.60836
            5,    293.15,    9.60836
            6,    293.15,    9.60836
            7,    293.15,    9.60836
            8,    293.15,    9.60836
            9,    293.15,    9.60836
            10,    293.15,    9.60836
            11,    293.15,    9.60836
            12,    293.15,    9.60836
            13,    293.15,    9.60836
            14,    293.15,    9.60836
            15,    293.15,    9.60836
            16,    293.15,    9.60836
            17,    293.15,    9.60836
            18,    293.15,    9.60836
            19,    293.15,    9.60836
            20,    293.15,    9.60836
            21,    293.15,    9.60836
            22,    293.15,    9.60836
            23,    293.15,    9.60836
            24,    293.15,    9.60836
            25,    293.15,    9.60836
HEADER NODE DATA, Z_NEG
            1,    293.15,    4.80418
            2,    293.15,    4.80418
            3,    293.15,    4.80418
            4,    293.15,    4.80418
            5,    293.15,    4.80418
            6,    293.15,    4.80418
            7,    293.15,    4.80418
            8,    293.15,    4.80418
            9,    293.15,    4.80418
            10,    293.15,    4.80418
            11,    293.15,    4.80418
            12,    293.15,    4.80418
            13,    293.15,    4.80418
            14,    293.15,    4.80418
            15,    293.15,    4.80418
            16,    293.15,    4.80418
            17,    293.15,    4.80418
            18,    293.15,    4.80418
            19,    293.15,    4.80418
            20,    293.15,    4.80418
            21,    293.15,    4.80418
            22,    293.15,    4.80418
            23,    293.15,    4.80418
            24,    293.15,    4.80418
            25,    293.15,    4.80418
HEADER NODE DATA, Z_POS
            1,    293.15,    4.80418
            2,    293.15,    4.80418
            3,    293.15,    4.80418
            4,    293.15,    4.80418
            5,    293.15,    4.80418
            6,    293.15,    4.80418
            7,    293.15,    4.80418
            8,    293.15,    4.80418
            9,    293.15,    4.80418
            10,    293.15,    4.80418
            11,    293.15,    4.80418
            12,    293.15,    4.80418
            13,    293.15,    4.80418
            14,    293.15,    4.80418
            15,    293.15,    4.80418
            16,    293.15,    4.80418
            17,    293.15,    4.80418
            18,    293.15,    4.80418
            19,    293.15,    4.80418
            20,    293.15,    4.80418
            21,    293.15,    4.80418
            22,    293.15,    4.80418
            23,    293.15,    4.80418
            24,    293.15,    4.80418
            25,    293.15,    4.80418
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
