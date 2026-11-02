/* Module: sfppack1.dll
   Function: FUN_5cdbf900
   Address: 5cdbf900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdbf900(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *param_1 = param_4 * param_2 - param_5 * param_3;
  param_1[1] = param_3 * param_4 + param_5 * param_2;
  return;
}


