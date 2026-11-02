/* Module: vegas30k.dll
   Function: _SfGetSubPixel128Safe@28
   Address: 0109aa60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfGetSubPixel128Safe_28
          (float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  
                    /* 0x9aa60  982  _SfGetSubPixel128Safe@28 */
  uVar4 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar3 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x3fffU)) >> 0xe;
  param_6 = param_6 & 0x80003fff;
  if ((int)param_6 < 0) {
    param_6 = (param_6 - 1 | 0xffffc000) + 1;
  }
  param_7 = param_7 & 0x80003fff;
  if ((int)param_7 < 0) {
    param_7 = (param_7 - 1 | 0xffffc000) + 1;
  }
  if ((int)((param_3 - uVar4) - 1 | (param_4 - uVar3) - 1 | uVar3 | uVar4) < 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return 0;
  }
  if (-1 < (int)((param_3 - uVar4) - 2 | (param_4 - uVar3) - 2)) {
    _SfGetSubPixel128Fast_20
              (param_1,uVar4 * 0x10 + param_2 + uVar3 * param_5,param_5,param_6,param_7);
    return 1;
  }
  if (param_4 <= (int)(uVar3 + 1)) {
    if (param_3 <= (int)(uVar4 + 1)) {
      pfVar5 = (float *)(uVar4 * 0x10 + param_2 + uVar3 * param_5);
      *param_1 = *pfVar5;
      param_1[1] = pfVar5[1];
      param_1[2] = pfVar5[2];
      param_1[3] = pfVar5[3];
      return 1;
    }
    fVar1 = (float)(int)param_6 * _DAT_011dd9a8;
    fVar2 = _DAT_011dad68 - fVar1;
    pfVar5 = (float *)(uVar4 * 0x10 + uVar3 * param_5 + param_2);
    pfVar6 = (float *)((uVar4 + 1) * 0x10 + uVar3 * param_5 + param_2);
    param_1[2] = pfVar6[2] * fVar1 + pfVar5[2] * fVar2;
    param_1[1] = pfVar6[1] * fVar1 + pfVar5[1] * fVar2;
    *param_1 = fVar2 * *pfVar5 + fVar1 * *pfVar6;
    param_1[3] = pfVar6[3] * fVar1 + pfVar5[3] * fVar2;
    return 1;
  }
  fVar1 = (float)(int)param_7 * _DAT_011dd9a8;
  fVar2 = _DAT_011dad68 - fVar1;
  pfVar5 = (float *)(uVar3 * param_5 + uVar4 * 0x10 + param_2);
  pfVar6 = (float *)((uVar3 + 1) * param_5 + uVar4 * 0x10 + param_2);
  param_1[2] = pfVar6[2] * fVar1 + pfVar5[2] * fVar2;
  param_1[1] = pfVar6[1] * fVar1 + pfVar5[1] * fVar2;
  *param_1 = fVar1 * *pfVar6 + fVar2 * *pfVar5;
  param_1[3] = pfVar6[3] * fVar1 + pfVar5[3] * fVar2;
  return 1;
}


