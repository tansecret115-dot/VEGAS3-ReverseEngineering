/* Module: erv33260.dll
   Function: FUN_670878d0
   Address: 670878d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670878d0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint5 uVar15;
  uint5 uVar17;
  undefined8 uVar16;
  uint5 uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  
  uVar11 = DAT_6709a780;
  uVar10 = DAT_6709a760;
  puVar12 = (undefined4 *)(param_1 - param_3);
  iVar14 = param_4;
  iVar13 = param_4;
  do {
    do {
      uVar1 = *(undefined4 *)((int)puVar12 + param_3 * 2);
      uVar6 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
      sVar19 = (short)((ulonglong)uVar10 >> 0x10);
      sVar20 = (short)((ulonglong)uVar10 >> 0x20);
      sVar21 = (short)((ulonglong)uVar10 >> 0x30);
      uVar2 = *(undefined4 *)((int)puVar12 + param_3);
      uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20),
                              uVar2) >> 0x18);
      uVar17 = (uint5)uVar7 & 0xffffffff00;
      uVar3 = *puVar12;
      uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >> 0x20),
                              uVar3) >> 0x18);
      uVar15 = (uint5)uVar8 & 0xffffffff00;
      uVar4 = *(undefined4 *)((int)puVar12 + param_3 * 3);
      uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20),
                              uVar4) >> 0x18);
      uVar18 = (uint5)uVar9 & 0xffffffff00;
      puVar12 = puVar12 + 1;
      uVar16 = psraw(CONCAT26(((((short)(uVar17 >> 0x18) * sVar21 - (short)(uVar15 >> 0x18)) +
                               (uVar6 >> 8) * sVar21 * 2) - (short)(uVar18 >> 0x18)) +
                              (short)((ulonglong)uVar11 >> 0x30),
                              CONCAT24(((((short)(uVar17 >> 8) * sVar20 - (short)(uVar15 >> 8)) +
                                        (short)(CONCAT25(uVar6,CONCAT14((char)((uint)uVar1 >> 0x10),
                                                                        uVar1)) >> 0x20) * sVar20 *
                                        2) - (short)(uVar18 >> 8)) +
                                       (short)((ulonglong)uVar11 >> 0x20),
                                       CONCAT22((((((ushort)(CONCAT43(uVar7,CONCAT12((char)((uint)
                                                  uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff) *
                                                  sVar19 - ((ushort)CONCAT41(uVar8,(char)((uint)
                                                  uVar3 >> 8)) & 0xff)) +
                                                 (ushort)(byte)((uint)uVar1 >> 8) * sVar19 * 2) -
                                                ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar4
                                                                                        >> 8),
                                                                                  (ushort)uVar4)) >>
                                                         0x10) & 0xff)) +
                                                (short)((ulonglong)uVar11 >> 0x10),
                                                (((((ushort)uVar2 & 0xff) * (short)uVar10 -
                                                  (ushort)(byte)uVar3) +
                                                 (ushort)(byte)uVar1 * (short)uVar10 * 2) -
                                                ((ushort)uVar4 & 0xff)) + (short)uVar11))),4);
      sVar19 = (short)uVar16;
      sVar20 = (short)((ulonglong)uVar16 >> 0x10);
      sVar21 = (short)((ulonglong)uVar16 >> 0x20);
      sVar5 = (short)((ulonglong)uVar16 >> 0x30);
      *param_2 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                          (0xff < sVar5),
                          CONCAT12((0 < sVar21) * (sVar21 < 0x100) *
                                   (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar21),
                                   CONCAT11((0 < sVar20) * (sVar20 < 0x100) *
                                            (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar20),
                                            (0 < sVar19) * (sVar19 < 0x100) * (char)uVar16 -
                                            (0xff < sVar19))));
      param_2 = param_2 + 1;
      iVar14 = iVar14 + -4;
    } while (iVar14 != 0);
    puVar12 = (undefined4 *)((int)puVar12 + (param_3 - param_4));
    param_2 = (undefined4 *)((int)param_2 + (0x10 - param_4));
    iVar13 = iVar13 + -1;
    iVar14 = param_4;
  } while (iVar13 != 0);
  return;
}


