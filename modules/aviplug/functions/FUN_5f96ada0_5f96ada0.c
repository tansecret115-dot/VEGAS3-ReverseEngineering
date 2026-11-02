/* Module: aviplug.dll
   Function: FUN_5f96ada0
   Address: 5f96ada0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96ada0(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  undefined8 uVar24;
  short sVar26;
  short sVar27;
  undefined8 uVar25;
  short sVar28;
  undefined4 uVar29;
  short sVar32;
  short sVar33;
  undefined8 uVar30;
  undefined8 uVar31;
  short sVar34;
  
  puVar8 = param_2 + 0x80;
  uVar5 = 0x20;
  puVar7 = (undefined4 *)((int)param_1 + param_3 * 2);
  do {
    do {
      do {
        do {
          puVar10 = param_1;
          puVar9 = param_2;
          puVar6 = puVar7;
          uVar30 = packssdw(*puVar8,*puVar8);
          uVar18 = packssdw(puVar8[0x20],puVar8[0x20]);
          uVar4 = CONCAT22((short)((ulonglong)uVar18 >> 0x10),(short)((ulonglong)uVar30 >> 0x10));
          uVar29 = CONCAT22((short)uVar18,(short)uVar30);
          uVar18 = CONCAT44(uVar29,uVar29);
          uVar25 = CONCAT44(uVar4,uVar4);
          uVar20 = pmaddwd(DAT_5f9da640,uVar18);
          uVar19 = pmaddwd(DAT_5f9da638,uVar18);
          uVar31 = pmaddwd(uVar18,DAT_5f9da648);
          uVar30 = pmaddwd(DAT_5f9da640,uVar25);
          uVar18 = packssdw(*puVar9,puVar9[1]);
          uVar24 = pmaddwd(DAT_5f9da648,uVar25);
          uVar25 = pmaddwd(uVar25,DAT_5f9da638);
          sVar11 = (short)uVar18 + (short)DAT_5f9da630;
          sVar12 = (short)((ulonglong)uVar18 >> 0x10) + (short)((ulonglong)DAT_5f9da630 >> 0x10);
          sVar14 = (short)((ulonglong)uVar18 >> 0x20) + (short)((ulonglong)DAT_5f9da630 >> 0x20);
          sVar16 = (short)((ulonglong)uVar18 >> 0x30) + (short)((ulonglong)DAT_5f9da630 >> 0x30);
          uVar19 = packssdw(CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe),
                            CONCAT44((int)((longlong)uVar19 >> 0x2e),(int)uVar19 >> 0xe));
          *puVar8 = 0;
          uVar31 = packssdw(CONCAT44((int)((longlong)uVar31 >> 0x2e),(int)uVar31 >> 0xe),
                            CONCAT44((int)((longlong)uVar30 >> 0x2e),(int)uVar30 >> 0xe));
          puVar8[0x20] = 0;
          *puVar9 = 0;
          sVar21 = (short)((ulonglong)uVar19 >> 0x10);
          sVar22 = (short)((ulonglong)uVar19 >> 0x20);
          sVar23 = (short)((ulonglong)uVar19 >> 0x30);
          puVar9[1] = 0;
          uVar18 = psraw(CONCAT26(sVar12 + sVar23,
                                  CONCAT24(sVar11 + sVar22,
                                           CONCAT22(sVar11 + sVar21,sVar11 + (short)uVar19))),6);
          sVar32 = (short)((ulonglong)uVar31 >> 0x10);
          sVar33 = (short)((ulonglong)uVar31 >> 0x20);
          sVar34 = (short)((ulonglong)uVar31 >> 0x30);
          sVar11 = (short)uVar18;
          sVar1 = (short)((ulonglong)uVar18 >> 0x10);
          sVar2 = (short)((ulonglong)uVar18 >> 0x20);
          sVar3 = (short)((ulonglong)uVar18 >> 0x30);
          uVar30 = psraw(CONCAT26(sVar14 + sVar34,
                                  CONCAT24(sVar14 + sVar33,
                                           CONCAT22(sVar12 + sVar32,sVar12 + (short)uVar31))),6);
          *puVar10 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                              (0xff < sVar3),
                              CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                       (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar2),
                                       CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar1),
                                                (0 < sVar11) * (sVar11 < 0x100) * (char)uVar18 -
                                                (0xff < sVar11))));
          sVar11 = (short)uVar30;
          sVar1 = (short)((ulonglong)uVar30 >> 0x10);
          sVar2 = (short)((ulonglong)uVar30 >> 0x20);
          sVar3 = (short)((ulonglong)uVar30 >> 0x30);
          uVar18 = puVar9[8];
          puVar10[1] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar30 >> 0x30) -
                                (0xff < sVar3),
                                CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar30 >> 0x20) - (0xff < sVar2),
                                         CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                  (char)((ulonglong)uVar30 >> 0x10) - (0xff < sVar1)
                                                  ,(0 < sVar11) * (sVar11 < 0x100) * (char)uVar30 -
                                                   (0xff < sVar11))));
          uVar20 = packssdw(CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe),
                            CONCAT44((int)((longlong)uVar24 >> 0x2e),(int)uVar24 >> 0xe));
          puVar9[8] = 0;
          uVar18 = packssdw(uVar18,puVar9[9]);
          puVar9[9] = 0;
          sVar26 = (short)((ulonglong)uVar20 >> 0x10);
          sVar27 = (short)((ulonglong)uVar20 >> 0x20);
          sVar28 = (short)((ulonglong)uVar20 >> 0x30);
          sVar12 = (short)uVar18 + (short)DAT_5f9da630;
          sVar13 = (short)((ulonglong)uVar18 >> 0x10) + (short)((ulonglong)DAT_5f9da630 >> 0x10);
          sVar15 = (short)((ulonglong)uVar18 >> 0x20) + (short)((ulonglong)DAT_5f9da630 >> 0x20);
          sVar17 = (short)((ulonglong)uVar18 >> 0x30) + (short)((ulonglong)DAT_5f9da630 >> 0x30);
          uVar18 = psraw(CONCAT26(sVar16 + sVar28,
                                  CONCAT24(sVar16 + sVar27,
                                           CONCAT22(sVar16 + sVar26,sVar14 + (short)uVar20))),6);
          sVar11 = (short)uVar18;
          sVar1 = (short)((ulonglong)uVar18 >> 0x10);
          sVar2 = (short)((ulonglong)uVar18 >> 0x20);
          sVar3 = (short)((ulonglong)uVar18 >> 0x30);
          puVar10[2] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                                (0xff < sVar3),
                                CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar2),
                                         CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                  (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar1)
                                                  ,(0 < sVar11) * (sVar11 < 0x100) * (char)uVar18 -
                                                   (0xff < sVar11))));
          uVar30 = psraw(CONCAT26(sVar13 + sVar23,
                                  CONCAT24(sVar12 + sVar22,
                                           CONCAT22(sVar12 + sVar21,sVar12 + (short)uVar19))),6);
          sVar11 = (short)uVar30;
          sVar1 = (short)((ulonglong)uVar30 >> 0x10);
          sVar2 = (short)((ulonglong)uVar30 >> 0x20);
          sVar3 = (short)((ulonglong)uVar30 >> 0x30);
          puVar8 = puVar8 + 1;
          uVar18 = psraw(CONCAT26(sVar15 + sVar34,
                                  CONCAT24(sVar15 + sVar33,
                                           CONCAT22(sVar13 + sVar32,sVar13 + (short)uVar31))),6);
          *puVar6 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar30 >> 0x30) -
                             (0xff < sVar3),
                             CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                      (char)((ulonglong)uVar30 >> 0x20) - (0xff < sVar2),
                                      CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                               (char)((ulonglong)uVar30 >> 0x10) - (0xff < sVar1),
                                               (0 < sVar11) * (sVar11 < 0x100) * (char)uVar30 -
                                               (0xff < sVar11))));
          sVar11 = (short)uVar18;
          sVar1 = (short)((ulonglong)uVar18 >> 0x10);
          sVar2 = (short)((ulonglong)uVar18 >> 0x20);
          sVar3 = (short)((ulonglong)uVar18 >> 0x30);
          puVar6[1] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                               (0xff < sVar3),
                               CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                        (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar2),
                                        CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                 (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar1),
                                                 (0 < sVar11) * (sVar11 < 0x100) * (char)uVar18 -
                                                 (0xff < sVar11))));
          uVar5 = uVar5 - 1;
          uVar18 = psraw(CONCAT26(sVar17 + sVar28,
                                  CONCAT24(sVar17 + sVar27,
                                           CONCAT22(sVar17 + sVar26,sVar15 + (short)uVar20))),6);
          sVar11 = (short)uVar18;
          sVar1 = (short)((ulonglong)uVar18 >> 0x10);
          sVar2 = (short)((ulonglong)uVar18 >> 0x20);
          sVar3 = (short)((ulonglong)uVar18 >> 0x30);
          puVar6[2] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                               (0xff < sVar3),
                               CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                        (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar2),
                                        CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                 (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar1),
                                                 (0 < sVar11) * (sVar11 < 0x100) * (char)uVar18 -
                                                 (0xff < sVar11))));
          puVar7 = puVar6 + 3;
          param_2 = puVar9 + 2;
          param_1 = puVar10 + 3;
        } while ((uVar5 & 1) != 0);
        param_2 = puVar9 + 0x1e;
      } while ((uVar5 & 3) != 0);
      param_1 = (undefined4 *)((int)puVar10 + param_3 + -0x24);
      puVar7 = (undefined4 *)((int)puVar6 + param_3 + -0x24);
      param_2 = puVar9 + -0x1e;
    } while ((uVar5 & 7) != 0);
    param_1 = (undefined4 *)((int)param_1 + param_3 * 2);
    puVar7 = (undefined4 *)((int)puVar7 + param_3 * 2);
    param_2 = puVar9 + -0x16;
  } while (((uVar5 & 0xf) != 0) || (param_2 = puVar9 + 10, uVar5 != 0));
  return;
}


