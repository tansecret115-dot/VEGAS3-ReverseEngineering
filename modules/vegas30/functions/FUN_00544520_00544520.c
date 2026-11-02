/* Module: vegas30.exe
   Function: FUN_00544520
   Address: 00544520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00544520(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x76] = 0;
  *param_1 = &PTR_LAB_0061aae4;
  param_1[0xa2] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x77] = 0;
  puVar2 = param_1 + 6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[8] = 0;
  param_1[0x80] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 1;
  param_1[0x7e] = 0;
  param_1[0x81] = 0x3ff00000;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0xffffffff;
  param_1[0xa1] = 0;
  puVar2 = param_1 + 0x12;
  for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


