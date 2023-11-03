HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.3 Patch 13
C    Generated on Fri Oct 20 15:44:51 2023
C    From file: CubeSat.dwg
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
C    DWG name:      CubeSat.dwg
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
HEADER NODE DATA, COMPONENT_1
HEADER VARIABLES 0, COMPONENT_1
C Heat Load-MOTOR_HEAT[COMPONENT_1]::384
      MOTOR.Q1 = MOTOR.Q1 + 0.2
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
            1,    MOTOR.1,    MRW.1,    30.
C Contact - Edge Contactor[MAIN][0]::386
            2,    XNEG.1,    YPOS.5,    0.019
C Contact - Edge Contactor[MAIN][0]::388
            3,    XNEG.1,    ZNEG.1,    0.03
            4,    XNEG.1,    ZNEG.2,    0.015
            5,    XNEG.1,    ZNEG.3,    0.0075
            6,    XNEG.2,    ZNEG.6,    0.015
            7,    XNEG.3,    ZNEG.11,    0.015
            8,    XNEG.4,    ZNEG.16,    0.015
C Contact - Edge Contactor[MAIN][0]::387
            9,    XNEG.5,    YNEG.1,    0.021
C Contact - Edge Contactor[MAIN][0]::388
            10,    XNEG.5,    ZNEG.21,    0.03
            11,    XNEG.5,    ZNEG.22,    0.015
            12,    XNEG.5,    ZNEG.23,    0.0075
C Contact - Edge Contactor[MAIN][0]::386
            13,    XNEG.6,    YPOS.10,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            14,    XNEG.10,    YNEG.6,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            15,    XNEG.11,    YPOS.15,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            16,    XNEG.15,    YNEG.11,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            17,    XNEG.16,    YPOS.20,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            18,    XNEG.20,    YNEG.16,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            19,    XNEG.21,    YPOS.25,    0.02
C Contact - Edge Contactor[MAIN][0]::389
            20,    XNEG.21,    ZPOS.21,    0.03
            21,    XNEG.21,    ZPOS.22,    0.015
            22,    XNEG.21,    ZPOS.23,    0.0075
            23,    XNEG.22,    ZPOS.16,    0.015
            24,    XNEG.23,    ZPOS.11,    0.015
            25,    XNEG.24,    ZPOS.6,    0.015
C Contact - Edge Contactor[MAIN][0]::387
            26,    XNEG.25,    YNEG.21,    0.018
C Contact - Edge Contactor[MAIN][0]::389
            27,    XNEG.25,    ZPOS.1,    0.03
            28,    XNEG.25,    ZPOS.2,    0.015
            29,    XNEG.25,    ZPOS.3,    0.0075
C Contact - Edge Contactor[MAIN][0]::387
            30,    XPOS.1,    YNEG.5,    0.02
C Contact - Edge Contactor[MAIN][0]::388
            31,    XPOS.1,    ZNEG.23,    0.0075
            32,    XPOS.1,    ZNEG.24,    0.015
            33,    XPOS.1,    ZNEG.25,    0.03
            34,    XPOS.2,    ZNEG.20,    0.015
            35,    XPOS.3,    ZNEG.15,    0.015
            36,    XPOS.4,    ZNEG.10,    0.015
C Contact - Edge Contactor[MAIN][0]::386
            37,    XPOS.5,    YPOS.1,    0.018
C Contact - Edge Contactor[MAIN][0]::388
            38,    XPOS.5,    ZNEG.3,    0.0075
            39,    XPOS.5,    ZNEG.4,    0.015
            40,    XPOS.5,    ZNEG.5,    0.03
C Contact - Edge Contactor[MAIN][0]::387
            41,    XPOS.6,    YNEG.10,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            42,    XPOS.10,    YPOS.6,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            43,    XPOS.11,    YNEG.15,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            44,    XPOS.15,    YPOS.11,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            45,    XPOS.16,    YNEG.20,    0.02
