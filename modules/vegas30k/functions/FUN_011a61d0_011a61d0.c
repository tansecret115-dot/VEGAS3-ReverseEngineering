/* Module: vegas30k.dll
   Function: FUN_011a61d0
   Address: 011a61d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011a61d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_LAB_011eaf04;
  param_1[1] = 0;
  param_1[2] = 5;
  param_1[3] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0x3ff00000;
  param_1[0x37] = 0x3ff00000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x400;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x20;
  FUN_011a6bd0();
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}


