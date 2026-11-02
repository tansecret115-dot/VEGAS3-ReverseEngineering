/* Module: vegas30.exe
   Function: FUN_00438a50
   Address: 00438a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00438a50(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  
  dVar1 = -(param_4[1] - param_5[1]) * (*param_3 - *param_2) +
          --(*param_4 - *param_5) * (param_3[1] - param_2[1]);
  if (dVar1 == _DAT_00610fd8) {
    return 0;
  }
  dVar1 = ((*param_2 - *param_4) * (param_4[1] - param_5[1]) +
          (param_2[1] - param_4[1]) * -(*param_4 - *param_5)) / dVar1;
  *param_1 = (*param_3 - *param_2) * dVar1 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * dVar1 + param_2[1];
  return 1;
}


