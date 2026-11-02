/* Module: vfplugs.dll
   Function: FUN_00401600
   Address: 00401600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401600(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0;
}


