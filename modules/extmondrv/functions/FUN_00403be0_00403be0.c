/* Module: extmondrv.dll
   Function: FUN_00403be0
   Address: 00403be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00403be0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[1] = 1;
  *param_1 = &PTR_LAB_0044d808;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return param_1;
}


