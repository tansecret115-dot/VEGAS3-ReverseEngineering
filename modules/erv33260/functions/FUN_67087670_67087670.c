/* Module: erv33260.dll
   Function: FUN_67087670
   Address: 67087670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67087670(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  short sVar18;
  byte bVar21;
  short sVar20;
  short sVar22;
  short sVar23;
  undefined8 uVar19;
  undefined8 uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  undefined1 auStack_18 [4];
  
  uVar7 = DAT_6709a790;
  uVar19 = DAT_6709a760;
  iVar2 = param_4 * -8;
  puVar11 = auStack_18 + iVar2;
  iVar9 = (param_1 - param_3) + -1;
  iVar12 = 3;
  iVar10 = param_4;
  puVar8 = puVar11;
  do {
    do {
      iVar10 = iVar10 + -4;
      uVar24 = *(undefined8 *)(iVar9 + iVar10);
      bVar17 = (byte)((ulonglong)uVar24 >> 0x20);
      bVar16 = (byte)((ulonglong)uVar24 >> 0x18);
      uVar6 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
      bVar15 = (byte)((ulonglong)uVar24 >> 0x10);
      bVar14 = (byte)((ulonglong)uVar24 >> 8);
      sVar25 = (short)uVar19;
      sVar26 = (short)((ulonglong)uVar19 >> 0x10);
      sVar27 = (short)((ulonglong)uVar19 >> 0x20);
      sVar28 = (short)((ulonglong)uVar19 >> 0x30);
      bVar21 = (byte)((ulonglong)uVar24 >> 0x28);
      uVar3 = (ushort)(((uint7)bVar21 << 0x30) >> 0x28);
      uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar24 >> 0x30) << 0x30) >> 0x28);
      uVar4 = (ushort)(((uint7)bVar16 << 0x30) >> 0x28);
      *(ulonglong *)(puVar8 + iVar10 * 8) =
           CONCAT26((((uVar3 >> 8) * sVar28 + (uVar6 >> 8) * sVar28 * 2) - (uVar4 >> 8)) -
                    (uVar5 >> 8),
                    CONCAT24((((short)CONCAT21(uVar3,bVar17) * sVar27 +
                              (short)CONCAT21(uVar6,bVar16) * sVar27 * 2) -
                             (short)CONCAT21(uVar4,bVar15)) - (short)CONCAT21(uVar5,bVar21),
                             CONCAT22((((ushort)bVar16 * sVar26 + (ushort)bVar15 * sVar26 * 2) -
                                      (ushort)bVar14) - (ushort)bVar17,
                                      ((((ushort)((ulonglong)uVar24 >> 0x10) & 0xff) * sVar25 +
                                       (ushort)bVar14 * sVar25 * 2) - ((ushort)uVar24 & 0xff)) -
                                      (ushort)bVar16)));
    } while (3 < iVar10);
    iVar9 = iVar9 + param_3;
    puVar8 = puVar8 + 8;
    iVar12 = iVar12 + -1;
    iVar10 = param_4;
    iVar13 = param_4;
  } while (iVar12 != 0);
  do {
    do {
      iVar10 = iVar10 + -4;
      uVar19 = *(undefined8 *)(iVar9 + iVar10);
      bVar17 = (byte)((ulonglong)uVar19 >> 0x28);
      uVar3 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
      bVar16 = (byte)((ulonglong)uVar19 >> 0x20);
      bVar15 = (byte)((ulonglong)uVar19 >> 0x18);
      uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x30) << 0x30) >> 0x28);
      uVar24 = *(undefined8 *)(&stack0xfffffff0 + iVar10 * 8 + iVar2);
      uVar4 = (ushort)(((uint7)bVar15 << 0x30) >> 0x28);
      bVar14 = (byte)((ulonglong)uVar19 >> 0x10);
      uVar1 = *(undefined8 *)(puVar11 + iVar10 * 8);
      uVar5 = (ushort)(((uint7)bVar16 << 0x30) >> 0x28);
      *(undefined8 *)(puVar11 + iVar10 * 8) = uVar24;
      sVar18 = ((((ushort)((ulonglong)uVar19 >> 0x10) & 0xff) * sVar25 -
                ((ushort)((ulonglong)uVar19 >> 0x18) & 0xff)) - ((ushort)uVar19 & 0xff)) +
               ((ushort)((ulonglong)uVar19 >> 8) & 0xff) * sVar25 * 2;
      sVar20 = (((ushort)bVar15 * sVar26 - (ushort)bVar16) - (ushort)(byte)((ulonglong)uVar19 >> 8))
               + (ushort)bVar14 * sVar26 * 2;
      sVar22 = (((short)CONCAT21(uVar3,bVar16) * sVar27 - (short)CONCAT21(uVar6,bVar17)) -
               (short)CONCAT21(uVar4,bVar14)) + (short)CONCAT21(uVar5,bVar15) * sVar27 * 2;
      sVar23 = (((uVar3 >> 8) * sVar28 - (uVar6 >> 8)) - (uVar4 >> 8)) + (uVar5 >> 8) * sVar28 * 2;
      uVar19 = *(undefined8 *)(&stack0xfffffff8 + iVar10 * 8 + iVar2);
      *(undefined8 *)(&stack0xfffffff0 + iVar10 * 8 + iVar2) = uVar19;
      uVar24 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x30) * sVar28,
                              CONCAT24((short)((ulonglong)uVar24 >> 0x20) * sVar27,
                                       CONCAT22((short)((ulonglong)uVar24 >> 0x10) * sVar26,
                                                (short)uVar24 * sVar25))),1);
      uVar19 = psubsw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) * sVar28,
                               CONCAT24((short)((ulonglong)uVar19 >> 0x20) * sVar27,
                                        CONCAT22((short)((ulonglong)uVar19 >> 0x10) * sVar26,
                                                 (short)uVar19 * sVar25))),
                      CONCAT26((short)((ulonglong)uVar1 >> 0x30) + sVar23,
                               CONCAT24((short)((ulonglong)uVar1 >> 0x20) + sVar22,
                                        CONCAT22((short)((ulonglong)uVar1 >> 0x10) + sVar20,
                                                 (short)uVar1 + sVar18))));
      uVar19 = psraw(uVar19,2);
      uVar19 = paddsw(uVar19,uVar24);
      uVar19 = paddsw(uVar19,uVar7);
      *(ulonglong *)(&stack0xfffffff8 + iVar10 * 8 + iVar2) =
           CONCAT26(sVar23,CONCAT24(sVar22,CONCAT22(sVar20,sVar18)));
      uVar19 = psraw(uVar19,6);
      sVar18 = (short)uVar19;
      sVar20 = (short)((ulonglong)uVar19 >> 0x10);
      sVar22 = (short)((ulonglong)uVar19 >> 0x20);
      sVar23 = (short)((ulonglong)uVar19 >> 0x30);
      *(uint *)(param_2 + iVar10) =
           CONCAT13((0 < sVar23) * (sVar23 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                    (0xff < sVar23),
                    CONCAT12((0 < sVar22) * (sVar22 < 0x100) * (char)((ulonglong)uVar19 >> 0x20) -
                             (0xff < sVar22),
                             CONCAT11((0 < sVar20) * (sVar20 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar20),
                                      (0 < sVar18) * (sVar18 < 0x100) * (char)uVar19 -
                                      (0xff < sVar18))));
    } while (3 < iVar10);
    iVar9 = iVar9 + param_3;
    param_2 = param_2 + 0x10;
    iVar13 = iVar13 + -1;
    iVar10 = param_4;
  } while (iVar13 != 0);
  return;
}


