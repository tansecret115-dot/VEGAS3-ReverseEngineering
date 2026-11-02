/* Module: sfpublish.dll
   Function: FUN_004203c0
   Address: 004203c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004203c0(undefined4 *param_1)

{
  param_1[8] = 0x80004005;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x12] = 1;
  *param_1 = &PTR_FUN_0043ae1c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return param_1;
}


