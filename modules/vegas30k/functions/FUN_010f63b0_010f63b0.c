/* Module: vegas30k.dll
   Function: FUN_010f63b0
   Address: 010f63b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f63b0(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = param_4 * param_4 + param_5 * param_5;
  *param_1 = (param_2 * param_4 + param_3 * param_5) / dVar1;
  param_1[1] = (param_3 * param_4 - param_2 * param_5) / dVar1;
  return;
}


