/* Module: aifplug.dll
   Function: FUN_5fbd35e0
   Address: 5fbd35e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5fbd35e0(int param_1)

{
  LONG *lpAddend;
  
  lpAddend = (LONG *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    InterlockedDecrement(lpAddend);
    if (*lpAddend != 0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
      return *lpAddend;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
  return 0;
}


