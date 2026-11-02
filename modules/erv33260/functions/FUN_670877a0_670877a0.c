/* Module: erv33260.dll
   Function: FUN_670877a0
   Address: 670877a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670877a0(int param_1,int param_2,int param_3,int param_4)

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
  byte bVar15;
  byte bVar16;
  short sVar14;
  byte bVar17;
  byte bVar19;
  short sVar18;
  short sVar20;
  short sVar21;
  byte bVar23;
  undefined8 uVar22;
  undefined8 uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  undefined1 auStack_18 [4];
  
  uVar7 = DAT_6709a790;
  uVar22 = DAT_6709a760;
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
      bVar19 = (byte)((ulonglong)uVar24 >> 0x20);
      bVar17 = (byte)((ulonglong)uVar24 >> 0x18);
      uVar6 = (ushort)(((uint7)bVar19 << 0x30) >> 0x28);
      bVar15 = (byte)((ulonglong)uVar24 >> 0x10);
      bVar16 = (byte)((ulonglong)uVar24 >> 8);
      sVar25 = (short)uVar22;
      sVar26 = (short)((ulonglong)uVar22 >> 0x10);
      sVar27 = (short)((ulonglong)uVar22 >> 0x20);
      sVar28 = (short)((ulonglong)uVar22 >> 0x30);
      bVar23 = (byte)((ulonglong)uVar24 >> 0x28);
      uVar3 = (ushort)(((uint7)bVar23 << 0x30) >> 0x28);
      uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar24 >> 0x30) << 0x30) >> 0x28);
      uVar4 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
      *(ulonglong *)(puVar8 + iVar10 * 8) =
           CONCAT26((((uVar6 >> 8) * sVar28 + (uVar3 >> 8) * sVar28 * 2) - (uVar4 >> 8)) -
                    (uVar5 >> 8),
                    CONCAT24((((short)CONCAT21(uVar6,bVar17) * sVar27 +
                              (short)CONCAT21(uVar3,bVar19) * sVar27 * 2) -
                             (short)CONCAT21(uVar4,bVar15)) - (short)CONCAT21(uVar5,bVar23),
                             CONCAT22((((ushort)bVar15 * sVar26 + (ushort)bVar17 * sVar26 * 2) -
                                      (ushort)bVar16) - (ushort)bVar19,
                                      (((ushort)bVar16 * sVar25 +
                                       ((ushort)((ulonglong)uVar24 >> 0x10) & 0xff) * sVar25 * 2) -
                                      ((ushort)uVar24 & 0xff)) - (ushort)bVar17)));
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
      uVar22 = *(undefined8 *)(iVar9 + iVar10);
      bVar17 = (byte)((ulonglong)uVar22 >> 0x20);
      uVar3 = (ushort)(((uint7)bVar17 << 0x30) >> 0x28);
      bVar15 = (byte)((ulonglong)uVar22 >> 0x18);
      bVar16 = (byte)((ulonglong)uVar22 >> 0x10);
      bVar19 = (byte)((ulonglong)uVar22 >> 0x28);
      uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar22 >> 0x30) << 0x30) >> 0x28);
      uVar24 = *(undefined8 *)(&stack0xfffffff0 + iVar10 * 8 + iVar2);
      uVar4 = (ushort)(((uint7)bVar19 << 0x30) >> 0x28);
      uVar5 = (ushort)(((uint7)bVar15 << 0x30) >> 0x28);
      uVar1 = *(undefined8 *)(puVar11 + iVar10 * 8);
      *(undefined8 *)(puVar11 + iVar10 * 8) = uVar24;
      sVar14 = ((((ushort)((ulonglong)uVar22 >> 8) & 0xff) * sVar25 -
                ((ushort)((ulonglong)uVar22 >> 0x18) & 0xff)) - ((ushort)uVar22 & 0xff)) +
               ((ushort)((ulonglong)uVar22 >> 0x10) & 0xff) * sVar25 * 2;
      sVar18 = (((ushort)bVar16 * sVar26 - (ushort)bVar17) - (ushort)(byte)((ulonglong)uVar22 >> 8))
               + (ushort)bVar15 * sVar26 * 2;
      sVar20 = (((short)CONCAT21(uVar3,bVar15) * sVar27 - (short)CONCAT21(uVar6,bVar19)) -
               (short)CONCAT21(uVar5,bVar16)) + (short)CONCAT21(uVar4,bVar17) * sVar27 * 2;
      sVar21 = (((uVar3 >> 8) * sVar28 - (uVar6 >> 8)) - (uVar5 >> 8)) + (uVar4 >> 8) * sVar28 * 2;
      uVar22 = *(undefined8 *)(&stack0xfffffff8 + iVar10 * 8 + iVar2);
      *(undefined8 *)(&stack0xfffffff0 + iVar10 * 8 + iVar2) = uVar22;
      uVar24 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x30) * sVar28,
                              CONCAT24((short)((ulonglong)uVar24 >> 0x20) * sVar27,
                                       CONCAT22((short)((ulonglong)uVar24 >> 0x10) * sVar26,
                                                (short)uVar24 * sVar25))),1);
      uVar22 = psubsw(CONCAT26((short)((ulonglong)uVar22 >> 0x30) * sVar28,
                               CONCAT24((short)((ulonglong)uVar22 >> 0x20) * sVar27,
                                        CONCAT22((short)((ulonglong)uVar22 >> 0x10) * sVar26,
                                                 (short)uVar22 * sVar25))),
                      CONCAT26((short)((ulonglong)uVar1 >> 0x30) + sVar21,
                               CONCAT24((short)((ulonglong)uVar1 >> 0x20) + sVar20,
                                        CONCAT22((short)((ulonglong)uVar1 >> 0x10) + sVar18,
                                                 (short)uVar1 + sVar14))));
      uVar22 = psraw(uVar22,2);
      uVar22 = paddsw(uVar22,uVar24);
      uVar22 = paddsw(uVar22,uVar7);
      *(ulonglong *)(&stack0xfffffff8 + iVar10 * 8 + iVar2) =
           CONCAT26(sVar21,CONCAT24(sVar20,CONCAT22(sVar18,sVar14)));
      uVar22 = psraw(uVar22,6);
      sVar14 = (short)uVar22;
      sVar18 = (short)((ulonglong)uVar22 >> 0x10);
      sVar20 = (short)((ulonglong)uVar22 >> 0x20);
      sVar21 = (short)((ulonglong)uVar22 >> 0x30);
      *(uint *)(param_2 + iVar10) =
           CONCAT13((0 < sVar21) * (sVar21 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                    (0xff < sVar21),
                    CONCAT12((0 < sVar20) * (sVar20 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                             (0xff < sVar20),
                             CONCAT11((0 < sVar18) * (sVar18 < 0x100) *
                                      (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar18),
                                      (0 < sVar14) * (sVar14 < 0x100) * (char)uVar22 -
                                      (0xff < sVar14))));
    } while (3 < iVar10);
    iVar9 = iVar9 + param_3;
    param_2 = param_2 + 0x10;
    iVar13 = iVar13 + -1;
    iVar10 = param_4;
  } while (iVar13 != 0);
  return;
}


