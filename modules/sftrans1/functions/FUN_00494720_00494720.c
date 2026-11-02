/* Module: sftrans1.dll
   Function: FUN_00494720
   Address: 00494720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00494720(int param_1,double *param_2,int param_3,int param_4,double param_5,double param_6)

{
  if (((param_3 <= param_1) && (param_1 <= param_4)) && (param_2 != (double *)0x0)) {
    *param_2 = ((param_6 - param_5) * (double)(param_1 - param_3)) / (double)(param_4 - param_3) +
               param_5;
    return 1;
  }
  return 0;
}


