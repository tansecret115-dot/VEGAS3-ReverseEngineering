/* Module: rmbe3260.dll
   Function: FUN_6603ec50
   Address: 6603ec50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603ec50(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x8e));
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


