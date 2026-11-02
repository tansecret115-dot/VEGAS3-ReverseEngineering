/* Module: vegas30k.dll
   Function: FUN_010f8260
   Address: 010f8260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f8260(double *param_1,double param_2,double param_3,double param_4)

{
  *param_1 = param_3 * param_2;
  param_1[1] = param_4 * param_2;
  return;
}


