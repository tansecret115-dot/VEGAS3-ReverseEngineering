/* Module: sfmarket2.dll
   Function: FUN_0040f600
   Address: 0040f600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0040f600(undefined4 *param_1)

{
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_00495f84;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}


