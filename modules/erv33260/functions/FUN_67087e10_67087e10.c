/* Module: erv33260.dll
   Function: FUN_67087e10
   Address: 67087e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67087e10(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ushort uVar3;
  undefined5 uVar4;
  undefined7 uVar5;
  uint7 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint5 uVar9;
  uint5 uVar10;
  undefined8 uVar11;
  int in_EAX;
  int iVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  short sVar19;
  short sVar20;
  undefined1 uVar21;
  byte bVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short in_MM5_Wa;
  short in_MM5_Wb;
  short in_MM5_Wc;
  short in_MM5_Wd;
  short in_MM6_Wa;
  short in_MM6_Wb;
  short in_MM6_Wc;
  short in_MM6_Wd;
  undefined2 uVar26;
  ulonglong uVar27;
  
  uVar11 = DAT_6709a770;
  uVar1 = *param_1;
  bVar22 = (byte)((ulonglong)uVar1 >> 0x18);
  uVar21 = (undefined1)((ulonglong)uVar1 >> 0x10);
  uVar26 = (undefined2)((ulonglong)uVar1 >> 8);
  uVar6 = CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)uVar1 >>
                                                                                0x20) << 0x30) >>
                                                                 0x28),bVar22) << 0x20) >> 0x18),
                                   CONCAT12(uVar21,uVar26)) >> 0x10),uVar26);
  uVar4 = (undefined5)
          (CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)bVar22 << 0x30) >> 0x28),uVar21) << 0x20)
                         >> 0x18),CONCAT12((char)((ulonglong)uVar1 >> 8),(ushort)uVar1)) >> 0x10);
  uVar18 = (ushort)uVar1 & 0xff;
  iVar12 = 4;
  do {
    uVar27 = (ulonglong)uVar6 & 0xffffffffffff00ff;
    param_1 = (undefined8 *)((int)param_1 + in_EAX);
    sVar19 = uVar18 * (short)uVar11;
    sVar20 = (short)uVar4;
    sVar23 = (short)((ulonglong)uVar11 >> 0x10);
    uVar9 = (uint5)uVar4 >> 0x10;
    uVar10 = (uint5)uVar4 >> 0x20;
    sVar24 = (short)((ulonglong)uVar11 >> 0x20);
    sVar25 = (short)((ulonglong)uVar11 >> 0x30);
    uVar1 = *param_1;
    bVar22 = (byte)((ulonglong)uVar1 >> 0x18);
    uVar21 = (undefined1)((ulonglong)uVar1 >> 0x10);
    uVar3 = (ushort)(((uint7)bVar22 << 0x30) >> 0x28);
    uVar7 = CONCAT21(uVar3,uVar21);
    uVar4 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)((ulonglong)uVar1 >> 8));
    uVar18 = (ushort)(byte)uVar1;
    uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x20) << 0x30) >> 0x28);
    uVar8 = CONCAT21(uVar17,bVar22);
    uVar14 = (ushort)((ulonglong)uVar1 >> 8);
    uVar5 = CONCAT43((int)(((uint7)uVar8 << 0x20) >> 0x18),CONCAT12(uVar21,uVar14));
    uVar6 = CONCAT52((int5)((uint7)uVar5 >> 0x10),uVar14);
    uVar14 = (ushort)((short)uVar27 * in_MM6_Wa + sVar19 + (short)DAT_6709a790 +
                     (uVar14 & 0xff) * (short)uVar11 + uVar18 * in_MM5_Wa) >> 6;
    uVar15 = (ushort)((short)(uVar27 >> 0x10) * in_MM6_Wb + sVar20 * sVar23 +
                      (short)((ulonglong)DAT_6709a790 >> 0x10) +
                     (short)((uint7)uVar5 >> 0x10) * sVar23 + (short)uVar4 * in_MM5_Wb) >> 6;
    uVar16 = (ushort)((short)(uVar27 >> 0x20) * in_MM6_Wc + (short)uVar9 * sVar24 +
                      (short)((ulonglong)DAT_6709a790 >> 0x20) +
                     (short)uVar8 * sVar24 + (short)uVar7 * in_MM5_Wc) >> 6;
    uVar17 = (ushort)((short)(uVar27 >> 0x30) * in_MM6_Wd + (ushort)(byte)uVar10 * sVar25 +
                      (short)((ulonglong)DAT_6709a790 >> 0x30) +
                     (uVar17 >> 8) * sVar25 + (uVar3 >> 8) * in_MM5_Wd) >> 6;
    *param_2 = CONCAT13((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                        CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                                 CONCAT11((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                          (0xff < uVar15),
                                          (uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                          (0xff < uVar14))));
    param_2 = param_2 + 4;
    iVar13 = iVar12 + -1;
    bVar2 = 0 < iVar12;
    iVar12 = iVar13;
  } while (iVar13 != 0 && bVar2);
  return;
}


