/* Module: vidpcore.dll
   Function: FUN_5de69070
   Address: 5de69070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de69070(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  
  dVar1 = _DAT_5df18838;
  if ((_DAT_5df18838 <= param_4) && (dVar1 = param_4, _DAT_5df18830 < param_4)) {
    dVar1 = _DAT_5df18830;
  }
  *param_1 = (*param_3 - *param_2) * dVar1 + *param_2;
  dVar1 = _DAT_5df18838;
  if ((_DAT_5df18838 <= param_4) && (dVar1 = param_4, _DAT_5df18830 < param_4)) {
    dVar1 = _DAT_5df18830;
  }
  param_1[1] = (param_3[1] - param_2[1]) * dVar1 + param_2[1];
  dVar1 = _DAT_5df18838;
  if ((_DAT_5df18838 <= param_4) && (dVar1 = param_4, _DAT_5df18830 < param_4)) {
    dVar1 = _DAT_5df18830;
  }
  param_1[2] = (param_3[2] - param_2[2]) * dVar1 + param_2[2];
  dVar1 = _DAT_5df18838;
  if ((_DAT_5df18838 <= param_4) && (dVar1 = param_4, _DAT_5df18830 < param_4)) {
    dVar1 = _DAT_5df18830;
  }
  param_1[3] = (param_3[3] - param_2[3]) * dVar1 + param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return 0;
}


