/* Module: vegas30k.dll
   Function: FUN_011d4ff0
   Address: 011d4ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011d4ff0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x66] = 0;
  *param_1 = &PTR_LAB_011ec6d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[99] = 0xf0;
  param_1[100] = 500000;
  param_1[0x67] = 0x3ff00000;
  param_1[0x68] = 0;
  puVar2 = param_1 + 0x50;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x4f] = param_2;
  param_1[0x61] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  return param_1;
}


