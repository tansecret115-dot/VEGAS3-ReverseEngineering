/* Module: erv33260.dll
   Function: FUN_67087cc0
   Address: 67087cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67087cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_EAX;
  ushort uVar4;
  ushort uVar5;
  short sVar7;
  ushort uVar8;
  uint5 uVar6;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  ushort uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short in_MM5_Wa;
  short in_MM5_Wb;
  short in_MM5_Wc;
  short in_MM5_Wd;
  short in_MM6_Wa;
  short in_MM6_Wb;
  short in_MM6_Wc;
  short in_MM6_Wd;
  
  uVar1 = *param_1;
  uVar2 = *(undefined4 *)((int)param_1 + in_EAX);
  uVar10 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                >> 0x20),uVar2) >> 0x18);
  uVar6 = (uint5)uVar3 & 0xffffffff00;
  uVar15 = (ushort)(CONCAT43(uVar3,CONCAT12((char)((uint)uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff
  ;
  uVar12 = (ushort)uVar2 & 0xff;
  sVar7 = (short)(uVar6 >> 8);
  sVar9 = (short)(uVar6 >> 0x18);
  uVar2 = *(undefined4 *)((int)param_1 + in_EAX * 2);
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                >> 0x20),uVar2) >> 0x18);
  uVar6 = (uint5)uVar3 & 0xffffffff00;
  uVar11 = (ushort)CONCAT41(uVar3,(char)((uint)uVar2 >> 8)) & 0xff;
  sVar13 = (short)(uVar6 >> 8);
  sVar14 = (short)(uVar6 >> 0x18);
  sVar16 = (short)DAT_6709a750;
  sVar17 = (short)((ulonglong)DAT_6709a750 >> 0x10);
  sVar18 = (short)((ulonglong)DAT_6709a750 >> 0x20);
  sVar19 = (short)((ulonglong)DAT_6709a750 >> 0x30);
  uVar4 = (ushort)(uVar12 * in_MM6_Wa + (ushort)(byte)uVar1 * in_MM5_Wa + sVar16) >> 3;
  uVar5 = (ushort)(uVar15 * in_MM6_Wb + (ushort)(byte)((uint)uVar1 >> 8) * in_MM5_Wb + sVar17) >> 3;
  uVar8 = (ushort)(sVar7 * in_MM6_Wc +
                   (short)(CONCAT25(uVar10,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >> 0x20) *
                   in_MM5_Wc + sVar18) >> 3;
  uVar10 = (ushort)(sVar9 * in_MM6_Wd + (uVar10 >> 8) * in_MM5_Wd + sVar19) >> 3;
  *param_2 = CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                      CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                               CONCAT11((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5),
                                        (uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 -
                                        (0xff < uVar4))));
  uVar10 = (ushort)((ushort)(byte)uVar2 * in_MM6_Wa + uVar12 * in_MM5_Wa + sVar16) >> 3;
  uVar12 = (ushort)(uVar11 * in_MM6_Wb + uVar15 * in_MM5_Wb + sVar17) >> 3;
  uVar4 = (ushort)(sVar13 * in_MM6_Wc + sVar7 * in_MM5_Wc + sVar18) >> 3;
  uVar15 = (ushort)(sVar14 * in_MM6_Wd + sVar9 * in_MM5_Wd + sVar19) >> 3;
  param_2[4] = CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                        CONCAT12((uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 - (0xff < uVar4),
                                 CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                          (0xff < uVar12),
                                          (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                          (0xff < uVar10))));
  uVar1 = *(undefined4 *)((int)param_1 + in_EAX * 3);
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                >> 0x20),uVar1) >> 0x18);
  uVar6 = (uint5)uVar3 & 0xffffffff00;
  uVar15 = (ushort)(CONCAT43(uVar3,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) & 0xff
  ;
  uVar12 = (ushort)uVar1 & 0xff;
  sVar7 = (short)(uVar6 >> 8);
  sVar9 = (short)(uVar6 >> 0x18);
  uVar1 = param_1[in_EAX];
  uVar10 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
  uVar4 = (ushort)(uVar12 * in_MM6_Wa + (ushort)(byte)uVar2 * in_MM5_Wa + sVar16) >> 3;
  uVar5 = (ushort)(uVar15 * in_MM6_Wb + uVar11 * in_MM5_Wb + sVar17) >> 3;
  uVar8 = (ushort)(sVar7 * in_MM6_Wc + sVar13 * in_MM5_Wc + sVar18) >> 3;
  uVar11 = (ushort)(sVar9 * in_MM6_Wd + sVar14 * in_MM5_Wd + sVar19) >> 3;
  param_2[8] = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                        CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                 CONCAT11((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                          (0xff < uVar5),
                                          (uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 -
                                          (0xff < uVar4))));
  uVar12 = (ushort)(((ushort)uVar1 & 0xff) * in_MM6_Wa + uVar12 * in_MM5_Wa + sVar16) >> 3;
  uVar4 = (ushort)((ushort)(byte)((uint)uVar1 >> 8) * in_MM6_Wb + uVar15 * in_MM5_Wb + sVar17) >> 3;
  uVar15 = (ushort)((short)(CONCAT25(uVar10,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >> 0x20) *
                    in_MM6_Wc + sVar7 * in_MM5_Wc + sVar18) >> 3;
  uVar10 = (ushort)((uVar10 >> 8) * in_MM6_Wd + sVar9 * in_MM5_Wd + sVar19) >> 3;
  param_2[0xc] = CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                          CONCAT12((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT11((uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 -
                                             (0xff < uVar4),
                                             (uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                             (0xff < uVar12))));
  return;
}


