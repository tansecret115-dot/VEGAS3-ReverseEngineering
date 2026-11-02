/* Module: vegas30.exe
   Function: FUN_005efda0
   Address: 005efda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005efda0(undefined4 *param_1)

{
  param_1[0x42] = 1;
  param_1[0x4a] = 1;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x132] = 0xffffffff;
  param_1[0x134] = 0;
  *param_1 = 8;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x133] = 0xffffffff;
  param_1[0x135] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x59] = DAT_00646de0;
  DAT_00646de0 = DAT_00646de0 + 1;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4d] = param_1[0x4d] | 0x30;
  return;
}


