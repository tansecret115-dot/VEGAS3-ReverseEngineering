/* Module: aviplug.dll
   Function: FUN_5f96e000
   Address: 5f96e000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96e000(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = _DAT_5f9f4218 * *param_2 * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4218 * param_2[4] * _DAT_5f9d7ca0;
  dVar2 = dVar3 + dVar1;
  param_1[7] = dVar2;
  param_1[4] = dVar2;
  param_1[3] = dVar2;
  *param_1 = dVar2;
  dVar1 = dVar1 - dVar3;
  param_1[6] = dVar1;
  param_1[5] = dVar1;
  param_1[2] = dVar1;
  param_1[1] = dVar1;
  dVar1 = _DAT_5f9f4228 * param_2[6] * _DAT_5f9d7ca0 + _DAT_5f9f4220 * param_2[2] * _DAT_5f9d7ca0;
  dVar2 = _DAT_5f9f4228 * param_2[2] * _DAT_5f9d7ca0 - _DAT_5f9f4220 * param_2[6] * _DAT_5f9d7ca0;
  *param_1 = dVar1 + *param_1;
  param_1[1] = dVar2 + param_1[1];
  param_1[2] = param_1[2] - dVar2;
  param_1[3] = param_1[3] - dVar1;
  param_1[4] = param_1[4] - dVar1;
  param_1[5] = param_1[5] - dVar2;
  param_1[6] = dVar2 + param_1[6];
  param_1[7] = dVar1 + param_1[7];
  dVar1 = _DAT_5f9f4238 * param_2[1] * _DAT_5f9d7ca0;
  dVar2 = _DAT_5f9f4240 * param_2[1] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4248 * param_2[1] * _DAT_5f9d7ca0;
  dVar4 = _DAT_5f9f4250 * param_2[1] * _DAT_5f9d7ca0;
  *param_1 = dVar1 + *param_1;
  param_1[1] = dVar2 + param_1[1];
  param_1[2] = dVar3 + param_1[2];
  param_1[3] = dVar4 + param_1[3];
  param_1[4] = param_1[4] - dVar4;
  param_1[5] = param_1[5] - dVar3;
  param_1[6] = param_1[6] - dVar2;
  param_1[7] = param_1[7] - dVar1;
  dVar1 = _DAT_5f9f4238 * param_2[3] * _DAT_5f9d7ca0;
  dVar2 = _DAT_5f9f4240 * param_2[3] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4248 * param_2[3] * _DAT_5f9d7ca0;
  dVar4 = _DAT_5f9f4250 * param_2[3] * _DAT_5f9d7ca0;
  *param_1 = dVar2 + *param_1;
  param_1[1] = param_1[1] - dVar4;
  param_1[2] = param_1[2] - dVar1;
  param_1[3] = param_1[3] - dVar3;
  param_1[4] = dVar3 + param_1[4];
  param_1[5] = dVar1 + param_1[5];
  param_1[6] = dVar4 + param_1[6];
  param_1[7] = param_1[7] - dVar2;
  dVar1 = _DAT_5f9f4238 * param_2[5] * _DAT_5f9d7ca0;
  dVar2 = _DAT_5f9f4240 * param_2[5] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4248 * param_2[5] * _DAT_5f9d7ca0;
  dVar4 = _DAT_5f9f4250 * param_2[5] * _DAT_5f9d7ca0;
  *param_1 = dVar3 + *param_1;
  param_1[1] = param_1[1] - dVar1;
  param_1[2] = dVar4 + param_1[2];
  param_1[3] = dVar2 + param_1[3];
  param_1[4] = param_1[4] - dVar2;
  param_1[5] = param_1[5] - dVar4;
  param_1[6] = dVar1 + param_1[6];
  param_1[7] = param_1[7] - dVar3;
  dVar1 = _DAT_5f9f4238 * param_2[7] * _DAT_5f9d7ca0;
  dVar2 = _DAT_5f9f4240 * param_2[7] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4248 * param_2[7] * _DAT_5f9d7ca0;
  dVar4 = _DAT_5f9f4250 * param_2[7] * _DAT_5f9d7ca0;
  *param_1 = dVar4 + *param_1;
  param_1[1] = param_1[1] - dVar3;
  param_1[2] = dVar2 + param_1[2];
  param_1[3] = param_1[3] - dVar1;
  param_1[4] = dVar1 + param_1[4];
  param_1[5] = param_1[5] - dVar2;
  param_1[6] = dVar3 + param_1[6];
  param_1[7] = param_1[7] - dVar4;
  return;
}


