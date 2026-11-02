/* Module: mp3plug.dll
   Function: FUN_5f716e34
   Address: 5f716e34
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f716e34(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  param_2[4] = (((*param_1 - param_1[4]) + param_1[8]) - param_1[0xc]) + param_1[0x10];
  fVar1 = (*param_1 - param_1[0xc]) + ((param_1[4] - param_1[8]) - param_1[0x10]) * _DAT_5f765330;
  fVar2 = ((param_1[2] - param_1[10]) - param_1[0xe]) * _DAT_5f765324;
  param_2[7] = fVar1 - fVar2;
  param_2[1] = fVar1 + fVar2;
  fVar1 = param_1[4] * _DAT_5f765320 +
          param_1[0x10] * _DAT_5f765338 + param_1[8] * _DAT_5f765328 + param_1[0xc] * _DAT_5f765330
          + *param_1;
  fVar2 = param_1[2] * _DAT_5f76531c +
          param_1[6] * _DAT_5f765324 + param_1[10] * _DAT_5f76532c + param_1[0xe] * _DAT_5f765334;
  param_2[8] = fVar1 - fVar2;
  *param_2 = fVar1 + fVar2;
  fVar1 = param_1[0x10] * _DAT_5f765328 + param_1[0xc] * _DAT_5f765330 +
          ((*param_1 - param_1[4] * _DAT_5f765338) - param_1[8] * _DAT_5f765320);
  fVar2 = param_1[0xe] * _DAT_5f76531c +
          ((param_1[2] * _DAT_5f76532c - param_1[6] * _DAT_5f765324) - param_1[10] * _DAT_5f765334);
  param_2[6] = fVar1 - fVar2;
  param_2[2] = fVar1 + fVar2;
  fVar1 = (param_1[8] * _DAT_5f765338 +
          param_1[0xc] * _DAT_5f765330 + (*param_1 - param_1[4] * _DAT_5f765328)) -
          param_1[0x10] * _DAT_5f765320;
  fVar2 = (param_1[10] * _DAT_5f76531c + (param_1[2] * _DAT_5f765334 - param_1[6] * _DAT_5f765324))
          - param_1[0xe] * _DAT_5f76532c;
  param_2[3] = fVar2 + fVar1;
  param_2[5] = fVar1 - fVar2;
  return;
}


