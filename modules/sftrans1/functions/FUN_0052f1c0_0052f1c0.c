/* Module: sftrans1.dll
   Function: FUN_0052f1c0
   Address: 0052f1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f1c0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    return;
  }
  *param_1 = param_2[2];
  param_1[2] = param_2[3];
  param_1[1] = param_2[4];
  param_1[3] = param_2[5];
  return;
}


