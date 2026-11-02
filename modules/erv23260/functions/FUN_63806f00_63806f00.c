/* Module: erv23260.dll
   Function: FUN_63806f00
   Address: 63806f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63806f00(byte *param_1,byte *param_2,int param_3,byte *param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int local_18;
  
  iVar2 = param_6;
  iVar1 = (param_3 - param_7) * 2;
  pbVar9 = param_2 + param_6;
  *param_2 = *param_1;
  iVar3 = 0;
  iVar6 = (param_3 - param_7) + -1;
  pbVar11 = param_2;
  if (0 < iVar6) {
    do {
      pbVar11[1] = (byte)((int)((uint)param_1[iVar3] * 3 + 2 + (uint)param_1[iVar3 + 1]) >> 2);
      pbVar11[2] = (byte)((int)((uint)param_1[iVar3 + 1] * 3 + 2 + (uint)param_1[iVar3]) >> 2);
      iVar3 = iVar3 + 1;
      pbVar11 = pbVar11 + 2;
    } while (iVar3 < iVar6);
  }
  pbVar4 = param_1 + param_3;
  (param_2 + iVar1)[-1] = pbVar4[-1 - param_7];
  pbVar11 = param_2 + iVar1;
  for (uVar7 = param_9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pbVar11[0] = 0x80;
    pbVar11[1] = 0x80;
    pbVar11[2] = 0x80;
    pbVar11[3] = 0x80;
    pbVar11 = pbVar11 + 4;
  }
  for (uVar7 = param_9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar11 = 0x80;
    pbVar11 = pbVar11 + 1;
  }
  local_18 = (int)param_4 - param_8;
  pbVar11 = param_1;
  if (1 < local_18) {
    param_8 = -1 - (int)param_1;
    local_18 = local_18 + -1;
    param_1 = pbVar9 + param_6;
    do {
      pbVar5 = pbVar4 + (param_5 - param_3);
      *pbVar9 = (byte)((int)((uint)*pbVar11 * 3 + 2 + (uint)*pbVar5) >> 2);
      *param_1 = (byte)((int)((uint)*pbVar5 * 3 + 2 + (uint)*pbVar11) >> 2);
      if (0 < iVar6) {
        pbVar8 = pbVar4 + (1 - param_3);
        param_4 = param_1 + 1;
        iVar3 = (int)pbVar11 - (int)pbVar5;
        pbVar10 = pbVar9 + 2;
        do {
          pbVar10[-1] = (byte)((int)(((uint)pbVar5[iVar3] * 3 + (uint)*pbVar8 + (uint)*pbVar5) * 3 +
                                     8 + (uint)pbVar5[1]) >> 4);
          *pbVar10 = (byte)((int)(((uint)*pbVar8 * 3 + (uint)pbVar5[iVar3] + (uint)pbVar5[1]) * 3 +
                                  8 + (uint)*pbVar5) >> 4);
          *param_4 = (byte)((int)(((uint)*pbVar5 * 3 + (uint)pbVar5[iVar3] + (uint)pbVar5[1]) * 3 +
                                  8 + (uint)*pbVar8) >> 4);
          (pbVar10 + 2)[(int)(param_1 + (-2 - (int)pbVar9))] =
               (byte)((int)(((uint)pbVar5[1] * 3 + (uint)*pbVar8 + (uint)*pbVar5) * 3 + 8 +
                           (uint)pbVar5[iVar3]) >> 4);
          param_4 = param_4 + 2;
          pbVar5 = pbVar5 + 1;
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 2;
        } while ((int)(pbVar8 + param_8) < iVar6);
      }
      (pbVar9 + iVar1)[-1] =
           (byte)((int)((uint)pbVar4[-1 - param_7] * 3 + 2 + (uint)pbVar4[(param_5 - param_7) + -1])
                 >> 2);
      (param_1 + iVar1)[-1] =
           (byte)((int)((uint)pbVar4[(param_5 - param_7) + -1] * 3 + 2 + (uint)pbVar4[-1 - param_7])
                 >> 2);
      pbVar5 = pbVar9 + iVar1;
      for (uVar7 = param_9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar5[0] = 0x80;
        pbVar5[1] = 0x80;
        pbVar5[2] = 0x80;
        pbVar5[3] = 0x80;
        pbVar5 = pbVar5 + 4;
      }
      for (uVar7 = param_9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar5 = 0x80;
        pbVar5 = pbVar5 + 1;
      }
      pbVar5 = param_1 + iVar1;
      for (uVar7 = param_9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar5[0] = 0x80;
        pbVar5[1] = 0x80;
        pbVar5[2] = 0x80;
        pbVar5[3] = 0x80;
        pbVar5 = pbVar5 + 4;
      }
      for (uVar7 = param_9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar5 = 0x80;
        pbVar5 = pbVar5 + 1;
      }
      pbVar9 = pbVar9 + param_6 * 2;
      param_1 = param_1 + param_6 * 2;
      pbVar11 = pbVar11 + param_5;
      pbVar4 = pbVar4 + param_5;
      param_8 = param_8 - param_5;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *pbVar9 = *pbVar11;
  iVar3 = 0;
  pbVar4 = pbVar9;
  if (0 < iVar6) {
    do {
      pbVar4[1] = (byte)((int)((uint)pbVar11[iVar3] * 3 + 2 + (uint)pbVar11[iVar3 + 1]) >> 2);
      pbVar4[2] = (byte)((int)((uint)pbVar11[iVar3 + 1] * 3 + 2 + (uint)pbVar11[iVar3]) >> 2);
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 2;
    } while (iVar3 < iVar6);
  }
  (pbVar9 + iVar1)[-1] = pbVar11[(param_3 - param_7) + -1];
  pbVar11 = pbVar9 + iVar1;
  for (uVar7 = param_9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pbVar11[0] = 0x80;
    pbVar11[1] = 0x80;
    pbVar11[2] = 0x80;
    pbVar11[3] = 0x80;
    pbVar11 = pbVar11 + 4;
  }
  for (uVar7 = param_9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar11 = 0x80;
    pbVar11 = pbVar11 + 1;
  }
  if (0 < param_10) {
    param_6 = param_10;
    do {
      pbVar9 = pbVar9 + iVar2;
      pbVar11 = pbVar9;
      for (uVar7 = iVar1 + param_9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar11[0] = 0x80;
        pbVar11[1] = 0x80;
        pbVar11[2] = 0x80;
        pbVar11[3] = 0x80;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar7 = iVar1 + param_9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = 0x80;
        pbVar11 = pbVar11 + 1;
      }
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


