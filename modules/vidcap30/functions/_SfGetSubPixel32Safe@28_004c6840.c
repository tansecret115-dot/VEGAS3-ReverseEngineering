/* Module: vidcap30.exe
   Function: _SfGetSubPixel32Safe@28
   Address: 004c6840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfGetSubPixel32Safe_28
          (undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
          uint param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
                    /* 0xc6840  432  _SfGetSubPixel32Safe@28 */
  if ((int)(param_6 | param_7) < 0) {
    *param_1 = 0;
    return 0;
  }
  uVar6 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar2 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x3fffU)) >> 0xe;
  param_6 = param_6 & 0x80003fff;
  if ((int)param_6 < 0) {
    param_6 = (param_6 - 1 | 0xffffc000) + 1;
  }
  param_7 = param_7 & 0x80003fff;
  if ((int)param_7 < 0) {
    param_7 = (param_7 - 1 | 0xffffc000) + 1;
  }
  if ((int)((param_3 - uVar6) - 1 | (param_4 - uVar2) - 1 | uVar2 | uVar6) < 0) {
    *param_1 = 0;
    return 0;
  }
  if (-1 < (int)((param_3 - uVar6) - 2 | (param_4 - uVar2) - 2)) {
    _SfGetSubPixel32Fast_20(param_1,param_2 + uVar2 * param_5 + uVar6 * 4,param_5,param_6,param_7);
    return 1;
  }
  if (param_4 <= (int)(uVar2 + 1)) {
    if (param_3 <= (int)(uVar6 + 1)) {
      *param_1 = *(undefined4 *)(param_2 + uVar2 * param_5 + uVar6 * 4);
      return 1;
    }
    pbVar4 = (byte *)(uVar2 * param_5 + uVar6 * 4 + param_2);
    pbVar7 = (byte *)(uVar2 * param_5 + (uVar6 + 1) * 4 + param_2);
    iVar5 = 0x4000 - param_6;
    iVar3 = (uint)pbVar4[2] * iVar5 + pbVar7[2] * param_6;
    bVar1 = pbVar7[1];
    *(char *)((int)param_1 + 2) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
    iVar3 = (uint)pbVar4[1] * iVar5 + bVar1 * param_6;
    bVar1 = *pbVar4;
    *(char *)((int)param_1 + 1) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
    iVar3 = *pbVar7 * param_6 + (uint)bVar1 * iVar5;
    *(char *)param_1 = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
    iVar3 = (uint)pbVar4[3] * iVar5 + pbVar7[3] * param_6;
    *(char *)((int)param_1 + 3) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
    return 1;
  }
  pbVar4 = (byte *)(uVar2 * param_5 + uVar6 * 4 + param_2);
  pbVar7 = (byte *)((uVar2 + 1) * param_5 + uVar6 * 4 + param_2);
  iVar5 = 0x4000 - param_7;
  iVar3 = (uint)pbVar4[2] * iVar5 + pbVar7[2] * param_7;
  bVar1 = pbVar7[1];
  *(char *)((int)param_1 + 2) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  iVar3 = (uint)pbVar4[1] * iVar5 + bVar1 * param_7;
  bVar1 = *pbVar7;
  *(char *)((int)param_1 + 1) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  iVar3 = (uint)*pbVar4 * iVar5 + bVar1 * param_7;
  bVar1 = pbVar7[3];
  *(char *)param_1 = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  iVar3 = (uint)pbVar4[3] * iVar5 + bVar1 * param_7;
  *(char *)((int)param_1 + 3) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  return 1;
}


