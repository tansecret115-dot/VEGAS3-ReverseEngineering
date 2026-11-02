/* Module: extmondrv.dll
   Function: FUN_00401520
   Address: 00401520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00401520(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0044d628;
  param_1[1] = 1;
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return param_1;
}


