/* Module: sftrkfx1.dll
   Function: FUN_5cbb4db0
   Address: 5cbb4db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb4db0(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *param_1 = param_4 * param_2 - param_3 * param_5;
  param_1[1] = param_5 * param_2 + param_4 * param_3;
  return;
}


