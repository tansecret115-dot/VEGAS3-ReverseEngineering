/* Module: wmfplug2.dll
   Function: FUN_00403d40
   Address: 00403d40
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00403d40(int param_1)

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


