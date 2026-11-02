/* Module: mp3plug.dll
   Function: FUN_5f693020
   Address: 5f693020
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f693020(int param_1)

{
  LONG *lpAddend;
  
  lpAddend = (LONG *)(param_1 + 0x10);
  InterlockedDecrement(lpAddend);
  if (*lpAddend == 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
  return *lpAddend;
}


