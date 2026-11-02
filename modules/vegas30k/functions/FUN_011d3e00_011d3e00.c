/* Module: vegas30k.dll
   Function: FUN_011d3e00
   Address: 011d3e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011d3e00(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_011ec688;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar2 = param_1 + 0x4d;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x59] = param_2;
  param_1[0x58] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  return param_1;
}


