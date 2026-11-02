/* Module: vidcap30.exe
   Function: FUN_00538980
   Address: 00538980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00538980(double *param_1,double param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = (double)fVar1;
  fVar1 = (float10)fsin((float10)param_2);
  param_1[1] = (double)fVar1;
  return;
}


