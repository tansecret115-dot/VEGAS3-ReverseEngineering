/* Module: vegas30k.dll
   Function: FUN_01134d80
   Address: 01134d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01134d80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_011e69cc;
  param_1[1] = &PTR_LAB_011e69b8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 1;
  if (param_1 + 0x26 != (undefined4 *)0x0) {
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x2a] = 0;
    param_1[0x27] = 0x3ff00000;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  return;
}


