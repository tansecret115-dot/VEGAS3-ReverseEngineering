/* Module: mp3plug.dll
   Function: FUN_5f6938e0
   Address: 5f6938e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f6938e0(int param_1)

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


