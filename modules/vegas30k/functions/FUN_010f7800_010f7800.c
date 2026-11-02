/* Module: vegas30k.dll
   Function: FUN_010f7800
   Address: 010f7800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f7800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(double *)(param_1 + 2) = -param_4;
  return;
}


