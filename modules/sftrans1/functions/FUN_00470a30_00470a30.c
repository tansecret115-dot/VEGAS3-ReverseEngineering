/* Module: sftrans1.dll
   Function: FUN_00470a30
   Address: 00470a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00470a30(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  
  dVar1 = _DAT_00555910;
  if ((_DAT_00555910 <= param_4) && (dVar1 = param_4, _DAT_00555908 < param_4)) {
    dVar1 = _DAT_00555908;
  }
  *param_1 = (*param_3 - *param_2) * dVar1 + *param_2;
  dVar1 = _DAT_00555910;
  if ((_DAT_00555910 <= param_4) && (dVar1 = param_4, _DAT_00555908 < param_4)) {
    dVar1 = _DAT_00555908;
  }
  param_1[1] = (param_3[1] - param_2[1]) * dVar1 + param_2[1];
  dVar1 = _DAT_00555910;
  if ((_DAT_00555910 <= param_4) && (dVar1 = param_4, _DAT_00555908 < param_4)) {
    dVar1 = _DAT_00555908;
  }
  param_1[2] = (param_3[2] - param_2[2]) * dVar1 + param_2[2];
  dVar1 = _DAT_00555910;
  if ((_DAT_00555910 <= param_4) && (dVar1 = param_4, _DAT_00555908 < param_4)) {
    dVar1 = _DAT_00555908;
  }
  param_1[3] = (param_3[3] - param_2[3]) * dVar1 + param_2[3];
  dVar1 = _DAT_00555910;
  if ((_DAT_00555910 <= param_4) && (dVar1 = param_4, _DAT_00555908 <= param_4)) {
    dVar1 = _DAT_00555908;
  }
  param_1[4] = (param_3[4] - param_2[4]) * dVar1 + param_2[4];
  if (_DAT_00555910 <= param_4) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    return 0;
  }
  if (param_4 <= _DAT_00555908) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 5);
    return 0;
  }
  if ((*(int *)(param_2 + 5) != 0) && (*(int *)(param_3 + 5) != 0)) {
    *(undefined4 *)(param_1 + 5) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return 0;
}


