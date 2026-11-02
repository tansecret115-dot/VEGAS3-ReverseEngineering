/* Module: vidpcore.dll
   Function: FUN_5de0a5b0
   Address: 5de0a5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de0a5b0(int param_1,int *param_2)

{
  if (*(short *)(param_1 + 2) == -1) {
    *param_2 = (int)*(short *)(param_1 + 0x16);
    param_2[1] = (int)*(short *)(param_1 + 0x18);
    return;
  }
  *param_2 = (int)*(short *)(param_1 + 0xe);
  param_2[1] = (int)*(short *)(param_1 + 0x10);
  return;
}


