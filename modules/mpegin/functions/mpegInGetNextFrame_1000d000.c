/* Module: mpegin.dll
   Function: mpegInGetNextFrame
   Address: 1000d000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegInGetNextFrame(undefined4 *param_1)

{
  int iVar1;
  
                    /* 0xd000  5  mpegInGetNextFrame */
  if (param_1 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 1;
  }
  *(int *)(param_1[0x4b95] + 0x40) = *(int *)(param_1[0x4b95] + 0x40) + 1;
  iVar1 = param_1[0x4b95];
  if ((int)param_1[10] <= *(int *)(iVar1 + 0x40)) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x40) == *(int *)(iVar1 + 0x30)) {
    FUN_10007490((int)param_1,(undefined4 *)(iVar1 + 0x10 + *(int *)(iVar1 + 0x2c) * 0xc));
    iVar1 = param_1[0x4b95];
    param_1[0x71] = *(undefined4 *)(iVar1 + 0x38);
    param_1[0x70] = *(undefined4 *)(iVar1 + 0x38);
    param_1[0x6f] = *(undefined4 *)(iVar1 + 0x34);
    return 0;
  }
  iVar1 = FUN_10007690(param_1,param_1[0x6f] + 1);
  if (iVar1 != 0) {
    return 1;
  }
  param_1[0x71] = param_1[0x70];
  return 0;
}


