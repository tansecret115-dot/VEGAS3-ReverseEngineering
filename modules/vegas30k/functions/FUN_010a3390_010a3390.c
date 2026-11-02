/* Module: vegas30k.dll
   Function: FUN_010a3390
   Address: 010a3390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_010a3390(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  
  uVar7 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar6 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x3fffU)) >> 0xe;
  param_6 = param_6 & 0x80003fff;
  if ((int)param_6 < 0) {
    param_6 = (param_6 - 1 | 0xffffc000) + 1;
  }
  param_7 = param_7 & 0x80003fff;
  if ((int)param_7 < 0) {
    param_7 = (param_7 - 1 | 0xffffc000) + 1;
  }
  if ((int)((param_3 - uVar7) - 1 | (param_4 - uVar6) - 1 | uVar6 | uVar7) < 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return 0;
  }
  if (-1 < (int)((param_3 - uVar7) - 2 | (param_4 - uVar6) - 2)) {
    fVar1 = (float)(int)param_6 * _DAT_011dd9a8;
    fVar3 = (float)(int)param_7 * _DAT_011dd9a8;
    pfVar8 = (float *)(uVar7 * 0x10 + param_2 + uVar6 * param_5);
    fVar5 = (_DAT_011dad68 - fVar1) * (_DAT_011dad68 - fVar3);
    fVar2 = (_DAT_011dad68 - fVar3) * fVar1;
    fVar4 = (_DAT_011dad68 - fVar1) * fVar3;
    fVar3 = fVar3 * fVar1;
    param_1[2] = pfVar8[2] * fVar5 +
                 pfVar8[6] * fVar2 +
                 *(float *)((int)pfVar8 + param_5 + 8) * fVar4 +
                 *(float *)((int)pfVar8 + param_5 + 0x18) * fVar3;
    param_1[1] = pfVar8[1] * fVar5 +
                 pfVar8[5] * fVar2 +
                 *(float *)((int)pfVar8 + param_5 + 4) * fVar4 +
                 *(float *)((int)pfVar8 + param_5 + 0x14) * fVar3;
    *param_1 = fVar5 * *pfVar8 +
               *(float *)((int)pfVar8 + param_5) * fVar4 +
               pfVar8[4] * fVar2 + *(float *)((int)pfVar8 + param_5 + 0x10) * fVar3;
    param_1[3] = pfVar8[3] * fVar5 +
                 pfVar8[7] * fVar2 +
                 *(float *)((int)pfVar8 + param_5 + 0xc) * fVar4 +
                 *(float *)((int)pfVar8 + param_5 + 0x1c) * fVar3;
    return 1;
  }
  if (param_4 <= (int)(uVar6 + 1)) {
    if (param_3 <= (int)(uVar7 + 1)) {
      pfVar8 = (float *)(uVar7 * 0x10 + param_2 + uVar6 * param_5);
      *param_1 = *pfVar8;
      param_1[1] = pfVar8[1];
      param_1[2] = pfVar8[2];
      param_1[3] = pfVar8[3];
      return 1;
    }
    fVar1 = (float)(int)param_6 * _DAT_011dd9a8;
    fVar2 = _DAT_011dad68 - fVar1;
    pfVar8 = (float *)(uVar7 * 0x10 + uVar6 * param_5 + param_2);
    pfVar9 = (float *)((uVar7 + 1) * 0x10 + uVar6 * param_5 + param_2);
    param_1[2] = pfVar9[2] * fVar1 + pfVar8[2] * fVar2;
    param_1[1] = pfVar9[1] * fVar1 + pfVar8[1] * fVar2;
    *param_1 = fVar2 * *pfVar8 + fVar1 * *pfVar9;
    param_1[3] = pfVar9[3] * fVar1 + pfVar8[3] * fVar2;
    return 1;
  }
  fVar1 = (float)(int)param_7 * _DAT_011dd9a8;
  fVar2 = _DAT_011dad68 - fVar1;
  pfVar8 = (float *)(uVar6 * param_5 + uVar7 * 0x10 + param_2);
  pfVar9 = (float *)((uVar6 + 1) * param_5 + uVar7 * 0x10 + param_2);
  param_1[2] = pfVar9[2] * fVar1 + pfVar8[2] * fVar2;
  param_1[1] = pfVar9[1] * fVar1 + pfVar8[1] * fVar2;
  *param_1 = fVar2 * *pfVar8 + fVar1 * *pfVar9;
  param_1[3] = pfVar9[3] * fVar1 + pfVar8[3] * fVar2;
  return 1;
}


