/* Module: vidcap30.exe
   Function: FUN_00540cf0
   Address: 00540cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00540cf0(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00544e90(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


