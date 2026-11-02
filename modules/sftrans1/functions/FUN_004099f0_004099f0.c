/* Module: sftrans1.dll
   Function: FUN_004099f0
   Address: 004099f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004099f0(int param_1,int *param_2)

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


