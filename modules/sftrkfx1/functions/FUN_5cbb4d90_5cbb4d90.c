/* Module: sftrkfx1.dll
   Function: FUN_5cbb4d90
   Address: 5cbb4d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb4d90(double *param_1,double param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = (double)fVar1;
  fVar1 = (float10)fsin((float10)param_2);
  param_1[1] = (double)fVar1;
  return;
}


