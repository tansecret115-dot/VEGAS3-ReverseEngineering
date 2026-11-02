/* Module: mpgvout.001
   Function: FUN_1001b73c
   Address: 1001b73c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_1001b73c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  
  do {
    iVar1 = param_5 * 2 + (int)param_1;
    uVar2 = *param_1;
    uVar3 = *(undefined8 *)(param_5 + (int)param_1);
    uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
    uVar4 = *(undefined8 *)((int)param_1 + 1);
    uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
    uVar5 = *(undefined8 *)((int)param_1 + param_5 + 1);
    uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
    uVar6 = (ushort)((ushort)(byte)uVar2 + ((ushort)uVar3 & 0xff) + (ushort)(byte)uVar4 +
                     ((ushort)uVar5 & 0xff) + 2) >> 2;
    uVar7 = (ushort)((ushort)(byte)((ulonglong)uVar2 >> 8) + (ushort)(byte)((ulonglong)uVar3 >> 8) +
                     (ushort)(byte)((ulonglong)uVar4 >> 8) + (ushort)(byte)((ulonglong)uVar5 >> 8) +
                    2) >> 2;
    uVar8 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) +
                     (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) +
                     (short)CONCAT21(uVar10,(char)((ulonglong)uVar4 >> 0x10)) +
                     (short)CONCAT21(uVar11,(char)((ulonglong)uVar5 >> 0x10)) + 2U) >> 2;
    uVar9 = (ushort)((uVar12 >> 8) + (uVar9 >> 8) + (uVar10 >> 8) + (uVar11 >> 8) + 2) >> 2;
    uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x20) +
                      (ushort)(byte)((ulonglong)uVar4 >> 0x20) +
                      (ushort)(byte)((ulonglong)uVar5 >> 0x20) + 2) >> 2;
    uVar11 = (ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x28) +
                      (ushort)(byte)((ulonglong)uVar4 >> 0x28) +
                      (ushort)(byte)((ulonglong)uVar5 >> 0x28) + 2) >> 2;
    uVar12 = (ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x30) +
                      (ushort)(byte)((ulonglong)uVar4 >> 0x30) +
                      (ushort)(byte)((ulonglong)uVar5 >> 0x30) + 2) >> 2;
    uVar13 = (ushort)((ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                      (ushort)(byte)((ulonglong)uVar3 >> 0x38) +
                      (ushort)(byte)((ulonglong)uVar4 >> 0x38) +
                      (ushort)(byte)((ulonglong)uVar5 >> 0x38) + 2) >> 2;
    *param_2 = CONCAT17((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                        CONCAT16((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                                 CONCAT15((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                          (0xff < uVar11),
                                          CONCAT14((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                                   (0xff < uVar10),
                                                   CONCAT13((uVar9 != 0) * (uVar9 < 0x100) *
                                                            (char)uVar9 - (0xff < uVar9),
                                                            CONCAT12((uVar8 != 0) * (uVar8 < 0x100)
                                                                     * (char)uVar8 - (0xff < uVar8),
                                                                     CONCAT11((uVar7 != 0) *
                                                                              (uVar7 < 0x100) *
                                                                              (char)uVar7 -
                                                                              (0xff < uVar7),
                                                                              (uVar6 != 0) *
                                                                              (uVar6 < 0x100) *
                                                                              (char)uVar6 -
                                                                              (0xff < uVar6))))))));
    param_1 = (undefined8 *)((int)param_1 + param_5);
    param_2 = (undefined8 *)((int)param_2 + param_6);
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return iVar1;
}


