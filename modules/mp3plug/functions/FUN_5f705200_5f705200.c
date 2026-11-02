/* Module: mp3plug.dll
   Function: FUN_5f705200
   Address: 5f705200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f705200(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0xc));
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


