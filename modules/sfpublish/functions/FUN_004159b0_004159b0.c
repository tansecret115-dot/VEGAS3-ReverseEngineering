/* Module: sfpublish.dll
   Function: FUN_004159b0
   Address: 004159b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004159b0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[4] = 0xffffffff;
  *param_1 = &PTR_FUN_00436978;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x87));
  return param_1;
}


