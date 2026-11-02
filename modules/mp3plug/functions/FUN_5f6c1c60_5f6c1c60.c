/* Module: mp3plug.dll
   Function: FUN_5f6c1c60
   Address: 5f6c1c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c1c60(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = param_4 * param_4 + param_5 * param_5;
  *param_1 = (param_2 * param_4 + param_3 * param_5) / dVar1;
  param_1[1] = (param_3 * param_4 - param_2 * param_5) / dVar1;
  return;
}


