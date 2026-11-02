/* Module: vegas30k.dll
   Function: FUN_011c5920
   Address: 011c5920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011c5920(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[0xf] = param_2;
  param_1[0x1c] = param_3;
  param_1[0x6b] = param_1 + 0x61;
  *param_1 = &PTR_LAB_011ec268;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x10] = 0;
  return;
}


