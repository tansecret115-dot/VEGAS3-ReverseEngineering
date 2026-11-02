/* Module: vegas30k.dll
   Function: FUN_011b0ec0
   Address: 011b0ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011b0ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[5] = param_2;
  param_1[9] = param_3;
  *param_1 = &PTR_LAB_011eb4e4;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  puVar2 = param_1 + 0x295;
  for (iVar1 = 0x86; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x295] = 0xffffffff;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  *(undefined1 *)(param_1 + 0x2da) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[4] = 0;
  param_1[0x31b] = 0;
  param_1[0x2d7] = 0x7f;
  param_1[0x271] = 2;
  param_1[0x272] = 1;
  return param_1;
}


