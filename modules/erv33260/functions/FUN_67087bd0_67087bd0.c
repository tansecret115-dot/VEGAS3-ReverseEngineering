/* Module: erv33260.dll
   Function: FUN_67087bd0
   Address: 67087bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67087bd0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_EAX;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short in_MM5_Wa;
  short in_MM5_Wb;
  short in_MM5_Wc;
  short in_MM5_Wd;
  short in_MM6_Wa;
  short in_MM6_Wb;
  short in_MM6_Wc;
  short in_MM6_Wd;
  
  uVar1 = *param_1;
  bVar8 = (byte)((ulonglong)uVar1 >> 0x18);
  bVar7 = (byte)((ulonglong)uVar1 >> 0x10);
  uVar9 = (ushort)(((uint7)bVar8 << 0x30) >> 0x28);
  uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x20) << 0x30) >> 0x28);
  uVar2 = *(undefined8 *)((int)param_1 + in_EAX);
  bVar13 = (byte)((ulonglong)uVar2 >> 0x18);
  uVar10 = (ushort)(((uint7)bVar13 << 0x30) >> 0x28);
  bVar12 = (byte)((ulonglong)uVar2 >> 0x10);
  uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x20) << 0x30) >> 0x28);
  sVar14 = (short)DAT_6709a750;
  sVar15 = (short)((ulonglong)DAT_6709a750 >> 0x10);
  sVar16 = (short)((ulonglong)DAT_6709a750 >> 0x20);
  sVar17 = (short)((ulonglong)DAT_6709a750 >> 0x30);
  uVar3 = (ushort)(((ushort)((ulonglong)uVar1 >> 8) & 0xff) * in_MM6_Wa +
                   (ushort)(byte)uVar1 * in_MM5_Wa + sVar14) >> 3;
  uVar4 = (ushort)((ushort)bVar7 * in_MM6_Wb + (ushort)(byte)((ulonglong)uVar1 >> 8) * in_MM5_Wb +
                  sVar15) >> 3;
  uVar5 = (ushort)((short)CONCAT21(uVar6,bVar8) * in_MM6_Wc +
                   (short)CONCAT21(uVar9,bVar7) * in_MM5_Wc + sVar16) >> 3;
  uVar6 = (ushort)((uVar6 >> 8) * in_MM6_Wd + (uVar9 >> 8) * in_MM5_Wd + sVar17) >> 3;
  *param_2 = CONCAT13((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6),
                      CONCAT12((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5),
                               CONCAT11((uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 -
                                        (0xff < uVar4),
                                        (uVar3 != 0) * (uVar3 < 0x100) * (char)uVar3 -
                                        (0xff < uVar3))));
  uVar6 = (ushort)(((ushort)((ulonglong)uVar2 >> 8) & 0xff) * in_MM6_Wa +
                   (ushort)(byte)uVar2 * in_MM5_Wa + sVar14) >> 3;
  uVar9 = (ushort)((ushort)bVar12 * in_MM6_Wb + (ushort)(byte)((ulonglong)uVar2 >> 8) * in_MM5_Wb +
                  sVar15) >> 3;
  uVar3 = (ushort)((short)CONCAT21(uVar11,bVar13) * in_MM6_Wc +
                   (short)CONCAT21(uVar10,bVar12) * in_MM5_Wc + sVar16) >> 3;
  uVar10 = (ushort)((uVar11 >> 8) * in_MM6_Wd + (uVar10 >> 8) * in_MM5_Wd + sVar17) >> 3;
  param_2[4] = CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                        CONCAT12((uVar3 != 0) * (uVar3 < 0x100) * (char)uVar3 - (0xff < uVar3),
                                 CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                          (0xff < uVar9),
                                          (uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 -
                                          (0xff < uVar6))));
  uVar1 = *(undefined8 *)((int)param_1 + in_EAX * 2);
  bVar8 = (byte)((ulonglong)uVar1 >> 0x18);
  uVar6 = (ushort)(((uint7)bVar8 << 0x30) >> 0x28);
  bVar7 = (byte)((ulonglong)uVar1 >> 0x10);
  uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x20) << 0x30) >> 0x28);
  uVar2 = *(undefined8 *)((int)param_1 + in_EAX * 3);
  bVar13 = (byte)((ulonglong)uVar2 >> 0x18);
  uVar11 = (ushort)(((uint7)bVar13 << 0x30) >> 0x28);
  bVar12 = (byte)((ulonglong)uVar2 >> 0x10);
  uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x20) << 0x30) >> 0x28);
  uVar3 = (ushort)(((ushort)((ulonglong)uVar1 >> 8) & 0xff) * in_MM6_Wa +
                   ((ushort)uVar1 & 0xff) * in_MM5_Wa + sVar14) >> 3;
  uVar4 = (ushort)((ushort)bVar7 * in_MM6_Wb + (ushort)(byte)((ulonglong)uVar1 >> 8) * in_MM5_Wb +
                  sVar15) >> 3;
  uVar5 = (ushort)((short)CONCAT21(uVar10,bVar8) * in_MM6_Wc +
                   (short)CONCAT21(uVar6,bVar7) * in_MM5_Wc + sVar16) >> 3;
  uVar6 = (ushort)((uVar10 >> 8) * in_MM6_Wd + (uVar6 >> 8) * in_MM5_Wd + sVar17) >> 3;
  param_2[8] = CONCAT13((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6),
                        CONCAT12((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5),
                                 CONCAT11((uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 -
                                          (0xff < uVar4),
                                          (uVar3 != 0) * (uVar3 < 0x100) * (char)uVar3 -
                                          (0xff < uVar3))));
  uVar6 = (ushort)(((ushort)((ulonglong)uVar2 >> 8) & 0xff) * in_MM6_Wa +
                   ((ushort)uVar2 & 0xff) * in_MM5_Wa + sVar14) >> 3;
  uVar10 = (ushort)((ushort)bVar12 * in_MM6_Wb + (ushort)(byte)((ulonglong)uVar2 >> 8) * in_MM5_Wb +
                   sVar15) >> 3;
  uVar3 = (ushort)((short)CONCAT21(uVar9,bVar13) * in_MM6_Wc +
                   (short)CONCAT21(uVar11,bVar12) * in_MM5_Wc + sVar16) >> 3;
  uVar11 = (ushort)((uVar9 >> 8) * in_MM6_Wd + (uVar11 >> 8) * in_MM5_Wd + sVar17) >> 3;
  param_2[0xc] = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                          CONCAT12((uVar3 != 0) * (uVar3 < 0x100) * (char)uVar3 - (0xff < uVar3),
                                   CONCAT11((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                            (0xff < uVar10),
                                            (uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 -
                                            (0xff < uVar6))));
  return;
}


