/* Module: vidpcore.dll
   Function: FUN_5de5fe30
   Address: 5de5fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5de5fe30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  puVar2 = param_1 + 0x13;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[4] = 300;
  param_1[5] = 300;
  param_1[7] = 0x4e1;
  *param_1 = &PTR_FUN_5df1ecac;
  param_1[0xb] = &PTR_LAB_5df1eca0;
  param_1[0x12] = param_2;
  return param_1;
}


