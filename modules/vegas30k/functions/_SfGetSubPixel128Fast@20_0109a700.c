/* Module: vegas30k.dll
   Function: _SfGetSubPixel128Fast@20
   Address: 0109a700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfGetSubPixel128Fast_20(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x9a700  981  _SfGetSubPixel128Fast@20 */
  fVar1 = (float)param_4 * _DAT_011dd9a8;
  fVar3 = (float)param_5 * _DAT_011dd9a8;
  fVar5 = (_DAT_011dad68 - fVar1) * (_DAT_011dad68 - fVar3);
  fVar2 = (_DAT_011dad68 - fVar3) * fVar1;
  fVar4 = (_DAT_011dad68 - fVar1) * fVar3;
  fVar3 = fVar3 * fVar1;
  param_1[2] = param_2[2] * fVar5 +
               param_2[6] * fVar2 +
               *(float *)((int)param_2 + param_3 + 8) * fVar4 +
               *(float *)((int)param_2 + param_3 + 0x18) * fVar3;
  param_1[1] = param_2[1] * fVar5 +
               param_2[5] * fVar2 +
               *(float *)((int)param_2 + param_3 + 4) * fVar4 +
               *(float *)((int)param_2 + param_3 + 0x14) * fVar3;
  *param_1 = fVar5 * *param_2 +
             *(float *)((int)param_2 + param_3) * fVar4 +
             param_2[4] * fVar2 + *(float *)((int)param_2 + param_3 + 0x10) * fVar3;
  param_1[3] = param_2[3] * fVar5 +
               param_2[7] * fVar2 +
               *(float *)((int)param_2 + param_3 + 0xc) * fVar4 +
               *(float *)((int)param_2 + param_3 + 0x1c) * fVar3;
  return;
}


