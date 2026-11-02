/* Module: aviplug.dll
   Function: FUN_5f96da00
   Address: 5f96da00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96da00(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (param_2[3] + param_2[4] + *param_2 + param_2[7]) * _DAT_5f9f4218;
  dVar2 = (param_2[2] + param_2[1] + param_2[5] + param_2[6]) * _DAT_5f9f4218;
  *param_1 = (dVar2 + dVar1) * _DAT_5f9d7ca0;
  param_1[4] = (dVar1 - dVar2) * _DAT_5f9d7ca0;
  dVar1 = ((*param_2 + param_2[7]) - param_2[3]) - param_2[4];
  dVar3 = ((param_2[1] + param_2[6]) - param_2[2]) - param_2[5];
  dVar2 = _DAT_5f9f4230 * dVar1;
  param_1[6] = (dVar2 - (dVar3 + dVar1) * _DAT_5f9f4220) * _DAT_5f9d7ca0;
  param_1[2] = ((dVar3 - dVar1) * _DAT_5f9f4228 + dVar2) * _DAT_5f9d7ca0;
  dVar1 = _DAT_5f9f4250 * (*param_2 - param_2[7]);
  dVar2 = (*param_2 - param_2[7]) * _DAT_5f9f4238;
  dVar4 = _DAT_5f9f4250 * (param_2[1] - param_2[6]);
  dVar7 = _DAT_5f9f4238 * (param_2[1] - param_2[6]);
  dVar8 = _DAT_5f9f4250 * (param_2[2] - param_2[5]);
  dVar3 = _DAT_5f9f4238 * (param_2[2] - param_2[5]);
  dVar5 = _DAT_5f9f4250 * (param_2[3] - param_2[4]);
  dVar6 = _DAT_5f9f4238 * (param_2[3] - param_2[4]);
  param_1[1] = (((dVar4 + dVar3 + dVar7) - dVar8) * _DAT_5f9f4218 + dVar5 + dVar2) * _DAT_5f9d7ca0;
  param_1[7] = ((((dVar4 - dVar7) + dVar8 + dVar3) * _DAT_5f9f4218 + dVar1) - dVar6) * _DAT_5f9d7ca0
  ;
  param_1[3] = (((((dVar1 + dVar2) - dVar6) + dVar5) * _DAT_5f9f4218 - dVar4) - dVar3) *
               _DAT_5f9d7ca0;
  param_1[5] = ((((dVar2 - dVar1) + dVar5 + dVar6) * _DAT_5f9f4218 - dVar7) + dVar8) * _DAT_5f9d7ca0
  ;
  return;
}


