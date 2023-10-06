HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.3 Patch 13
C    Generated on Fri Oct  6 14:49:08 2023
C    From file: ModelBrowser.dwg
C    Case Set: Case Set 1
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
C    DWG name:      ModelBrowser.dwg
C    Thermophysical Property Database: TdThermo.tdp
C    Optical Property Database:        RcOptics.rco
C    Computer name: RYANLAPTOP
C    User name:     rpkar
C    Symbol Names, Evaluated values, Input Strings, Comments
C    hrIllum    2.      2
C    hrMeanAnom 248.015 248.015
C    hrPos      10.     10
C    hrTime     3911.05 3911.05 Always in current user units. If programming, use hrTimeSec so that conversion are co...
C    hrTimeSec  3911.05 3911.05
C    hrTrueAnom 248.015 248.015
HEADER NODE DATA, AAAA
            -1,    293.15,    -1.0
            SIV 2,    293.15,    TDPROPS.A1,    0.0003333333
            SIV 3,    293.15,    TDPROPS.A1,    0.0003333333
HEADER NODE DATA, BBBB
            1,    293.15,    726.1
            2,    293.15,    726.1
            3,    293.15,    726.1
HEADER NODE DATA, CCCC
            1,    293.15,    582.32
            2,    293.15,    582.32
            3,    293.15,    582.32
HEADER NODE DATA, DDDD
            SIV 1,    293.15,    TDPROPS.A3,    0.0003333333
            SIV 2,    293.15,    TDPROPS.A3,    0.0003333333
            SIV 3,    293.15,    TDPROPS.A3,    0.0003333333
HEADER OUTPUT CALLS, GLOBAL
C Case Set Prop Generated Code

      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 .OR. LOOPCT .GT. 0 ) CALL SAVE('ALL',0)

HEADER NODE DATA, MAIN
HEADER CONDUCTOR DATA, MAIN
            SIV 1,    AAAA.1,    AAAA.2,    TDPROPS.A2,    0.003
            SIV 2,    AAAA.2,    AAAA.3,    TDPROPS.A2,    0.003
            3,    AAAA.3,    BBBB.1,    3.
            4,    BBBB.1,    BBBB.2,    0.36402
            5,    BBBB.2,    BBBB.3,    0.36402
            6,    BBBB.3,    CCCC.3,    3.
            7,    CCCC.1,    CCCC.2,    0.45186
            8,    CCCC.1,    DDDD.3,    6.
            9,    CCCC.2,    CCCC.3,    0.45186
            SIV 10,    DDDD.1,    DDDD.2,    TDPROPS.A4,    0.003
            SIV 11,    DDDD.2,    DDDD.3,    TDPROPS.A4,    0.003
HEADER VARIABLES 0, MAIN
C Heat Load[MAIN]::72
      CCCC.Q2 = CCCC.Q2 + 3.
HEADER NODE DATA, TDPROPS
HEADER ARRAY DATA, TDPROPS
C     50% Alum 6061-T6_k:
            2 = 
            33.15,  44.9993
            44.261,  55.3837
            55.372,  65.7682
            66.483,  76.1526
            77.594,  83.0756
            88.706,  91.7293
            99.817,  96.9215
            110.928,  103.844
            122.039,  107.306
            133.15,  112.498
            144.261,  117.69
            155.372,  121.152
            166.483,  124.613
            177.594,  128.075
            188.706,  131.536
            199.817,  133.267
            210.928,  136.729
            222.039,  138.459
            233.15,  141.921
            244.261,  143.652
            255.372,  145.382
            266.483,  147.978
            277.594,  149.709
            288.706,  151.44
            299.817,  152.824
            310.928,  154.555
            322.039,  155.94
            333.15,  157.497
            344.261,  159.228
            355.372,  160.959
            366.483,  161.824
            377.594,  162.69
            388.706,  164.42
            399.817,  166.151
            410.928,  167.017
            422.039,  167.882
            433.15,  168.747
            444.261,  170.478
            455.372,  171.343
            466.483,  172.209
            477.594,  173.074
C     50% Alum 6061-T6_rhocp:
            1 = 
            33.15,  73822.46
            44.2611,  130609.
            55.3722,  215788.9
            66.4833,  318004.5
            77.5944,  425899.
            88.7056,  511078.
            99.8167,  584900.5
            110.928,  653044.3
            122.039,  709831.6
            133.15,  766617.6
            144.261,  812047.2
            155.372,  851797.9
            166.483,  891548.7
            177.594,  931298.1
            188.706,  965371.3
            199.817,  993764.3
            210.928,  1022157.
            222.039,  1056229.
            233.15,  1078943.
            244.261,  1101659.
            255.372,  1124373.
            266.483,  1147087.
            277.594,  1158445.
            288.706,  1175481.
            299.817,  1192517.
            310.928,  1209553.
            322.039,  1226588.
            333.15,  1237946.
            344.261,  1243625.
            355.372,  1254981.
            366.483,  1266339.
            377.594,  1277697.
            388.706,  1283374.
            399.817,  1294732.
            410.928,  1300411.
            422.039,  1311769.
            433.15,  1323125.
            444.261,  1328804.
            455.372,  1334483.
            466.483,  1340162.
            477.594,  1345841.
C     Stainless Steel, AISI 301_k:
            4 = 
            144.261,  10.3844
            155.372,  11.0767
            166.483,  11.596
            177.594,  12.1152
            188.706,  12.6344
            199.817,  12.9806
            210.928,  13.3267
            222.039,  13.6729
            233.15,  14.019
            244.261,  14.3652
            255.372,  14.7113
            266.483,  14.8844
            277.594,  15.0575
            288.706,  15.4036
            299.817,  15.5767
            310.928,  15.9228
            322.039,  16.1824
            333.15,  16.3555
            344.261,  16.5286
            355.372,  16.7017
            366.483,  16.7882
            377.594,  16.9613
            388.706,  17.1343
            399.817,  17.2555
            410.928,  17.394
            422.039,  17.4805
C     Stainless Steel, AISI 301_rhocp:
            3 = 
            77.5944,  2320134.
            88.7056,  2402995.
            99.8167,  2485856.
            110.928,  2552148.
            122.039,  2618432.
            133.15,  2717870.
            144.261,  2784154.
            155.372,  2850446.
            166.483,  2949884.
            177.594,  3016168.
            188.706,  3082460.
            199.817,  3148752.
            210.928,  3198467.
            222.039,  3248182.
            233.15,  3314474.
            244.261,  3380766.
            255.372,  3447050.
            266.483,  3496765.
            277.594,  3529911.
            288.706,  3579634.
            299.817,  3645918.
            310.928,  3679064.
            322.039,  3728780.
            333.15,  3778502.
            344.261,  3811641.
            355.372,  3844787.
            366.483,  3877933.
            377.594,  3911079.
            388.706,  3944225.
            399.817,  3977371.
            410.928,  4010509.
            422.039,  4043655.
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
