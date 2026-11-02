/* Module: vidcap30.exe
   Function: FUN_004686b0
   Address: 004686b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_004686b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0057c2e0(param_2,param_3,(LPCRITICAL_SECTION)(param_1 + 0x16),&DAT_00592830,param_4);
  param_1[0x14] = &PTR_LAB_00592a90;
  param_1[0x15] = &PTR_LAB_00592a6c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  param_1[0x32] = 0;
  param_1[0x3a] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *param_1 = &PTR_LAB_00592a48;
  param_1[3] = &PTR_LAB_00592a0c;
  param_1[4] = &PTR_LAB_005929f8;
  param_1[0x14] = &PTR_LAB_005929c4;
  param_1[0x15] = &PTR_LAB_005929a0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  return param_1;
}


