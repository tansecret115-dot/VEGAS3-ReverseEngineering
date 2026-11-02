/* Module: erv33260.dll
   Function: FUN_670874d0
   Address: 670874d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670874d0(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar12;
  byte bVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  
  uVar7 = DAT_6709a780;
  uVar6 = DAT_6709a760;
  iVar9 = param_1 + -1;
  iVar10 = param_4;
  iVar8 = param_4;
  do {
    do {
      uVar12 = *(undefined8 *)(iVar9 + -4 + iVar10);
      bVar15 = (byte)((ulonglong)uVar12 >> 0x20);
      bVar14 = (byte)((ulonglong)uVar12 >> 0x18);
      uVar5 = (ushort)(((uint7)bVar15 << 0x30) >> 0x28);
      bVar13 = (byte)((ulonglong)uVar12 >> 0x10);
      bVar11 = (byte)((ulonglong)uVar12 >> 8);
      sVar17 = (short)((ulonglong)uVar6 >> 0x10);
      sVar18 = (short)((ulonglong)uVar6 >> 0x20);
      sVar19 = (short)((ulonglong)uVar6 >> 0x30);
      bVar16 = (byte)((ulonglong)uVar12 >> 0x28);
      uVar2 = (ushort)(((uint7)bVar16 << 0x30) >> 0x28);
      uVar4 = (ushort)(((uint7)(byte)((ulonglong)uVar12 >> 0x30) << 0x30) >> 0x28);
      uVar3 = (ushort)(((uint7)bVar14 << 0x30) >> 0x28);
      uVar12 = psraw(CONCAT26(((((uVar2 >> 8) * sVar19 + (uVar5 >> 8) * sVar19 * 2) - (uVar3 >> 8))
                              - (uVar4 >> 8)) + (short)((ulonglong)uVar7 >> 0x30),
                              CONCAT24(((((short)CONCAT21(uVar2,bVar15) * sVar18 +
                                         (short)CONCAT21(uVar5,bVar14) * sVar18 * 2) -
                                        (short)CONCAT21(uVar3,bVar13)) -
                                       (short)CONCAT21(uVar4,bVar16)) +
                                       (short)((ulonglong)uVar7 >> 0x20),
                                       CONCAT22(((((ushort)bVar14 * sVar17 +
                                                  (ushort)bVar13 * sVar17 * 2) - (ushort)bVar11) -
                                                (ushort)bVar15) + (short)((ulonglong)uVar7 >> 0x10),
                                                (((((ushort)((ulonglong)uVar12 >> 0x10) & 0xff) *
                                                   (short)uVar6 + (ushort)bVar11 * (short)uVar6 * 2)
                                                 - ((ushort)uVar12 & 0xff)) - (ushort)bVar14) +
                                                (short)uVar7))),4);
      sVar17 = (short)uVar12;
      sVar18 = (short)((ulonglong)uVar12 >> 0x10);
      sVar19 = (short)((ulonglong)uVar12 >> 0x20);
      sVar1 = (short)((ulonglong)uVar12 >> 0x30);
      *(uint *)(param_2 + -4 + iVar10) =
           CONCAT13((0 < sVar1) * (sVar1 < 0x100) * (char)((ulonglong)uVar12 >> 0x30) -
                    (0xff < sVar1),
                    CONCAT12((0 < sVar19) * (sVar19 < 0x100) * (char)((ulonglong)uVar12 >> 0x20) -
                             (0xff < sVar19),
                             CONCAT11((0 < sVar18) * (sVar18 < 0x100) *
                                      (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar18),
                                      (0 < sVar17) * (sVar17 < 0x100) * (char)uVar12 -
                                      (0xff < sVar17))));
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    iVar9 = iVar9 + param_3;
    param_2 = param_2 + 0x10;
    iVar8 = iVar8 + -1;
    iVar10 = param_4;
  } while (iVar8 != 0);
  return;
}


