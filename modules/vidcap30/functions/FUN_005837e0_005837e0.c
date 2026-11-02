/* Module: vidcap30.exe
   Function: FUN_005837e0
   Address: 005837e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005837e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0057c280(param_2,param_3,(LPCRITICAL_SECTION)(param_1 + 0x16),&stack0x0000000c);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  *param_1 = &PTR_FUN_005a6244;
  param_1[3] = &PTR_LAB_005a6208;
  param_1[4] = &PTR_LAB_005a61f4;
  return param_1;
}


