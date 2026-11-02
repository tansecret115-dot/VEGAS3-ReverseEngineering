/* Module: vegas30k.dll
   Function: FUN_010afa30
   Address: 010afa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010afa30(int *param_1,int *param_2,int param_3,int param_4)

{
  *param_1 = param_3 - *param_2 / 2;
  param_1[1] = param_4 - param_2[1] / 2;
  param_1[2] = *param_1 + *param_2;
  param_1[3] = param_1[1] + param_2[1];
  return;
}


