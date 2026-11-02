/* Module: vegas30k.dll
   Function: FUN_01194d50
   Address: 01194d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01194d50(int param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  *(undefined4 *)(param_1 + 0x7c4) = param_2;
  FUN_01194940();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  return 0;
}


