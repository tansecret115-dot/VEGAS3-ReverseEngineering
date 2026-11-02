/* Module: aviplug.dll
   Function: FUN_5f968ab0
   Address: 5f968ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968ab0(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

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
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  short sVar18;
  undefined8 uVar17;
  short sVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  short sVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  iVar11 = 8;
  puVar13 = param_2 + 0x80;
  do {
    iVar9 = 2;
    while( true ) {
      uVar10 = 4;
      do {
        do {
          puVar15 = param_1;
          puVar14 = param_2;
          puVar12 = puVar13;
          uVar16 = *puVar14;
          uVar17 = puVar14[1];
          uVar20 = packssdw(CONCAT44(*(undefined4 *)(puVar12 + 0x20),*(undefined4 *)puVar12),
                            CONCAT44(*(undefined4 *)(puVar12 + 0x20),*(undefined4 *)puVar12));
          *puVar14 = 0;
          uVar16 = packssdw(uVar16,uVar16);
          puVar14[1] = 0;
          uVar17 = packssdw(uVar17,uVar17);
          sVar1 = (short)uVar16;
          sVar2 = (short)((ulonglong)uVar16 >> 0x10);
          sVar18 = (short)((ulonglong)uVar17 >> 0x20);
          uVar25 = pmaddwd(DAT_5f9da638,uVar20);
          uVar26 = pmaddwd(DAT_5f9da640,uVar20);
          uVar16 = pmaddwd(DAT_5f9da648,uVar20);
          sVar24 = (short)((ulonglong)uVar17 >> 0x10);
          sVar19 = (short)DAT_5f9da630;
          sVar21 = (short)((ulonglong)DAT_5f9da630 >> 0x10);
          sVar22 = (short)((ulonglong)DAT_5f9da630 >> 0x20);
          sVar23 = (short)((ulonglong)DAT_5f9da630 >> 0x30);
          uVar25 = CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe);
          uVar20 = CONCAT44((int)((longlong)uVar26 >> 0x2e),(int)uVar26 >> 0xe);
          uVar16 = CONCAT44((int)((longlong)uVar16 >> 0x2e),(int)uVar16 >> 0xe);
          uVar26 = packssdw(uVar20,uVar25);
          uVar20 = packssdw(uVar16,uVar20);
          uVar25 = packssdw(uVar25,uVar16);
          param_1 = puVar15 + 3;
          uVar26 = psraw(CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar2 + sVar23,
                                  CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar1 + sVar22,
                                           CONCAT22((short)((ulonglong)uVar26 >> 0x10) +
                                                    sVar1 + sVar21,(short)uVar26 + sVar1 + sVar19)))
                         ,6);
          sVar1 = (short)uVar26;
          sVar3 = (short)((ulonglong)uVar26 >> 0x10);
          sVar5 = (short)((ulonglong)uVar26 >> 0x20);
          sVar7 = (short)((ulonglong)uVar26 >> 0x30);
          uVar16 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar18 + sVar23,
                                  CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar18 + sVar22,
                                           CONCAT22((short)((ulonglong)uVar20 >> 0x10) +
                                                    sVar2 + sVar21,(short)uVar20 + sVar2 + sVar19)))
                         ,6);
          puVar13 = (undefined8 *)((int)puVar12 + 4);
          sVar2 = (short)uVar16;
          sVar4 = (short)((ulonglong)uVar16 >> 0x10);
          sVar6 = (short)((ulonglong)uVar16 >> 0x20);
          sVar8 = (short)((ulonglong)uVar16 >> 0x30);
          *puVar15 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar7),
                              CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar5),
                                       CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar3),
                                                (0 < sVar1) * (sVar1 < 0x100) * (char)uVar26 -
                                                (0xff < sVar1))));
          uVar17 = psraw(CONCAT26((short)((ulonglong)uVar25 >> 0x30) + sVar24 + sVar23,
                                  CONCAT24((short)((ulonglong)uVar25 >> 0x20) + sVar24 + sVar22,
                                           CONCAT22((short)((ulonglong)uVar25 >> 0x10) +
                                                    (short)((ulonglong)uVar17 >> 0x30) + sVar21,
                                                    (short)uVar25 + sVar18 + sVar19))),6);
          puVar15[1] = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar8),
                                CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar6),
                                         CONCAT11((0 < sVar4) * (sVar4 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar4)
                                                  ,(0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                   (0xff < sVar2))));
          sVar1 = (short)uVar17;
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          sVar4 = (short)((ulonglong)uVar17 >> 0x30);
          uVar10 = uVar10 - 1;
          puVar15[2] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                                (0xff < sVar4),
                                CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar3),
                                         CONCAT11((0 < sVar2) * (sVar2 < 0x100) *
                                                  (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2)
                                                  ,(0 < sVar1) * (sVar1 < 0x100) * (char)uVar17 -
                                                   (0xff < sVar1))));
          param_2 = puVar14 + 2;
        } while ((uVar10 & 1) != 0);
        param_2 = puVar14 + 0x1e;
        *(undefined8 *)((int)puVar12 + -4) = 0;
        *(undefined8 *)((int)puVar12 + 0xfc) = 0;
      } while (uVar10 != 0);
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_2 = puVar14 + -0x5e;
    param_1 = (undefined4 *)((int)puVar15 + (param_3 - param_4) + -0x54);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}


