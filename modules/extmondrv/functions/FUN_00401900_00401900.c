/* Module: extmondrv.dll
   Function: FUN_00401900
   Address: 00401900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00401900(undefined4 *param_1)

{
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x19] = 0;
  param_1[1] = 1;
  *param_1 = &PTR_LAB_0044d660;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  param_1[0x12] = 0xc0c01f40;
  param_1[0x13] = 0xc0c01f40;
  param_1[0x14] = 0xffa0ff3f;
  param_1[0x15] = 0xffa0ff3f;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return param_1;
}