C Contact - Edge Contactor[MAIN][0]::386
            46,    XPOS.20,    YPOS.16,    0.02
C Contact - Edge Contactor[MAIN][0]::387
            47,    XPOS.21,    YNEG.25,    0.021
C Contact - Edge Contactor[MAIN][0]::389
            48,    XPOS.21,    ZPOS.3,    0.0075
            49,    XPOS.21,    ZPOS.4,    0.015
            50,    XPOS.21,    ZPOS.5,    0.03
            51,    XPOS.22,    ZPOS.10,    0.015
            52,    XPOS.23,    ZPOS.15,    0.015
            53,    XPOS.24,    ZPOS.20,    0.015
C Contact - Edge Contactor[MAIN][0]::386
            54,    XPOS.25,    YPOS.21,    0.021
C Contact - Edge Contactor[MAIN][0]::389
            55,    XPOS.25,    ZPOS.23,    0.0075
            56,    XPOS.25,    ZPOS.24,    0.015
            57,    XPOS.25,    ZPOS.25,    0.03
C Contact - Edge Contactor[MAIN][0]::387
            58,    YNEG.1,    ZNEG.21,    0.009
            59,    YNEG.2,    ZNEG.22,    0.01
            60,    YNEG.3,    ZNEG.23,    0.01
            61,    YNEG.4,    ZNEG.24,    0.01
            62,    YNEG.5,    ZNEG.25,    0.01
            63,    YNEG.21,    ZPOS.1,    0.012
            64,    YNEG.22,    ZPOS.2,    0.01
            65,    YNEG.23,    ZPOS.3,    0.01
            66,    YNEG.24,    ZPOS.4,    0.01
            67,    YNEG.25,    ZPOS.5,    0.009
C Contact - Edge Contactor[MAIN][0]::386
            68,    YPOS.1,    ZNEG.5,    0.012
            69,    YPOS.2,    ZNEG.4,    0.01
            70,    YPOS.3,    ZNEG.3,    0.01
            71,    YPOS.4,    ZNEG.2,    0.01
            72,    YPOS.5,    ZNEG.1,    0.011
            73,    YPOS.21,    ZPOS.25,    0.009
            74,    YPOS.22,    ZPOS.24,    0.01
            75,    YPOS.23,    ZPOS.23,    0.01
            76,    YPOS.24,    ZPOS.22,    0.01
            77,    YPOS.25,    ZPOS.21,    0.01
HEADER NODE DATA, MOTOR
            1,    20.,    43.23762
HEADER NODE DATA, MRW
            1,    20.,    321.7725
HEADER NODE DATA, SPACE
            -1,    -270.42,    -1.0
