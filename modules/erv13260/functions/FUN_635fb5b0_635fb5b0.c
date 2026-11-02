/* Module: erv13260.dll
   Function: FUN_635fb5b0
   Address: 635fb5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fb5b0(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  return;
}


