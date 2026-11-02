/* Module: sfpagepeel.dll
   Function: FUN_00414de0
   Address: 00414de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00414de0(int *param_1,int *param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (double *)0x0)) {
    return 0;
  }
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  *param_3 = ((double)*param_1 - (double)*param_2) / (double)(param_2[2] - *param_2);
  param_3[1] = ((double)param_1[1] - (double)param_2[1]) / (double)(iVar1 - iVar2);
  dVar3 = _DAT_0046fdc8;
  if ((_DAT_0046fdc8 <= *param_3) && (dVar3 = _DAT_0046fdc0, *param_3 <= _DAT_0046fdc0)) {
    dVar3 = *param_3;
  }
  *param_3 = dVar3;
  if (_DAT_0046fdc8 <= param_3[1]) {
    if (param_3[1] <= _DAT_0046fdc0) {
      param_3[1] = param_3[1];
      return 1;
    }
    param_3[1] = _DAT_0046fdc0;
    return 1;
  }
  param_3[1] = _DAT_0046fdc8;
  return 1;
}


