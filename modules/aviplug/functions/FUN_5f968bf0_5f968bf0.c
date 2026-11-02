/* Module: aviplug.dll
   Function: FUN_5f968bf0
   Address: 5f968bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968bf0(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  short sVar17;
  undefined8 uVar16;
  short sVar18;
  short sVar20;
  short sVar21;
  undefined8 uVar19;
  short sVar22;
  short sVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  iVar11 = 8;
  puVar12 = param_2 + 0x80;
  do {
    iVar9 = 2;
    while( true ) {
      uVar10 = 4;
      do {
        do {
          puVar14 = param_1;
          puVar13 = param_2;
          uVar15 = packssdw(*puVar13,*puVar13);
          *puVar13 = 0;
          uVar16 = packssdw(puVar13[1],puVar13[1]);
          puVar13[1] = 0;
          uVar19 = *puVar12;
          sVar1 = (short)uVar15;
          *puVar12 = 0;
          uVar19 = packssdw(uVar19,uVar19);
          sVar2 = (short)((ulonglong)uVar15 >> 0x10);
          sVar17 = (short)((ulonglong)uVar16 >> 0x20);
          uVar15 = pmaddwd(DAT_5f9da638,uVar19);
          uVar25 = pmaddwd(DAT_5f9da640,uVar19);
          uVar19 = pmaddwd(DAT_5f9da648,uVar19);
          sVar23 = (short)((ulonglong)uVar16 >> 0x10);
          sVar18 = (short)DAT_5f9da630;
          sVar20 = (short)((ulonglong)DAT_5f9da630 >> 0x10);
          sVar21 = (short)((ulonglong)DAT_5f9da630 >> 0x20);
          sVar22 = (short)((ulonglong)DAT_5f9da630 >> 0x30);
          uVar24 = CONCAT44((int)((longlong)uVar15 >> 0x2e),(int)uVar15 >> 0xe);
          uVar15 = CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe);
          uVar19 = CONCAT44((int)((longlong)uVar19 >> 0x2e),(int)uVar19 >> 0xe);
          uVar25 = packssdw(uVar15,uVar24);
          uVar15 = packssdw(uVar19,uVar15);
          uVar24 = packssdw(uVar24,uVar19);
          param_1 = puVar14 + 3;
          uVar25 = psraw(CONCAT26((short)((ulonglong)uVar25 >> 0x30) + sVar2 + sVar22,
                                  CONCAT24((short)((ulonglong)uVar25 >> 0x20) + sVar1 + sVar21,
                                           CONCAT22((short)((ulonglong)uVar25 >> 0x10) +
                                                    sVar1 + sVar20,(short)uVar25 + sVar1 + sVar18)))
                         ,6);
          sVar1 = (short)uVar25;
          sVar3 = (short)((ulonglong)uVar25 >> 0x10);
          sVar5 = (short)((ulonglong)uVar25 >> 0x20);
          sVar7 = (short)((ulonglong)uVar25 >> 0x30);
          uVar19 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) + sVar17 + sVar22,
                                  CONCAT24((short)((ulonglong)uVar15 >> 0x20) + sVar17 + sVar21,
                                           CONCAT22((short)((ulonglong)uVar15 >> 0x10) +
                                                    sVar2 + sVar20,(short)uVar15 + sVar2 + sVar18)))
                         ,6);
          puVar12 = puVar12 + 1;
          sVar2 = (short)uVar19;
          sVar4 = (short)((ulonglong)uVar19 >> 0x10);
          sVar6 = (short)((ulonglong)uVar19 >> 0x20);
          sVar8 = (short)((ulonglong)uVar19 >> 0x30);
          *puVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                              (0xff < sVar7),
                              CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x20) - (0xff < sVar5),
                                       CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                                (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar3),
                                                (0 < sVar1) * (sVar1 < 0x100) * (char)uVar25 -
                                                (0xff < sVar1))));
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x30) + sVar23 + sVar22,
                                  CONCAT24((short)((ulonglong)uVar24 >> 0x20) + sVar23 + sVar21,
                                           CONCAT22((short)((ulonglong)uVar24 >> 0x10) +
                                                    (short)((ulonglong)uVar16 >> 0x30) + sVar20,
                                                    (short)uVar24 + sVar17 + sVar18))),6);
          puVar14[1] = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                                (0xff < sVar8),
                                CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                         (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                         CONCAT11((0 < sVar4) * (sVar4 < 0x100) *
                                                  (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar4)
                                                  ,(0 < sVar2) * (sVar2 < 0x100) * (char)uVar19 -
                                                   (0xff < sVar2))));
          sVar1 = (short)uVar15;
          sVar2 = (short)((ulonglong)uVar15 >> 0x10);
          sVar3 = (short)((ulonglong)uVar15 >> 0x20);
          sVar4 = (short)((ulonglong)uVar15 >> 0x30);
          uVar10 = uVar10 - 1;
          puVar14[2] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                                (0xff < sVar4),
                                CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x20) - (0xff < sVar3),
                                         CONCAT11((0 < sVar2) * (sVar2 < 0x100) *
                                                  (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar2)
                                                  ,(0 < sVar1) * (sVar1 < 0x100) * (char)uVar15 -
                                                   (0xff < sVar1))));
          param_2 = puVar13 + 2;
        } while ((uVar10 & 1) != 0);
        param_2 = puVar13 + 0x1e;
      } while (uVar10 != 0);
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_2 = puVar13 + -0x5e;
    param_1 = (undefined4 *)((int)puVar14 + (param_3 - param_4) + -0x54);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}