HEADER NODE DATA, STRUCTURE
HEADER CONDUCTOR DATA, STRUCTURE
            1,    XNEG.1,    XNEG.2,    1.5317
            2,    XNEG.1,    XNEG.6,    0.382925
            3,    XNEG.2,    XNEG.3,    1.5317
            4,    XNEG.2,    XNEG.7,    0.382925
            5,    XNEG.3,    XNEG.4,    1.5317
            6,    XNEG.3,    XNEG.8,    0.382925
            7,    XNEG.4,    XNEG.5,    1.5317
            8,    XNEG.4,    XNEG.9,    0.382925
            9,    XNEG.5,    XNEG.10,    0.382925
            10,    XNEG.6,    XNEG.7,    1.5317
            11,    XNEG.6,    XNEG.11,    0.382925
            12,    XNEG.7,    XNEG.8,    1.5317
            13,    XNEG.7,    XNEG.12,    0.382925
            14,    XNEG.8,    XNEG.9,    1.5317
            15,    XNEG.8,    XNEG.13,    0.382925
            16,    XNEG.9,    XNEG.10,    1.5317
            17,    XNEG.9,    XNEG.14,    0.382925
            18,    XNEG.10,    XNEG.15,    0.382925
            19,    XNEG.11,    XNEG.12,    1.5317
            20,    XNEG.11,    XNEG.16,    0.382925
            21,    XNEG.12,    XNEG.13,    1.5317
            22,    XNEG.12,    XNEG.17,    0.382925
            23,    XNEG.13,    XNEG.14,    1.5317
            24,    XNEG.13,    XNEG.18,    0.382925
            25,    XNEG.14,    XNEG.15,    1.5317
            26,    XNEG.14,    XNEG.19,    0.382925
            27,    XNEG.15,    XNEG.20,    0.382925
            28,    XNEG.16,    XNEG.17,    1.5317
            29,    XNEG.16,    XNEG.21,    0.382925
            30,    XNEG.17,    XNEG.18,    1.5317
            31,    XNEG.17,    XNEG.22,    0.382925
            32,    XNEG.18,    XNEG.19,    1.5317
            33,    XNEG.18,    XNEG.23,    0.382925
            34,    XNEG.19,    XNEG.20,    1.5317
            35,    XNEG.19,    XNEG.24,    0.382925
            36,    XNEG.20,    XNEG.25,    0.382925
            37,    XNEG.21,    XNEG.22,    1.5317
            38,    XNEG.22,    XNEG.23,    1.5317
            39,    XNEG.23,    XNEG.24,    1.5317
            40,    XNEG.24,    XNEG.25,    1.5317
            41,    XPOS.1,    XPOS.2,    1.5317
            42,    XPOS.1,    XPOS.6,    0.382925
            43,    XPOS.2,    XPOS.3,    1.5317
            44,    XPOS.2,    XPOS.7,    0.382925
            45,    XPOS.3,    XPOS.4,    1.5317
            46,    XPOS.3,    XPOS.8,    0.382925
            47,    XPOS.4,    XPOS.5,    1.5317
            48,    XPOS.4,    XPOS.9,    0.382925
            49,    XPOS.5,    XPOS.10,    0.382925
            50,    XPOS.6,    XPOS.7,    1.5317
            51,    XPOS.6,    XPOS.11,    0.382925
            52,    XPOS.7,    XPOS.8,    1.5317
            53,    XPOS.7,    XPOS.12,    0.382925
            54,    XPOS.8,    XPOS.9,    1.5317
            55,    XPOS.8,    XPOS.13,    0.382925
            56,    XPOS.9,    XPOS.10,    1.5317
            57,    XPOS.9,    XPOS.14,    0.382925
            58,    XPOS.10,    XPOS.15,    0.382925
            59,    XPOS.11,    XPOS.12,    1.5317
            60,    XPOS.11,    XPOS.16,    0.382925
            61,    XPOS.12,    XPOS.13,    1.5317
            62,    XPOS.12,    XPOS.17,    0.382925
            63,    XPOS.13,    XPOS.14,    1.5317
            64,    XPOS.13,    XPOS.18,    0.382925
            65,    XPOS.14,    XPOS.15,    1.5317
            66,    XPOS.14,    XPOS.19,    0.382925
            67,    XPOS.15,    XPOS.20,    0.382925
            68,    XPOS.16,    XPOS.17,    1.5317
            69,    XPOS.16,    XPOS.21,    0.382925
            70,    XPOS.17,    XPOS.18,    1.5317
            71,    XPOS.17,    XPOS.22,    0.382925
            72,    XPOS.18,    XPOS.19,    1.5317
            73,    XPOS.18,    XPOS.23,    0.382925
            74,    XPOS.19,    XPOS.20,    1.5317
            75,    XPOS.19,    XPOS.24,    0.382925
            76,    XPOS.20,    XPOS.25,    0.382925
            77,    XPOS.21,    XPOS.22,    1.5317
            78,    XPOS.22,    XPOS.23,    1.5317
            79,    XPOS.23,    XPOS.24,    1.5317
            80,    XPOS.24,    XPOS.25,    1.5317
            81,    YNEG.1,    YNEG.2,    1.5317
            82,    YNEG.1,    YNEG.6,    0.382925
            83,    YNEG.2,    YNEG.3,    1.5317
            84,    YNEG.2,    YNEG.7,    0.382925
            85,    YNEG.3,    YNEG.4,    1.5317
            86,    YNEG.3,    YNEG.8,    0.382925
            87,    YNEG.4,    YNEG.5,    1.5317
            88,    YNEG.4,    YNEG.9,    0.382925
            89,    YNEG.5,    YNEG.10,    0.382925
            90,    YNEG.6,    YNEG.7,    1.5317
            91,    YNEG.6,    YNEG.11,    0.382925
            92,    YNEG.7,    YNEG.8,    1.5317
            93,    YNEG.7,    YNEG.12,    0.382925
            94,    YNEG.8,    YNEG.9,    1.5317
            95,    YNEG.8,    YNEG.13,    0.382925
            96,    YNEG.9,    YNEG.10,    1.5317
            97,    YNEG.9,    YNEG.14,    0.382925
            98,    YNEG.10,    YNEG.15,    0.382925
            99,    YNEG.11,    YNEG.12,    1.5317
            100,    YNEG.11,    YNEG.16,    0.382925
            101,    YNEG.12,    YNEG.13,    1.5317
            102,    YNEG.12,    YNEG.17,    0.382925
            103,    YNEG.13,    YNEG.14,    1.5317
            104,    YNEG.13,    YNEG.18,    0.382925
            105,    YNEG.14,    YNEG.15,    1.5317
            106,    YNEG.14,    YNEG.19,    0.382925
            107,    YNEG.15,    YNEG.20,    0.382925
            108,    YNEG.16,    YNEG.17,    1.5317
            109,    YNEG.16,    YNEG.21,    0.382925
            110,    YNEG.17,    YNEG.18,    1.5317
            111,    YNEG.17,    YNEG.22,    0.382925
            112,    YNEG.18,    YNEG.19,    1.5317
            113,    YNEG.18,    YNEG.23,    0.382925
            114,    YNEG.19,    YNEG.20,    1.5317
            115,    YNEG.19,    YNEG.24,    0.382925
            116,    YNEG.20,    YNEG.25,    0.382925
            117,    YNEG.21,    YNEG.22,    1.5317
            118,    YNEG.22,    YNEG.23,    1.5317
            119,    YNEG.23,    YNEG.24,    1.5317
            120,    YNEG.24,    YNEG.25,    1.5317
            121,    YPOS.1,    YPOS.2,    1.5317
            122,    YPOS.1,    YPOS.6,    0.382925
            123,    YPOS.2,    YPOS.3,    1.5317
            124,    YPOS.2,    YPOS.7,    0.382925
            125,    YPOS.3,    YPOS.4,    1.5317
            126,    YPOS.3,    YPOS.8,    0.382925
            127,    YPOS.4,    YPOS.5,    1.5317
            128,    YPOS.4,    YPOS.9,    0.382925
            129,    YPOS.5,    YPOS.10,    0.382925
            130,    YPOS.6,    YPOS.7,    1.5317
            131,    YPOS.6,    YPOS.11,    0.382925
            132,    YPOS.7,    YPOS.8,    1.5317
            133,    YPOS.7,    YPOS.12,    0.382925
            134,    YPOS.8,    YPOS.9,    1.5317
            135,    YPOS.8,    YPOS.13,    0.382925
            136,    YPOS.9,    YPOS.10,    1.5317
            137,    YPOS.9,    YPOS.14,    0.382925
            138,    YPOS.10,    YPOS.15,    0.382925
            139,    YPOS.11,    YPOS.12,    1.5317
            140,    YPOS.11,    YPOS.16,    0.382925
            141,    YPOS.12,    YPOS.13,    1.5317
            142,    YPOS.12,    YPOS.17,    0.382925
            143,    YPOS.13,    YPOS.14,    1.5317
            144,    YPOS.13,    YPOS.18,    0.382925
            145,    YPOS.14,    YPOS.15,    1.5317
            146,    YPOS.14,    YPOS.19,    0.382925
            147,    YPOS.15,    YPOS.20,    0.382925
            148,    YPOS.16,    YPOS.17,    1.5317
            149,    YPOS.16,    YPOS.21,    0.382925
            150,    YPOS.17,    YPOS.18,    1.5317
            151,    YPOS.17,    YPOS.22,    0.382925
            152,    YPOS.18,    YPOS.19,    1.5317
            153,    YPOS.18,    YPOS.23,    0.382925
            154,    YPOS.19,    YPOS.20,    1.5317
            155,    YPOS.19,    YPOS.24,    0.382925
            156,    YPOS.20,    YPOS.25,    0.382925
            157,    YPOS.21,    YPOS.22,    1.5317
            158,    YPOS.22,    YPOS.23,    1.5317
            159,    YPOS.23,    YPOS.24,    1.5317
            160,    YPOS.24,    YPOS.25,    1.5317
            161,    ZNEG.1,    ZNEG.2,    0.76585
            162,    ZNEG.1,    ZNEG.6,    0.76585
            163,    ZNEG.2,    ZNEG.3,    0.76585
            164,    ZNEG.2,    ZNEG.7,    0.76585
            165,    ZNEG.3,    ZNEG.4,    0.76585
            166,    ZNEG.3,    ZNEG.8,    0.76585
            167,    ZNEG.4,    ZNEG.5,    0.76585
            168,    ZNEG.4,    ZNEG.9,    0.76585
            169,    ZNEG.5,    ZNEG.10,    0.76585
            170,    ZNEG.6,    ZNEG.7,    0.76585
            171,    ZNEG.6,    ZNEG.11,    0.76585
            172,    ZNEG.7,    ZNEG.8,    0.76585
            173,    ZNEG.7,    ZNEG.12,    0.76585
            174,    ZNEG.8,    ZNEG.9,    0.76585
            175,    ZNEG.8,    ZNEG.13,    0.76585
            176,    ZNEG.9,    ZNEG.10,    0.76585
            177,    ZNEG.9,    ZNEG.14,    0.76585
            178,    ZNEG.10,    ZNEG.15,    0.76585
            179,    ZNEG.11,    ZNEG.12,    0.76585
            180,    ZNEG.11,    ZNEG.16,    0.76585
            181,    ZNEG.12,    ZNEG.13,    0.76585
            182,    ZNEG.12,    ZNEG.17,    0.76585
            183,    ZNEG.13,    ZNEG.14,    0.76585
            184,    ZNEG.13,    ZNEG.18,    0.76585
            185,    ZNEG.14,    ZNEG.15,    0.76585
            186,    ZNEG.14,    ZNEG.19,    0.76585
            187,    ZNEG.15,    ZNEG.20,    0.76585
            188,    ZNEG.16,    ZNEG.17,    0.76585
            189,    ZNEG.16,    ZNEG.21,    0.76585
            190,    ZNEG.17,    ZNEG.18,    0.76585
            191,    ZNEG.17,    ZNEG.22,    0.76585
            192,    ZNEG.18,    ZNEG.19,    0.76585
            193,    ZNEG.18,    ZNEG.23,    0.76585
            194,    ZNEG.19,    ZNEG.20,    0.76585
            195,    ZNEG.19,    ZNEG.24,    0.76585
            196,    ZNEG.20,    ZNEG.25,    0.76585
            197,    ZNEG.21,    ZNEG.22,    0.76585
            198,    ZNEG.22,    ZNEG.23,    0.76585
            199,    ZNEG.23,    ZNEG.24,    0.76585
            200,    ZNEG.24,    ZNEG.25,    0.76585
            201,    ZPOS.1,    ZPOS.2,    0.76585
            202,    ZPOS.1,    ZPOS.6,    0.76585
            203,    ZPOS.2,    ZPOS.3,    0.76585
            204,    ZPOS.2,    ZPOS.7,    0.76585
            205,    ZPOS.3,    ZPOS.4,    0.76585
            206,    ZPOS.3,    ZPOS.8,    0.76585
            207,    ZPOS.4,    ZPOS.5,    0.76585
            208,    ZPOS.4,    ZPOS.9,    0.76585
            209,    ZPOS.5,    ZPOS.10,    0.76585
            210,    ZPOS.6,    ZPOS.7,    0.76585
            211,    ZPOS.6,    ZPOS.11,    0.76585
            212,    ZPOS.7,    ZPOS.8,    0.76585
            213,    ZPOS.7,    ZPOS.12,    0.76585
            214,    ZPOS.8,    ZPOS.9,    0.76585
            215,    ZPOS.8,    ZPOS.13,    0.76585
            216,    ZPOS.9,    ZPOS.10,    0.76585
            217,    ZPOS.9,    ZPOS.14,    0.76585
            218,    ZPOS.10,    ZPOS.15,    0.76585
            219,    ZPOS.11,    ZPOS.12,    0.76585
            220,    ZPOS.11,    ZPOS.16,    0.76585
            221,    ZPOS.12,    ZPOS.13,    0.76585
            222,    ZPOS.12,    ZPOS.17,    0.76585
            223,    ZPOS.13,    ZPOS.14,    0.76585
            224,    ZPOS.13,    ZPOS.18,    0.76585
            225,    ZPOS.14,    ZPOS.15,    0.76585
            226,    ZPOS.14,    ZPOS.19,    0.76585
            227,    ZPOS.15,    ZPOS.20,    0.76585
            228,    ZPOS.16,    ZPOS.17,    0.76585
            229,    ZPOS.16,    ZPOS.21,    0.76585
            230,    ZPOS.17,    ZPOS.18,    0.76585
            231,    ZPOS.17,    ZPOS.22,    0.76585
            232,    ZPOS.18,    ZPOS.19,    0.76585
            233,    ZPOS.18,    ZPOS.23,    0.76585
            234,    ZPOS.19,    ZPOS.20,    0.76585
            235,    ZPOS.19,    ZPOS.24,    0.76585
            236,    ZPOS.20,    ZPOS.25,    0.76585
            237,    ZPOS.21,    ZPOS.22,    0.76585
            238,    ZPOS.22,    ZPOS.23,    0.76585
            239,    ZPOS.23,    ZPOS.24,    0.76585
            240,    ZPOS.24,    ZPOS.25,    0.76585
