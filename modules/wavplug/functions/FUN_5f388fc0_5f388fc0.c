/* Module: wavplug.dll
   Function: FUN_5f388fc0
   Address: 5f388fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f388fc0(int param_1)

{
  LONG *lpAddend;
  
  lpAddend = (LONG *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    InterlockedDecrement(lpAddend);
    if (*lpAddend != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18));
      return *lpAddend;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18));
  return 0;
}


