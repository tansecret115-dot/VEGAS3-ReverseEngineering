/* Module: sftrans1.dll
   Function: FUN_004a5000
   Address: 004a5000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a5000(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  
  param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  dVar1 = *param_3 - *param_2;
  if (ABS(dVar1) <= _DAT_00557d70) {
    *param_1 = dVar1 * param_4 + *param_2;
    return 0;
  }
  if (dVar1 <= _DAT_00555910) {
    dVar1 = (dVar1 + _DAT_00557d68) * param_4 + *param_2;
  }
  else {
    dVar1 = *param_2 + _DAT_00557d68 + (dVar1 - _DAT_00557d68) * param_4;
  }
  *param_1 = dVar1;
  if (_DAT_00557d68 < *param_1) {
    *param_1 = *param_1 - _DAT_00557d68;
  }
  return 0;
}


