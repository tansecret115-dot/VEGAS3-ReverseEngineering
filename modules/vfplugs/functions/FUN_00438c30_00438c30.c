/* Module: vfplugs.dll
   Function: FUN_00438c30
   Address: 00438c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00438c30(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
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
  uint uVar10;
  uint uVar11;
  
  uVar7 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar6 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar10 = param_6 & 0x80003fff;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffc000) + 1;
  }
  uVar11 = param_7 & 0x80003fff;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
  }
  if ((int)((param_3 - uVar7) - 1 | (param_4 - uVar6) - 1 | uVar6 | uVar7) < 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return 0;
  }
  if (-1 < (int)((param_3 - uVar7) - 2 | (param_4 - uVar6) - 2)) {
    fVar1 = (float)(int)uVar10 * _DAT_0048ca0c;
    fVar3 = (float)(int)uVar11 * _DAT_0048ca0c;
    pfVar8 = (float *)(uVar7 * 0x10 + param_2 + uVar6 * param_5);
    fVar5 = (_DAT_00487ed4 - fVar1) * (_DAT_00487ed4 - fVar3);
    fVar2 = (_DAT_00487ed4 - fVar3) * fVar1;
    fVar4 = (_DAT_00487ed4 - fVar1) * fVar3;
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
    fVar1 = (float)(int)uVar10 * _DAT_0048ca0c;
    fVar2 = _DAT_00487ed4 - fVar1;
    pfVar8 = (float *)(uVar7 * 0x10 + uVar6 * param_5 + param_2);
    pfVar9 = (float *)((uVar7 + 1) * 0x10 + uVar6 * param_5 + param_2);
    param_1[2] = pfVar9[2] * fVar1 + pfVar8[2] * fVar2;
    param_1[1] = pfVar9[1] * fVar1 + pfVar8[1] * fVar2;
    *param_1 = fVar2 * *pfVar8 + fVar1 * *pfVar9;
    param_1[3] = pfVar9[3] * fVar1 + pfVar8[3] * fVar2;
    return 1;
  }
  fVar1 = (float)(int)uVar11 * _DAT_0048ca0c;
  fVar2 = _DAT_00487ed4 - fVar1;
  pfVar8 = (float *)(uVar6 * param_5 + uVar7 * 0x10 + param_2);
  pfVar9 = (float *)((uVar6 + 1) * param_5 + uVar7 * 0x10 + param_2);
  param_1[2] = pfVar9[2] * fVar1 + pfVar8[2] * fVar2;
  param_1[1] = pfVar9[1] * fVar1 + pfVar8[1] * fVar2;
  *param_1 = fVar2 * *pfVar8 + fVar1 * *pfVar9;
  param_1[3] = pfVar9[3] * fVar1 + pfVar8[3] * fVar2;
  return 1;
}


