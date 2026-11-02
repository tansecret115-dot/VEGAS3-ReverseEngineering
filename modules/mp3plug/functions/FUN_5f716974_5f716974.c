/* Module: mp3plug.dll
   Function: FUN_5f716974
   Address: 5f716974
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f716974(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[0xc] - param_1[0xf];
  fVar4 = (param_1[9] - fVar1) - param_1[0xf];
  fVar2 = param_1[6] - (param_1[9] - fVar1);
  fVar6 = _DAT_5f7652e4 * fVar4;
  fVar8 = param_1[3] - fVar2;
  fVar4 = fVar8 - fVar4;
  fVar8 = *param_1 - fVar8;
  fVar3 = (param_1[0xf] + fVar6 + fVar4) * _DAT_5f7652d8;
  fVar2 = fVar2 * _DAT_5f7652e4;
  fVar7 = fVar1 + fVar2 + fVar8;
  fVar5 = fVar3 + fVar7;
  fVar7 = fVar7 - fVar3;
  fVar3 = ((param_1[0xf] + fVar4) - fVar6) * _DAT_5f7652e0;
  fVar4 = (fVar4 - (param_1[0xf] + param_1[0xf])) * _DAT_5f7652dc;
  param_2[8] = param_2[8] + param_3[8] * fVar5;
  param_2[9] = fVar5 * param_3[9] + param_2[9];
  fVar6 = fVar8 - (fVar1 + fVar1);
  fVar5 = fVar4 + fVar6;
  fVar2 = (fVar8 + fVar1) - fVar2;
  fVar6 = fVar6 - fVar4;
  param_2[7] = param_3[7] * fVar5 + param_2[7];
  fVar1 = fVar3 + fVar2;
  param_2[10] = fVar5 * param_3[10] + param_2[10];
  fVar2 = fVar2 - fVar3;
  param_2[6] = param_3[6] * fVar1 + param_2[6];
  param_2[0xb] = fVar1 * param_3[0xb] + param_2[0xb];
  *param_2 = *param_3 * fVar2 + *param_2;
  param_2[5] = fVar2 * param_3[5] + param_2[5];
  param_2[1] = param_3[1] * fVar6 + param_2[1];
  param_2[4] = fVar6 * param_3[4] + param_2[4];
  param_2[2] = fVar7 * param_3[2] + param_2[2];
  param_2[3] = fVar7 * param_3[3] + param_2[3];
  return;
}


