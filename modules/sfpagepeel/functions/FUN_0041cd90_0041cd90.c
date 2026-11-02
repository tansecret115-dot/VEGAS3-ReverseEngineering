/* Module: sfpagepeel.dll
   Function: FUN_0041cd90
   Address: 0041cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041cd90(int param_1,int param_2)

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


