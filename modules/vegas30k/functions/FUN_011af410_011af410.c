/* Module: vegas30k.dll
   Function: FUN_011af410
   Address: 011af410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011af410(int param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x6b8) = param_2;
  *(undefined4 *)(param_1 + 0x6bc) = param_3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}


