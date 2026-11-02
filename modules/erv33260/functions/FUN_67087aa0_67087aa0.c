/* Module: erv33260.dll
   Function: FUN_67087aa0
   Address: 67087aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67087aa0(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  uint3 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  byte bVar22;
  short sVar20;
  undefined1 uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  short sVar27;
  short sVar28;
  undefined8 uVar21;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  
  uVar5 = DAT_6709a788;
  uVar2 = DAT_6709a760;
  uVar8 = (uint)(&stack0xffffffec + param_4 * -4) & 0xfffffff8;
  iVar9 = 2;
  iVar7 = param_4;
  uVar6 = uVar8;
  do {
    do {
      iVar7 = iVar7 + -4;
      uVar1 = *(undefined8 *)(param_1 + iVar7);
      bVar26 = (byte)((ulonglong)uVar1 >> 0x20);
      bVar24 = (byte)((ulonglong)uVar1 >> 0x18);
      uVar11 = (ushort)(((uint7)bVar26 << 0x30) >> 0x28);
      bVar22 = (byte)((ulonglong)uVar1 >> 0x10);
      bVar25 = (byte)((ulonglong)uVar1 >> 8);
      sVar29 = (short)uVar2;
      sVar20 = (ushort)bVar25 * sVar29;
      sVar30 = (short)((ulonglong)uVar2 >> 0x10);
      sVar31 = (short)((ulonglong)uVar2 >> 0x20);
      sVar27 = (short)CONCAT21(uVar11,bVar24) * sVar31;
      sVar32 = (short)((ulonglong)uVar2 >> 0x30);
      sVar28 = (uVar11 >> 8) * sVar32;
      uVar11 = (ushort)(((uint7)bVar24 << 0x30) >> 0x28);
      uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x28) << 0x30) >> 0x28);
      uVar21 = psraw(CONCAT26(sVar28,CONCAT24(sVar27,CONCAT22((ushort)bVar22 * sVar30,sVar20))),1);
      *(ulonglong *)(uVar6 + iVar7 * 4) =
           CONCAT26((uVar11 >> 8) * sVar32 + sVar28 + (uVar12 >> 8) +
                    (short)((ulonglong)uVar21 >> 0x30),
                    CONCAT24((short)CONCAT21(uVar11,bVar22) * sVar31 + sVar27 +
                             (short)CONCAT21(uVar12,bVar26) + (short)((ulonglong)uVar21 >> 0x20),
                             CONCAT22((ushort)bVar25 * sVar30 + (ushort)bVar22 * sVar30 +
                                      (ushort)bVar24 + (short)((ulonglong)uVar21 >> 0x10),
                                      ((ushort)uVar1 & 0xff) * sVar29 + sVar20 + (ushort)bVar22 +
                                      (short)uVar21)));
    } while (3 < iVar7);
    param_1 = param_1 + param_3;
    uVar6 = uVar6 + 8;
    iVar9 = iVar9 + -1;
    iVar7 = param_4;
    iVar10 = param_4;
  } while (iVar9 != 0);
  do {
    do {
      iVar7 = iVar7 + -4;
      uVar2 = *(undefined8 *)(param_1 + iVar7);
      bVar22 = (byte)((ulonglong)uVar2 >> 0x20);
      uVar11 = (ushort)(((uint7)bVar22 << 0x30) >> 0x28);
      bVar25 = (byte)((ulonglong)uVar2 >> 0x18);
      uVar4 = CONCAT21(uVar11,bVar25);
      uVar23 = (undefined1)((ulonglong)uVar2 >> 0x10);
      uVar14 = (ushort)((ulonglong)uVar2 >> 8);
      uVar3 = CONCAT43((int)(((uint7)uVar4 << 0x20) >> 0x18),CONCAT12(uVar23,uVar14));
      uVar21 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar3 >> 0x10),uVar14) & 0xffffffffffff00ff,3
                    );
      uVar1 = *(undefined8 *)(uVar8 + 8 + iVar7 * 4);
      uVar12 = (ushort)(((uint7)bVar25 << 0x30) >> 0x28);
      uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x28) << 0x30) >> 0x28);
      sVar20 = ((ushort)uVar2 & 0xff) * sVar29 + (short)uVar21 + (uVar14 & 0xff) +
               ((ushort)((ulonglong)uVar2 >> 0x10) & 0xff);
      sVar27 = (ushort)(byte)((ulonglong)uVar2 >> 8) * sVar30 +
               (short)((ulonglong)uVar21 >> 0x10) + (short)((uint7)uVar3 >> 0x10) + (ushort)bVar25;
      sVar28 = (short)CONCAT21(uVar12,uVar23) * sVar31 +
               (short)((ulonglong)uVar21 >> 0x20) + (short)uVar4 + (short)CONCAT21(uVar13,bVar22);
      sVar17 = (uVar12 >> 8) * sVar32 + (short)((ulonglong)uVar21 >> 0x30) + (uVar11 >> 8) +
               (uVar13 >> 8);
      uVar2 = *(undefined8 *)(uVar8 + iVar7 * 4);
      *(undefined8 *)(uVar8 + iVar7 * 4) = uVar1;
      uVar21 = psllw(uVar1,3);
      *(ulonglong *)(uVar8 + 8 + iVar7 * 4) =
           CONCAT26(sVar17,CONCAT24(sVar28,CONCAT22(sVar27,sVar20)));
      uVar11 = sVar20 + (short)uVar21 + (short)uVar1 + (short)uVar2 * sVar29 + (short)uVar5;
      uVar13 = sVar27 + (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar1 >> 0x10) +
               (short)((ulonglong)uVar2 >> 0x10) * sVar30 + (short)((ulonglong)uVar5 >> 0x10);
      uVar15 = sVar28 + (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar1 >> 0x20) +
               (short)((ulonglong)uVar2 >> 0x20) * sVar31 + (short)((ulonglong)uVar5 >> 0x20);
      uVar18 = sVar17 + (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar1 >> 0x30) +
               (short)((ulonglong)uVar2 >> 0x30) * sVar32 + (short)((ulonglong)uVar5 >> 0x30);
      uVar12 = uVar11 >> 8;
      uVar14 = uVar13 >> 8;
      uVar16 = uVar15 >> 8;
      uVar19 = uVar18 >> 8;
      *(uint *)(param_2 + iVar7) =
           CONCAT13((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar19),
                    CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) -
                             (0xff < uVar16),
                             CONCAT11((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                                      (0xff < uVar14),
                                      (uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar11 >> 8) -
                                      (0xff < uVar12))));
    } while (3 < iVar7);
    param_1 = param_1 + param_3;
    param_2 = param_2 + 0x10;
    iVar10 = iVar10 + -1;
    iVar7 = param_4;
  } while (iVar10 != 0);
  return;
}


