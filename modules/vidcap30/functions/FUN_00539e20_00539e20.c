/* Module: vidcap30.exe
   Function: FUN_00539e20
   Address: 00539e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00539e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(double *)(param_1 + 2) = -param_4;
  return;
}