HEADER NODE DATA, XNEG
            1,    20.,    9.60836
            2,    20.,    9.60836
            3,    20.,    9.60836
            4,    20.,    9.60836
            5,    20.,    9.60836
            6,    20.,    9.60836
            7,    20.,    9.60836
            8,    20.,    9.60836
            9,    20.,    9.60836
            10,    20.,    9.60836
            11,    20.,    9.60836
            12,    20.,    9.60836
            13,    20.,    9.60836
            14,    20.,    9.60836
            15,    20.,    9.60836
            16,    20.,    9.60836
            17,    20.,    9.60836
            18,    20.,    9.60836
            19,    20.,    9.60836
            20,    20.,    9.60836
            21,    20.,    9.60836
            22,    20.,    9.60836
            23,    20.,    9.60836
            24,    20.,    9.60836
            25,    20.,    9.60836
HEADER NODE DATA, XPOS
            1,    20.,    9.60836
            2,    20.,    9.60836
            3,    20.,    9.60836
            4,    20.,    9.60836
            5,    20.,    9.60836
            6,    20.,    9.60836
            7,    20.,    9.60836
            8,    20.,    9.60836
            9,    20.,    9.60836
            10,    20.,    9.60836
            11,    20.,    9.60836
            12,    20.,    9.60836
            13,    20.,    9.60836
            14,    20.,    9.60836
            15,    20.,    9.60836
            16,    20.,    9.60836
            17,    20.,    9.60836
            18,    20.,    9.60836
            19,    20.,    9.60836
            20,    20.,    9.60836
            21,    20.,    9.60836
            22,    20.,    9.60836
            23,    20.,    9.60836
            24,    20.,    9.60836
            25,    20.,    9.60836
