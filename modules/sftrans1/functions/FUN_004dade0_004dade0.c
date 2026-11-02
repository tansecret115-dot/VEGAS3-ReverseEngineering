/* Module: sftrans1.dll
   Function: FUN_004dade0
   Address: 004dade0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dade0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004dad90(param_1);
  *param_1 = (float)((float10)*param_1 / fVar1);
  param_1[1] = (float)((float10)param_1[1] / fVar1);
  param_1[2] = (float)((float10)param_1[2] / fVar1);
  return;
}


