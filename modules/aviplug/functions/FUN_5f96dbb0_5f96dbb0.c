/* Module: aviplug.dll
   Function: FUN_5f96dbb0
   Address: 5f96dbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96dbb0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (param_2[0x18] + param_2[0x20] + *param_2 + param_2[0x38]) * _DAT_5f9f4218;
  dVar2 = (param_2[0x10] + param_2[8] + param_2[0x28] + param_2[0x30]) * _DAT_5f9f4218;
  *param_1 = (dVar2 + dVar1) * _DAT_5f9d7ca0;
  param_1[0x20] = (dVar1 - dVar2) * _DAT_5f9d7ca0;
  dVar1 = ((*param_2 + param_2[0x38]) - param_2[0x18]) - param_2[0x20];
  dVar3 = ((param_2[8] + param_2[0x30]) - param_2[0x10]) - param_2[0x28];
  dVar2 = _DAT_5f9f4230 * dVar1;
  param_1[0x30] = (dVar2 - (dVar3 + dVar1) * _DAT_5f9f4220) * _DAT_5f9d7ca0;
  param_1[0x10] = ((dVar3 - dVar1) * _DAT_5f9f4228 + dVar2) * _DAT_5f9d7ca0;
  dVar1 = _DAT_5f9f4250 * (*param_2 - param_2[0x38]);
  dVar2 = (*param_2 - param_2[0x38]) * _DAT_5f9f4238;
  dVar4 = _DAT_5f9f4250 * (param_2[8] - param_2[0x30]);
  dVar7 = _DAT_5f9f4238 * (param_2[8] - param_2[0x30]);
  dVar8 = _DAT_5f9f4250 * (param_2[0x10] - param_2[0x28]);
  dVar3 = _DAT_5f9f4238 * (param_2[0x10] - param_2[0x28]);
  dVar5 = _DAT_5f9f4250 * (param_2[0x18] - param_2[0x20]);
  dVar6 = _DAT_5f9f4238 * (param_2[0x18] - param_2[0x20]);
  param_1[8] = (((dVar4 + dVar3 + dVar7) - dVar8) * _DAT_5f9f4218 + dVar5 + dVar2) * _DAT_5f9d7ca0;
  param_1[0x38] =
       ((((dVar4 - dVar7) + dVar8 + dVar3) * _DAT_5f9f4218 + dVar1) - dVar6) * _DAT_5f9d7ca0;
  param_1[0x18] =
       (((((dVar1 + dVar2) - dVar6) + dVar5) * _DAT_5f9f4218 - dVar4) - dVar3) * _DAT_5f9d7ca0;
  param_1[0x28] =
       ((((dVar2 - dVar1) + dVar5 + dVar6) * _DAT_5f9f4218 - dVar7) + dVar8) * _DAT_5f9d7ca0;
  return;
}


