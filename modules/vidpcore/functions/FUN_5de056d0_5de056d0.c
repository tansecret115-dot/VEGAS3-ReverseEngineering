/* Module: vidpcore.dll
   Function: FUN_5de056d0
   Address: 5de056d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de056d0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0;
}


