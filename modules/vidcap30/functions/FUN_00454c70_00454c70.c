/* Module: vidcap30.exe
   Function: FUN_00454c70
   Address: 00454c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454c70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00454cb0(param_1,1);
    }
    *(int *)(param_1 + 0x28) = param_2;
    if (param_2 != 0) {
      FUN_00454cb0(param_1,0);
    }
  }
  return;
}


