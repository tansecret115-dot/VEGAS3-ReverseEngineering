/* Module: aviplug.dll
   Function: FUN_5f968d20
   Address: 5f968d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968d20(ulonglong *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  short sVar17;
  short sVar19;
  undefined8 uVar18;
  short sVar20;
  short sVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar26;
  short sVar27;
  undefined8 uVar25;
  short sVar28;
  
  iVar12 = 8;
  puVar14 = param_2 + 0x80;
  do {
    iVar10 = 2;
    while( true ) {
      uVar11 = 4;
      do {
        do {
          puVar16 = param_1;
          puVar15 = param_2;
          puVar13 = puVar14;
          uVar18 = packssdw(*puVar15,*puVar15);
          sVar19 = (short)((ulonglong)uVar18 >> 0x10);
          sVar17 = (short)uVar18;
          uVar18 = packssdw(CONCAT44(*(undefined4 *)(puVar13 + 0x20),*(undefined4 *)puVar13),
                            CONCAT44(*(undefined4 *)(puVar13 + 0x20),*(undefined4 *)puVar13));
          uVar25 = pmaddwd(DAT_5f9da650,uVar18);
          uVar23 = pmaddwd(DAT_5f9da658,uVar18);
          *puVar15 = 0;
          uVar18 = packssdw(puVar15[1],puVar15[1]);
          puVar15[1] = 0;
          uVar9 = DAT_5f9da668;
          sVar21 = (short)((ulonglong)uVar18 >> 0x10);
          sVar20 = (short)uVar18;
          param_1 = puVar16 + 2;
          uVar18 = packssdw(CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe),
                            CONCAT44((int)((longlong)uVar23 >> 0x2e),(int)uVar23 >> 0xe));
          sVar24 = (short)uVar18 + (short)DAT_5f9da660;
          sVar26 = (short)((ulonglong)uVar18 >> 0x10) + (short)((ulonglong)DAT_5f9da660 >> 0x10);
          sVar27 = (short)((ulonglong)uVar18 >> 0x20) + (short)((ulonglong)DAT_5f9da660 >> 0x20);
          sVar28 = (short)((ulonglong)uVar18 >> 0x30) + (short)((ulonglong)DAT_5f9da660 >> 0x30);
          uVar18 = psraw(CONCAT26(sVar17 + sVar28,
                                  CONCAT24(sVar17 + sVar27,CONCAT22(sVar17 + sVar26,sVar17 + sVar24)
                                          )),6);
          uVar23 = psraw(CONCAT26(sVar19 + sVar28,
                                  CONCAT24(sVar19 + sVar27,CONCAT22(sVar19 + sVar26,sVar19 + sVar24)
                                          )),6);
          sVar17 = (short)uVar18;
          sVar1 = (short)((ulonglong)uVar18 >> 0x10);
          sVar2 = (short)((ulonglong)uVar18 >> 0x20);
          sVar3 = (short)((ulonglong)uVar18 >> 0x30);
          sVar4 = (short)uVar23;
          sVar5 = (short)((ulonglong)uVar23 >> 0x10);
          sVar6 = (short)((ulonglong)uVar23 >> 0x20);
          sVar7 = (short)((ulonglong)uVar23 >> 0x30);
          uVar25 = psraw(CONCAT26(sVar20 + sVar28,
                                  CONCAT24(sVar20 + sVar27,CONCAT22(sVar20 + sVar26,sVar20 + sVar24)
                                          )),6);
          uVar22 = psraw(CONCAT26(sVar21 + sVar28,
                                  CONCAT24(sVar21 + sVar27,CONCAT22(sVar21 + sVar26,sVar21 + sVar24)
                                          )),6);
          puVar14 = (undefined8 *)((int)puVar13 + 4);
          sVar19 = (short)uVar25;
          sVar20 = (short)((ulonglong)uVar25 >> 0x10);
          sVar21 = (short)((ulonglong)uVar25 >> 0x20);
          sVar24 = (short)((ulonglong)uVar25 >> 0x30);
          sVar26 = (short)uVar22;
          sVar27 = (short)((ulonglong)uVar22 >> 0x10);
          sVar28 = (short)((ulonglong)uVar22 >> 0x20);
          sVar8 = (short)((ulonglong)uVar22 >> 0x30);
          *puVar16 = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                              (0xff < sVar7),
                              CONCAT16((0 < sVar6) * (sVar6 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar6),
                                       CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),
                                                CONCAT14((0 < sVar4) * (sVar4 < 0x100) *
                                                         (char)uVar23 - (0xff < sVar4),
                                                         CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                                  (char)((ulonglong)uVar18 >> 0x30)
                                                                  - (0xff < sVar3),
                                                                  CONCAT12((0 < sVar2) *
                                                                           (sVar2 < 0x100) *
                                                                           (char)((ulonglong)uVar18
                                                                                 >> 0x20) -
                                                                           (0xff < sVar2),
                                                                           CONCAT11((0 < sVar1) *
                                                                                    (sVar1 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar18 >> 0x10) - (0xff < sVar1),
                                                  (0 < sVar17) * (sVar17 < 0x100) * (char)uVar18 -
                                                  (0xff < sVar17)))))))) | DAT_5f9da668;
          uVar11 = uVar11 - 1;
          puVar16[1] = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                                (0xff < sVar8),
                                CONCAT16((0 < sVar28) * (sVar28 < 0x100) *
                                         (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar28),
                                         CONCAT15((0 < sVar27) * (sVar27 < 0x100) *
                                                  (char)((ulonglong)uVar22 >> 0x10) -
                                                  (0xff < sVar27),
                                                  CONCAT14((0 < sVar26) * (sVar26 < 0x100) *
                                                           (char)uVar22 - (0xff < sVar26),
                                                           CONCAT13((0 < sVar24) * (sVar24 < 0x100)
                                                                    * (char)((ulonglong)uVar25 >>
                                                                            0x30) - (0xff < sVar24),
                                                                    CONCAT12((0 < sVar21) *
                                                                             (sVar21 < 0x100) *
                                                                             (char)((ulonglong)
                                                                                    uVar25 >> 0x20)
                                                                             - (0xff < sVar21),
                                                                             CONCAT11((0 < sVar20) *
                                                                                      (sVar20 < 
                                                  0x100) * (char)((ulonglong)uVar25 >> 0x10) -
                                                  (0xff < sVar20),
                                                  (0 < sVar19) * (sVar19 < 0x100) * (char)uVar25 -
                                                  (0xff < sVar19)))))))) | uVar9;
          param_2 = puVar15 + 2;
        } while ((uVar11 & 1) != 0);
        param_2 = puVar15 + 0x1e;
        *(undefined8 *)((int)puVar13 + -4) = 0;
        *(undefined8 *)((int)puVar13 + 0xfc) = 0;
      } while (uVar11 != 0);
      iVar10 = iVar10 + -1;
      if (iVar10 == 0) break;
      param_1 = (ulonglong *)((int)param_1 + param_4);
    }
    param_2 = puVar15 + -0x5e;
    param_1 = (ulonglong *)((int)puVar16 + (param_3 - param_4) + -0x70);
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  return;
}