HEADER NODE DATA, YNEG
            1,    20.,    9.60836
            2,    20.,    9.60836
            3,    20.,    9.60836
            4,    20.,    9.60836
            5,    20.,    9.60836
            6,    20.,    9.60836
            7,    20.,    9.60836
            8,    20.,    9.60836
            9,    20.,    9.60836
            10,    20.,    9.60836
            11,    20.,    9.60836
            12,    20.,    9.60836
            13,    20.,    9.60836
            14,    20.,    9.60836
            15,    20.,    9.60836
            16,    20.,    9.60836
            17,    20.,    9.60836
            18,    20.,    9.60836
            19,    20.,    9.60836
            20,    20.,    9.60836
            21,    20.,    9.60836
            22,    20.,    9.60836
            23,    20.,    9.60836
            24,    20.,    9.60836
            25,    20.,    9.60836
HEADER NODE DATA, YPOS
            1,    20.,    9.60836
            2,    20.,    9.60836
            3,    20.,    9.60836
            4,    20.,    9.60836
            5,    20.,    9.60836
            6,    20.,    9.60836
            7,    20.,    9.60836
            8,    20.,    9.60836
            9,    20.,    9.60836
            10,    20.,    9.60836
            11,    20.,    9.60836
            12,    20.,    9.60836
            13,    20.,    9.60836
            14,    20.,    9.60836
            15,    20.,    9.60836
            16,    20.,    9.60836
            17,    20.,    9.60836
            18,    20.,    9.60836
            19,    20.,    9.60836
            20,    20.,    9.60836
            21,    20.,    9.60836
            22,    20.,    9.60836
            23,    20.,    9.60836
            24,    20.,    9.60836
            25,    20.,    9.60836
