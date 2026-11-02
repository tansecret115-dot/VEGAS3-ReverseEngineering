/* Module: vidcap30.exe
   Function: FUN_00416b00
   Address: 00416b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416b00(undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  _DAT_005bc270 = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  return;
}


