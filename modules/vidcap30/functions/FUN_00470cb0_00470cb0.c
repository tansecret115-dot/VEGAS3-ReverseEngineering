/* Module: vidcap30.exe
   Function: FUN_00470cb0
   Address: 00470cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00470cb0(undefined4 *param_1)

{
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0xd8] = 0;
  param_1[0xda] = 0xffffffff;
  *param_1 = 6;
  param_1[0x42] = 1;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = 0xffffffff;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x53] = DAT_005b6580;
  DAT_005b6580 = DAT_005b6580 + 1;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = param_1[0x49] | 0x30;
  return;
}


