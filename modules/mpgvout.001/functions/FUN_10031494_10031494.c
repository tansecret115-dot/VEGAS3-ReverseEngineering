/* Module: mpgvout.001
   Function: FUN_10031494
   Address: 10031494
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10031494(undefined8 *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined7 uVar3;
  uint3 uVar4;
  undefined5 uVar5;
  uint3 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte bVar15;
  undefined8 uVar13;
  ulonglong uVar14;
  ushort uVar16;
  undefined2 uVar17;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar18;
  undefined8 uVar19;
  ushort uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined1 uVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  undefined8 *local_30;
  
  iVar2 = param_3 - param_5 >> 1;
  iVar1 = param_2 * 2 + param_5 * -4;
  local_30 = (undefined8 *)(param_2 + (int)param_1);
  puVar12 = (undefined1 *)param_4[2];
  puVar11 = (undefined1 *)param_4[1];
  iVar8 = 0;
  puVar9 = (undefined2 *)*param_4;
  if (0 < param_6 >> 1) {
    do {
      iVar8 = iVar8 + 1;
      iVar10 = param_5 >> 1;
      if (0 < param_5 >> 1) {
        do {
          uVar19 = *param_1;
          uVar18 = *local_30;
          uVar25 = (undefined1)((ulonglong)uVar19 >> 0x30);
          bVar15 = (byte)((ulonglong)uVar19 >> 0x10);
          uVar17 = CONCAT11(uVar25,bVar15);
          uVar20 = (ushort)(((uint7)(byte)((ulonglong)uVar18 >> 0x20) << 0x30) >> 0x28);
          uVar4 = CONCAT21(uVar20,(char)uVar18);
          uVar5 = CONCAT41((int)(((uint7)uVar4 << 0x20) >> 0x18),(char)((ulonglong)uVar19 >> 0x20));
          uVar16 = (ushort)(((uint7)(byte)((ulonglong)uVar18 >> 0x30) << 0x30) >> 0x28);
          uVar6 = CONCAT21(uVar16,(char)((ulonglong)uVar18 >> 0x10));
          uVar3 = CONCAT43((int)(((uint7)uVar6 << 0x20) >> 0x18),CONCAT12(uVar25,uVar17));
          uVar13 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar3 >> 0x10),uVar17) &
                         0xffffffffffff00ff,7);
          uVar18 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar18 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar18 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar19 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar19 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar16 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar6
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar3 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar15))));
          uVar23 = psllw((ulonglong)CONCAT52(uVar5,(ushort)(byte)uVar19),7);
          uVar19 = paddusw(uVar18,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar20 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar4,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar5,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar19))));
          uVar16 = (ushort)uVar19 >> 1;
          uVar20 = (ushort)((ulonglong)uVar19 >> 0x10) >> 1;
          uVar21 = (ushort)((ulonglong)uVar19 >> 0x20) >> 1;
          uVar22 = (ushort)((ulonglong)uVar19 >> 0x31);
          uVar19 = pmulhw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - uVar22,
                                   CONCAT24((short)((ulonglong)uVar13 >> 0x20) - uVar21,
                                            CONCAT22((short)((ulonglong)uVar13 >> 0x10) - uVar20,
                                                     (short)uVar13 - uVar16))),DAT_1003e680);
          uVar18 = pmulhw(CONCAT26(uVar22,CONCAT24(uVar21,CONCAT22(uVar20,uVar16))),DAT_1003e690);
          uVar13 = pmulhw(CONCAT26((short)((ulonglong)uVar23 >> 0x30) - uVar22,
                                   CONCAT24((short)((ulonglong)uVar23 >> 0x20) - uVar21,
                                            CONCAT22((short)((ulonglong)uVar23 >> 0x10) - uVar20,
                                                     (short)uVar23 - uVar16))),DAT_1003e688);
          sVar26 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar27 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar28 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar14 = CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar28,
                            CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar27,
                                     CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar26,
                                              (short)uVar19 + (short)DAT_1003e6a0)));
          uVar24 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) + sVar28,
                            CONCAT24((short)((ulonglong)uVar13 >> 0x20) + sVar27,
                                     CONCAT22((short)((ulonglong)uVar13 >> 0x10) + sVar26,
                                              (short)uVar13 + (short)DAT_1003e6a0)));
          uVar16 = (ushort)((short)uVar18 + (short)DAT_1003e698) >> 6;
          uVar20 = (ushort)((short)((ulonglong)uVar18 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar21 = (ushort)((short)((ulonglong)uVar18 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar22 = (ushort)((short)((ulonglong)uVar18 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar17 = CONCAT11((uVar20 != 0) * (uVar20 < 0x100) * (char)uVar20 - (0xff < uVar20),
                            (uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16));
          *puVar9 = uVar17;
          *(short *)(param_3 + (int)puVar9) =
               (short)(CONCAT13((uVar22 != 0) * (uVar22 < 0x100) * (char)uVar22 - (0xff < uVar22),
                                CONCAT12((uVar21 != 0) * (uVar21 < 0x100) * (char)uVar21 -
                                         (0xff < uVar21),uVar17)) >> 0x10);
          uVar19 = paddusw(uVar14 >> 0x20,uVar14);
          uVar18 = paddusw(uVar24 >> 0x20,uVar24);
          uVar7 = CONCAT22((short)((ulonglong)uVar18 >> 0x10),(short)((ulonglong)uVar19 >> 0x10));
          uVar19 = paddusw((ulonglong)uVar7,CONCAT44(uVar7,CONCAT22((short)uVar18,(short)uVar19)));
          *puVar12 = (char)((ulonglong)uVar19 >> 8);
          *puVar11 = (char)((ulonglong)uVar19 >> 0x18);
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          param_1 = param_1 + 1;
          local_30 = local_30 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_30 = (undefined8 *)((int)local_30 + iVar1);
      puVar9 = (undefined2 *)((int)puVar9 + (param_3 * 2 - param_5));
      puVar12 = puVar12 + iVar2;
      puVar11 = puVar11 + iVar2;
      param_1 = (undefined8 *)((int)param_1 + iVar1);
    } while (iVar8 < param_6 >> 1);
  }
  return;
}


