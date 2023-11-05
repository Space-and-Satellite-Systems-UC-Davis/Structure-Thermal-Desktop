       subroutine setexit(expnt)
      !DEC$ ATTRIBUTES DLLEXPORT::setexit
      common /exfunc/ ex_pnt
      data ex_pnt /0/
      integer expnt, ex_pnt
      ex_pnt = expnt
      return
      end
      subroutine myexit(stat)
      integer stat
      common /exfunc/ ex_pnt
      integer ex_pnt
      pointer (ex_pnt,pext)
      integer, external :: pext
      if(ex_pnt .eq. 0) then
         call exit(stat)
      endif
      call pext(stat)
      return
      end
      subroutine checkexit()
      use exitflag_MOD
      if(exitflag .ne. 0) call ABNORMNOSAVE('EXIT KEY',0,'EXIT KEY')
      return
      end

      MODULE USERREGISTER_MOD
      REAL,   POINTER :: ATEST,BTEST,CTEST,DTEST,ETEST,FTEST,GTEST,HTEST,OTEST,PTEST,QTEST,RTEST,STEST,TTEST,UTEST,VTEST,WTEST,XTEST
     +,YTEST,ZTEST,A__TD,B__TD,C__TD,D__TD,E__TD,F__TD,G__TD,H__TD,O__TD,P__TD,Q__TD,R__TD,S__TD,T__TD,U__TD,V__TD,W__TD,X__TD,Y__TD
     +,Z__TD,ATEST_DP,BTEST_DP,CTEST_DP,DTEST_DP,ETEST_DP,FTEST_DP,GTEST_DP,HTEST_DP,OTEST_DP,PTEST_DP,QTEST_DP,RTEST_DP,STEST_DP
     +,TTEST_DP,UTEST_DP,VTEST_DP,WTEST_DP,XTEST_DP,YTEST_DP,ZTEST_DP,A__TD_DP,B__TD_DP,C__TD_DP,D__TD_DP,E__TD_DP,F__TD_DP,G__TD_DP
     +,H__TD_DP,O__TD_DP,P__TD_DP,Q__TD_DP,R__TD_DP,S__TD_DP,T__TD_DP,U__TD_DP,V__TD_DP,W__TD_DP,X__TD_DP,Y__TD_DP,Z__TD_DP,ATEST_SP
     +,BTEST_SP,CTEST_SP,DTEST_SP,ETEST_SP,FTEST_SP,GTEST_SP,HTEST_SP,OTEST_SP,PTEST_SP,QTEST_SP,RTEST_SP,STEST_SP,TTEST_SP,UTEST_SP
     +,VTEST_SP,WTEST_SP,XTEST_SP,YTEST_SP,ZTEST_SP
      INTEGER,POINTER ::  ITEST,JTEST,KTEST,LTEST,MTEST,NTEST,I__TD,J__TD,K__TD,L__TD,M__TD,N__TD,ITEST_DP,JTEST_DP,KTEST_DP
     +,LTEST_DP,MTEST_DP,NTEST_DP,I__TD_DP,J__TD_DP,K__TD_DP,L__TD_DP,M__TD_DP,N__TD_DP,ITEST_SP,JTEST_SP,KTEST_SP,LTEST_SP,MTEST_SP
     +,NTEST_SP
      END MODULE
      subroutine setptr(pntrs)
      INTEGER pntrs
      !DEC$ ATTRIBUTES DLLEXPORT::setptr
      call setfpntr(pntrs)
      return
      end
      SUBROUTINE SETUSERREG
      !DEC$ ATTRIBUTES DLLEXPORT::SETUSERREG
      USE REGDAT_MOD
      USE USERREGISTER_MOD
      USE CPADIMS_MOD
      CALL INITCSR
      ATEST => RUSERC(   1 )
      BTEST => RUSERC(   2 )
      CTEST => RUSERC(   3 )
      DTEST => RUSERC(   4 )
      ETEST => RUSERC(   5 )
      FTEST => RUSERC(   6 )
      GTEST => RUSERC(   7 )
      HTEST => RUSERC(   8 )
      ITEST => NUSERC(   9 )
      JTEST => NUSERC(  10 )
      KTEST => NUSERC(  11 )
      LTEST => NUSERC(  12 )
      MTEST => NUSERC(  13 )
      NTEST => NUSERC(  14 )
      OTEST => RUSERC(  15 )
      PTEST => RUSERC(  16 )
      QTEST => RUSERC(  17 )
      RTEST => RUSERC(  18 )
      STEST => RUSERC(  19 )
      TTEST => RUSERC(  20 )
      UTEST => RUSERC(  21 )
      VTEST => RUSERC(  22 )
      WTEST => RUSERC(  23 )
      XTEST => RUSERC(  24 )
      YTEST => RUSERC(  25 )
      ZTEST => RUSERC(  26 )
      A__TD => RUSERC(  27 )
      B__TD => RUSERC(  28 )
      C__TD => RUSERC(  29 )
      D__TD => RUSERC(  30 )
      E__TD => RUSERC(  31 )
      F__TD => RUSERC(  32 )
      G__TD => RUSERC(  33 )
      H__TD => RUSERC(  34 )
      I__TD => NUSERC(  35 )
      J__TD => NUSERC(  36 )
      K__TD => NUSERC(  37 )
      L__TD => NUSERC(  38 )
      M__TD => NUSERC(  39 )
      N__TD => NUSERC(  40 )
      O__TD => RUSERC(  41 )
      P__TD => RUSERC(  42 )
      Q__TD => RUSERC(  43 )
      R__TD => RUSERC(  44 )
      S__TD => RUSERC(  45 )
      T__TD => RUSERC(  46 )
      U__TD => RUSERC(  47 )
      V__TD => RUSERC(  48 )
      W__TD => RUSERC(  49 )
      X__TD => RUSERC(  50 )
      Y__TD => RUSERC(  51 )
      Z__TD => RUSERC(  52 )
      ATEST_DP => RUSERC(  53 )
      BTEST_DP => RUSERC(  54 )
      CTEST_DP => RUSERC(  55 )
      DTEST_DP => RUSERC(  56 )
      ETEST_DP => RUSERC(  57 )
      FTEST_DP => RUSERC(  58 )
      GTEST_DP => RUSERC(  59 )
      HTEST_DP => RUSERC(  60 )
      ITEST_DP => NUSERC(  61 )
      JTEST_DP => NUSERC(  62 )
      KTEST_DP => NUSERC(  63 )
      LTEST_DP => NUSERC(  64 )
      MTEST_DP => NUSERC(  65 )
      NTEST_DP => NUSERC(  66 )
      OTEST_DP => RUSERC(  67 )
      PTEST_DP => RUSERC(  68 )
      QTEST_DP => RUSERC(  69 )
      RTEST_DP => RUSERC(  70 )
      STEST_DP => RUSERC(  71 )
      TTEST_DP => RUSERC(  72 )
      UTEST_DP => RUSERC(  73 )
      VTEST_DP => RUSERC(  74 )
      WTEST_DP => RUSERC(  75 )
      XTEST_DP => RUSERC(  76 )
      YTEST_DP => RUSERC(  77 )
      ZTEST_DP => RUSERC(  78 )
      A__TD_DP => RUSERC(  79 )
      B__TD_DP => RUSERC(  80 )
      C__TD_DP => RUSERC(  81 )
      D__TD_DP => RUSERC(  82 )
      E__TD_DP => RUSERC(  83 )
      F__TD_DP => RUSERC(  84 )
      G__TD_DP => RUSERC(  85 )
      H__TD_DP => RUSERC(  86 )
      I__TD_DP => NUSERC(  87 )
      J__TD_DP => NUSERC(  88 )
      K__TD_DP => NUSERC(  89 )
      L__TD_DP => NUSERC(  90 )
      M__TD_DP => NUSERC(  91 )
      N__TD_DP => NUSERC(  92 )
      O__TD_DP => RUSERC(  93 )
      P__TD_DP => RUSERC(  94 )
      Q__TD_DP => RUSERC(  95 )
      R__TD_DP => RUSERC(  96 )
      S__TD_DP => RUSERC(  97 )
      T__TD_DP => RUSERC(  98 )
      U__TD_DP => RUSERC(  99 )
      V__TD_DP => RUSERC( 100 )
      W__TD_DP => RUSERC( 101 )
      X__TD_DP => RUSERC( 102 )
      Y__TD_DP => RUSERC( 103 )
      Z__TD_DP => RUSERC( 104 )
      ATEST_SP => RUSERC( 105 )
      BTEST_SP => RUSERC( 106 )
      CTEST_SP => RUSERC( 107 )
      DTEST_SP => RUSERC( 108 )
      ETEST_SP => RUSERC( 109 )
      FTEST_SP => RUSERC( 110 )
      GTEST_SP => RUSERC( 111 )
      HTEST_SP => RUSERC( 112 )
      ITEST_SP => NUSERC( 113 )
      JTEST_SP => NUSERC( 114 )
      KTEST_SP => NUSERC( 115 )
      LTEST_SP => NUSERC( 116 )
      MTEST_SP => NUSERC( 117 )
      NTEST_SP => NUSERC( 118 )
      OTEST_SP => RUSERC( 119 )
      PTEST_SP => RUSERC( 120 )
      QTEST_SP => RUSERC( 121 )
      RTEST_SP => RUSERC( 122 )
      STEST_SP => RUSERC( 123 )
      TTEST_SP => RUSERC( 124 )
      UTEST_SP => RUSERC( 125 )
      VTEST_SP => RUSERC( 126 )
      WTEST_SP => RUSERC( 127 )
      XTEST_SP => RUSERC( 128 )
      YTEST_SP => RUSERC( 129 )
      ZTEST_SP => RUSERC( 130 )
      RETURN
      END
       SUBROUTINE SOR0001
        RETURN
        END
       SUBROUTINE SOR0002
        RETURN
        END
       SUBROUTINE SOR0003
        RETURN
        END
       SUBROUTINE SOR0004
        RETURN
        END
       SUBROUTINE SOR0005
        RETURN
        END
       SUBROUTINE SOR0006
        RETURN
        END
       SUBROUTINE SOR0007
        RETURN
        END
       SUBROUTINE SOR0008
        RETURN
        END
       SUBROUTINE SOR0009
        RETURN
        END
       SUBROUTINE SOR0010
        RETURN
        END
       SUBROUTINE VA1_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA1_GLOBAL
       RETURN
       END
       SUBROUTINE VA1_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA1_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA10001
       CALL QVTEMP('MAIN')
       CALL GVTEMP('MAIN')
       CALL CVTEMP('MAIN')
       RETURN
       END
       SUBROUTINE VA10002
       CALL QVTEMP('X_NEG')
       CALL GVTEMP('X_NEG')
       CALL CVTEMP('X_NEG')
       RETURN
       END
       SUBROUTINE VA10003
       CALL QVTEMP('X_POS')
       CALL GVTEMP('X_POS')
       CALL CVTEMP('X_POS')
       RETURN
       END
       SUBROUTINE VA10004
       CALL QVTEMP('Y_NEG')
       CALL GVTEMP('Y_NEG')
       CALL CVTEMP('Y_NEG')
       RETURN
       END
       SUBROUTINE VA10005
       CALL QVTEMP('Y_POS')
       CALL GVTEMP('Y_POS')
       CALL CVTEMP('Y_POS')
       RETURN
       END
       SUBROUTINE VA10006
       CALL QVTEMP('Z_NEG')
       CALL GVTEMP('Z_NEG')
       CALL CVTEMP('Z_NEG')
       RETURN
       END
       SUBROUTINE VA10007
       CALL QVTEMP('Z_POS')
       CALL GVTEMP('Z_POS')
       CALL CVTEMP('Z_POS')
       RETURN
       END
       SUBROUTINE VA10008
       CALL QVTEMP('C0A0')
       CALL GVTEMP('C0A0')
       CALL CVTEMP('C0A0')
       RETURN
       END
       SUBROUTINE VA10009
       CALL QVTEMP('C0A1')
       CALL GVTEMP('C0A1')
       CALL CVTEMP('C0A1')
       RETURN
       END
       SUBROUTINE VA10010
       CALL QVTEMP('C0A2')
       CALL GVTEMP('C0A2')
       CALL CVTEMP('C0A2')
       RETURN
       END
       SUBROUTINE VA2_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA2_GLOBAL
       RETURN
       END
       SUBROUTINE VA2_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA2_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA20001
       RETURN
       END
       SUBROUTINE VA20002
       RETURN
       END
       SUBROUTINE VA20003
       RETURN
       END
       SUBROUTINE VA20004
       RETURN
       END
       SUBROUTINE VA20005
       RETURN
       END
       SUBROUTINE VA20006
       RETURN
       END
       SUBROUTINE VA20007
       RETURN
       END
       SUBROUTINE VA20008
       RETURN
       END
       SUBROUTINE VA20009
       RETURN
       END
       SUBROUTINE VA20010
       RETURN
       END
       SUBROUTINE VA00008
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      CALL LOADQ_C0A0_1699223708
       CALL QVTIME('C0A0')
       CALL GVTIME('C0A0')
       CALL CVTIME('C0A0')
       RETURN
       END
       SUBROUTINE VA00009
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      CALL LOADQ_C0A1_1699223709
       CALL QVTIME('C0A1')
       CALL GVTIME('C0A1')
       CALL CVTIME('C0A1')
       RETURN
       END
       SUBROUTINE VA00010
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      CALL LOADQ_C0A2_1699223710
       CALL QVTIME('C0A2')
       CALL GVTIME('C0A2')
       CALL CVTIME('C0A2')
       RETURN
       END
       SUBROUTINE VA0_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA0_GLOBAL
       RETURN
       END
       SUBROUTINE VA0_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA0_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA00001
       CALL QVTIME('MAIN')
       CALL GVTIME('MAIN')
       CALL CVTIME('MAIN')
       RETURN
       END
       SUBROUTINE VA00002
       CALL QVTIME('X_NEG')
       CALL GVTIME('X_NEG')
       CALL CVTIME('X_NEG')
       RETURN
       END
       SUBROUTINE VA00003
       CALL QVTIME('X_POS')
       CALL GVTIME('X_POS')
       CALL CVTIME('X_POS')
       RETURN
       END
       SUBROUTINE VA00004
       CALL QVTIME('Y_NEG')
       CALL GVTIME('Y_NEG')
       CALL CVTIME('Y_NEG')
       RETURN
       END
       SUBROUTINE VA00005
       CALL QVTIME('Y_POS')
       CALL GVTIME('Y_POS')
       CALL CVTIME('Y_POS')
       RETURN
       END
       SUBROUTINE VA00006
       CALL QVTIME('Z_NEG')
       CALL GVTIME('Z_NEG')
       CALL CVTIME('Z_NEG')
       RETURN
       END
       SUBROUTINE VA00007
       CALL QVTIME('Z_POS')
       CALL GVTIME('Z_POS')
       CALL CVTIME('Z_POS')
       RETURN
       END
       SUBROUTINE SLLOG1
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG1
       RETURN
       END
       SUBROUTINE SLLOG2
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG2
       RETURN
       END
       SUBROUTINE SLLOG0
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG0
       RETURN
       END
       SUBROUTINE SOLOUT
       !DEC$ ATTRIBUTES DLLEXPORT::SOLOUT
       RETURN
       END
       SUBROUTINE RELOUT
       !DEC$ ATTRIBUTES DLLEXPORT::RELOUT
       RETURN
       END
       SUBROUTINE FL1_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL1_GLOBAL
       RETURN
       END
       SUBROUTINE FL1_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL1_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE FL2_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL2_GLOBAL
       RETURN
       END
       SUBROUTINE FL2_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL2_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE FL0_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL0_GLOBAL
       RETURN
       END
       SUBROUTINE FL0_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL0_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE OPER
       !DEC$ ATTRIBUTES DLLEXPORT::OPER
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       CHARACTER*32 NBNAM( 999)
       CHARACTER*32 NFNAM( 999)
       CALL TDPREBL
       NBNAM(   1) = 'MAIN                            '
       NBNAM(   2) = 'X_NEG                           '
       NBNAM(   3) = 'X_POS                           '
       NBNAM(   4) = 'Y_NEG                           '
       NBNAM(   5) = 'Y_POS                           '
       NBNAM(   6) = 'Z_NEG                           '
       NBNAM(   7) = 'Z_POS                           '
       NBNAM(   8) = 'C0A0                            '
       NBNAM(   9) = 'C0A1                            '
       NBNAM(  10) = 'C0A2                            '
       CALL BUILD ('DEFAULT                         ',  10, NBNAM)
       CALL TDPOSTBL
       CALL TRANSIENT
       CALL TDHTOT
       CALL TDPOSTSL
       RETURN
       END
       SUBROUTINE OUT_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::OUT_GLOBAL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       CALL TPRINT('ALL')
       IF(NSOL.GT.1)THEN
           IF(TIMEN.GE.TIMEND)THEN
               CALL SAVE('ALL',0)
           ELSE
               CALL SAVE('TR',0)
           ENDIF
       ELSEIF(LOOPCT.GT.0)THEN
           CALL SAVE('ALL',0)
       ENDIF
       RETURN
       END
       SUBROUTINE OUT_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::OUT_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE OUT0001
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0001
       RETURN
       END
       SUBROUTINE OUT0002
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0002
       RETURN
       END
       SUBROUTINE OUT0003
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0003
       RETURN
       END
       SUBROUTINE OUT0004
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0004
       RETURN
       END
       SUBROUTINE OUT0005
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0005
       RETURN
       END
       SUBROUTINE OUT0006
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0006
       RETURN
       END
       SUBROUTINE OUT0007
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0007
       RETURN
       END
       SUBROUTINE OUT0008
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0008
       RETURN
       END
       SUBROUTINE OUT0009
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0009
       RETURN
       END
       SUBROUTINE OUT0010
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0010
       RETURN
       END
       SUBROUTINE TDHTR
       RETURN
       END
       SUBROUTINE TDREL
      RETURN
      END
      SUBROUTINE TDHTOT
      RETURN
      END
      SUBROUTINE TDHTRST
      RETURN
      END
      SUBROUTINE TDPREBL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE TDPOSTBL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE TDPOSTSL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE BASEPLOT
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      RECURSIVE SUBROUTINE LOADQ_C0A0_1699223708
      USE BINARY_READER_MOD
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      INTEGER NVAR__TD
      REAL, ALLOCATABLE ::  DATA__TD(:)
      DATA NVAR__TD /-1/
      SAVE NVAR__TD, DATA__TD
      IF( NVAR__TD  .LT.  0 ) THEN
          ALLOCATE (DATA__TD(2721))
          CALL LOAD_BINARY_SINGLET_ARRAYS(
     +        'C0A0.hra_bin'
     +    , DATA__TD)
          NVAR__TD = 1
      ENDIF
      DATA__TD(1 + 453 + 1) =
     + A(3+1)
      CALL LOADQ('C0A0',1,8,
     +    DATA__TD(1+151),
     +    DATA__TD(1+302),
     +    DATA__TD(1),
     +    DATA__TD(1+453),
     + A(1) )
      RETURN
      END
      RECURSIVE SUBROUTINE LOADQ_C0A1_1699223709
      USE BINARY_READER_MOD
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      INTEGER NVAR__TD
      REAL, ALLOCATABLE ::  DATA__TD(:)
      DATA NVAR__TD /-1/
      SAVE NVAR__TD, DATA__TD
      IF( NVAR__TD  .LT.  0 ) THEN
          ALLOCATE (DATA__TD(2721))
          CALL LOAD_BINARY_SINGLET_ARRAYS(
     +        'C0A1.hra_bin'
     +    , DATA__TD)
          NVAR__TD = 1
      ENDIF
      DATA__TD(1 + 453 + 1) =
     + A(23+1)
      CALL LOADQ('C0A1',1,8,
     +    DATA__TD(1+151),
     +    DATA__TD(1+302),
     +    DATA__TD(1),
     +    DATA__TD(1+453),
     + A(21) )
      RETURN
      END
      RECURSIVE SUBROUTINE LOADQ_C0A2_1699223710
      USE BINARY_READER_MOD
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      INTEGER NVAR__TD
      REAL, ALLOCATABLE ::  DATA__TD(:)
      DATA NVAR__TD /-1/
      SAVE NVAR__TD, DATA__TD
      IF( NVAR__TD  .LT.  0 ) THEN
          ALLOCATE (DATA__TD(921))
          CALL LOAD_BINARY_SINGLET_ARRAYS(
     +        'C0A2.hra_bin'
     +    , DATA__TD)
          NVAR__TD = 1
      ENDIF
      DATA__TD(1 + 453 + 1) =
     + A(43+1)
      CALL LOADQ('C0A2',1,8,
     +    DATA__TD(1+151),
     +    DATA__TD(1+302),
     +    DATA__TD(1),
     +    DATA__TD(1+453),
     + A(41) )
      RETURN
      END
       SUBROUTINE FLOGI0(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI0
       RETURN
       END
       SUBROUTINE FLOGI1(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI1
       RETURN
       END
       SUBROUTINE FLOGI2(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI2
       RETURN
       END
       SUBROUTINE VARBL0(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL0
       IF(MODNO .EQ. 1)   THEN
                CALL VA00001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA00002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA00003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA00004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA00005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA00006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA00007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA00008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA00009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA00010
       END IF
       RETURN
       END
       SUBROUTINE VARBL1(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL1
       IF(MODNO .EQ. 1)   THEN
                CALL VA10001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA10002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA10003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA10004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA10005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA10006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA10007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA10008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA10009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA10010
       END IF
       RETURN
       END
       SUBROUTINE VARBL2(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL2
       IF(MODNO .EQ. 1)   THEN
                CALL VA20001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA20002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA20003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA20004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA20005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA20006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA20007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA20008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA20009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA20010
       END IF
       RETURN
       END
       SUBROUTINE QVTEMP(MODNAM)
       !DEC$ ATTRIBUTES DLLEXPORT::QVTEMP
       USE MODNAM_MOD
       INTEGER SERCHN
       CHARACTER*(*) MODNAM
       INTEGER MODNO
       MODNO = SERCHN(MODNAM,MROOT,MLLINK,MRLINK,MACT,MNAMES)
       IF(MODNO .EQ. 1)   THEN
                CALL SOR0001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL SOR0002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL SOR0003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL SOR0004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL SOR0005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL SOR0006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL SOR0007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL SOR0008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL SOR0009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL SOR0010
       END IF
       RETURN
       END
       SUBROUTINE OUTCAL(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::OUTCAL
       IF(MODNO .EQ. 1)   THEN
                CALL OUT0001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL OUT0002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL OUT0003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL OUT0004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL OUT0005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL OUT0006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL OUT0007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL OUT0008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL OUT0009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL OUT0010
       END IF
       RETURN
       END
       SUBROUTINE FASTFS
       RETURN
       END
       SUBROUTINE FLUSET(D,A)
       REAL D
       REAL A(1)
       RETURN
       END
       LOGICAL FUNCTION RDOFLU(D,D2,I)
       REAL D,D2
       INTEGER I
       RDOFLU = .FALSE.
       RETURN
       END
       SUBROUTINE FLUSLV(D,D1,A,A1,*)
       REAL D,D1
       REAL A(1),A1(1)
       RETURN
       END
       SUBROUTINE PREFLO(A,A1,A2)
       REAL A(1),A1(1),A2(1)
       RETURN
       END
       SUBROUTINE FLUINF(A)
       REAL A(1)
       RETURN
       END
       SUBROUTINE UPDATF(A)
       REAL A(1)
       RETURN
       END
       SUBROUTINE FCNVRG(A,D,A2,A3)
       REAL A(1),A2(1),A3(1),D
       RETURN
       END