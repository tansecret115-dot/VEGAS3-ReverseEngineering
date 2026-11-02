/* Module: vidcap30.exe
   Function: FUN_005389d0
   Address: 005389d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005389d0(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = param_4 * param_4 + param_5 * param_5;
  *param_1 = (param_2 * param_4 + param_3 * param_5) / dVar1;
  param_1[1] = (param_3 * param_4 - param_2 * param_5) / dVar1;
  return;
}