HEADER NODE DATA, ZNEG
            1,    20.,    4.80418
            2,    20.,    4.80418
            3,    20.,    4.80418
            4,    20.,    4.80418
            5,    20.,    4.80418
            6,    20.,    4.80418
            7,    20.,    4.80418
            8,    20.,    4.80418
            9,    20.,    4.80418
            10,    20.,    4.80418
            11,    20.,    4.80418
            12,    20.,    4.80418
            13,    20.,    4.80418
            14,    20.,    4.80418
            15,    20.,    4.80418
            16,    20.,    4.80418
            17,    20.,    4.80418
            18,    20.,    4.80418
            19,    20.,    4.80418
            20,    20.,    4.80418
            21,    20.,    4.80418
            22,    20.,    4.80418
            23,    20.,    4.80418
            24,    20.,    4.80418
            25,    20.,    4.80418
HEADER NODE DATA, ZPOS
            1,    20.,    4.80418
            2,    20.,    4.80418
            3,    20.,    4.80418
            4,    20.,    4.80418
            5,    20.,    4.80418
            6,    20.,    4.80418
            7,    20.,    4.80418
            8,    20.,    4.80418
            9,    20.,    4.80418
            10,    20.,    4.80418
            11,    20.,    4.80418
            12,    20.,    4.80418
            13,    20.,    4.80418
            14,    20.,    4.80418
            15,    20.,    4.80418
            16,    20.,    4.80418
            17,    20.,    4.80418
            18,    20.,    4.80418
            19,    20.,    4.80418
            20,    20.,    4.80418
            21,    20.,    4.80418
            22,    20.,    4.80418
            23,    20.,    4.80418
            24,    20.,    4.80418
            25,    20.,    4.80418
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
