/* Module: aviplug.dll
   Function: FUN_5f96e6d0
   Address: 5f96e6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96e6d0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = _DAT_5f9f4218 * param_2[0x20] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4218 * param_2[0x30] * _DAT_5f9d7ca0;
  dVar4 = _DAT_5f9f4218 * *param_2 * _DAT_5f9d7ca0;
  dVar5 = _DAT_5f9f4218 * param_2[0x10] * _DAT_5f9d7ca0;
  dVar2 = dVar3 + dVar1;
  param_1[0x30] = dVar2;
  *param_1 = dVar2;
  dVar1 = dVar1 - dVar3;
  param_1[0x20] = dVar1;
  param_1[0x10] = dVar1;
  dVar1 = dVar5 + dVar4;
  param_1[8] = dVar1;
  dVar4 = dVar4 - dVar5;
  param_1[0x28] = dVar4;
  param_1[0x18] = dVar4;
  dVar2 = _DAT_5f9f4220 * param_2[0x28] * _DAT_5f9d7ca0 +
          _DAT_5f9f4228 * param_2[0x38] * _DAT_5f9d7ca0;
  dVar3 = _DAT_5f9f4228 * param_2[0x28] * _DAT_5f9d7ca0 -
          _DAT_5f9f4220 * param_2[0x38] * _DAT_5f9d7ca0;
  *param_1 = dVar2 + *param_1;
  param_1[0x10] = dVar3 + param_1[0x10];
  param_1[0x20] = param_1[0x20] - dVar3;
  param_1[0x30] = param_1[0x30] - dVar2;
  dVar6 = _DAT_5f9f4228 * param_2[0x18] * _DAT_5f9d7ca0 + _DAT_5f9f4220 * param_2[8] * _DAT_5f9d7ca0
  ;
  dVar5 = _DAT_5f9f4228 * param_2[8] * _DAT_5f9d7ca0 - _DAT_5f9f4220 * param_2[0x18] * _DAT_5f9d7ca0
  ;
  dVar2 = dVar1 + dVar6;
  param_1[8] = dVar2;
  dVar3 = dVar4 + dVar5;
  dVar4 = dVar4 - dVar5;
  param_1[0x38] = dVar1 - dVar6;
  param_1[8] = param_1[8] - *param_1;
  *param_1 = dVar2 + *param_1;
  param_1[0x18] = dVar3 - param_1[0x10];
  param_1[0x10] = dVar3 + param_1[0x10];
  param_1[0x28] = dVar4 - param_1[0x20];
  param_1[0x20] = dVar4 + param_1[0x20];
  dVar1 = param_1[0x38];
  param_1[0x38] = param_1[0x38] - param_1[0x30];
  param_1[0x30] = dVar1 + param_1[0x30];
  return;
}


