/* Module: oggplug.dll
   Function: FUN_004029f0
   Address: 004029f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004029f0(int param_1)

{
  LONG *lpAddend;
  
  lpAddend = (LONG *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    InterlockedDecrement(lpAddend);
    if (*lpAddend != 0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
      return *lpAddend;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
  return 0;
}


