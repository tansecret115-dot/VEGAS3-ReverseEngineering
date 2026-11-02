/* Module: vidcap30.exe
   Function: FUN_004ad090
   Address: 004ad090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad090(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x44);
    return;
  }
  if (*(int *)(param_1 + 0x48) < param_2) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x48);
    return;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  return;
}


