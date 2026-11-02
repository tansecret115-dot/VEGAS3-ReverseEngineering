/* Module: erv33260.dll
   Function: FUN_67080a40
   Address: 67080a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67080a40(int *param_1,byte *param_2,char param_3,byte *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int local_30;
  uint local_1c;
  byte *local_18;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar7 = *param_1;
  iVar5 = *(int *)param_2;
  iVar3 = param_1[1];
  local_8 = *(uint *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 4);
  uVar11 = param_1[3];
  param_2 = *(byte **)(param_2 + 0xc);
  param_1 = (int *)*puVar1;
  if (param_4 != (byte *)0x0) {
    param_1 = (int *)(*puVar1 >> 1);
    local_8 = local_8 >> 1;
    uVar11 = uVar11 >> 1;
    param_2 = (byte *)((uint)param_2 >> 1);
  }
  local_1c = (uint)(param_3 != '\0');
  local_30 = uVar11 - 1;
  pbVar9 = (byte *)(iVar7 + iVar3 * local_30);
  pbVar8 = (byte *)(iVar5 + (int)(param_2 + -1) * iVar4);
  pbVar12 = pbVar9 + -iVar3;
  param_2 = pbVar8 + -iVar4;
  pbVar8[local_8 - 1] = ((byte *)((int)param_1 + (int)pbVar9))[-1];
  iVar7 = (int)param_1 + -2;
  if (-1 < iVar7) {
    iVar5 = iVar7;
    local_10 = pbVar8 + iVar7 * 2 + 1;
    do {
      local_10[1] = (byte)((int)(pbVar9[iVar5] + 1 + (uint)pbVar9[iVar5 + 1] * 3 + local_1c) >> 2);
      *local_10 = (byte)((int)(pbVar9[iVar5 + 1] + 1 + (uint)pbVar9[iVar5] * 3 + local_1c) >> 2);
      iVar5 = iVar5 + -1;
      local_10 = local_10 + -2;
    } while (-1 < iVar5);
  }
  *pbVar8 = *pbVar9;
  pbVar8 = param_2 + -iVar4;
  if (1 < uVar11) {
    local_10 = pbVar12 + (int)param_1;
    local_c = (byte *)((int)param_1 + (int)pbVar9);
    do {
      param_2[local_8 - 1] = (byte)((int)(local_10[-1] + 1 + (uint)local_c[-1] * 3 + local_1c) >> 2)
      ;
      pbVar8[local_8 - 1] = (byte)((int)(local_c[-1] + 1 + (uint)local_10[-1] * 3 + local_1c) >> 2);
      if (-1 < iVar7) {
        local_18 = pbVar8 + iVar7 * 2 + 1;
        pbVar6 = pbVar9 + (int)param_1 + -1;
        param_4 = param_2 + iVar7 * 2 + 2;
        iVar10 = (int)pbVar12 - (int)pbVar9;
        iVar5 = iVar7;
        do {
          param_4[-1] = (byte)((int)(pbVar6[iVar10] + 7 +
                                    ((uint)pbVar6[-1] * 3 + (uint)*pbVar6 + (uint)pbVar12[iVar5]) *
                                    3 + local_1c) >> 4);
          *param_4 = (byte)((int)(pbVar12[iVar5] + 7 +
                                 ((uint)*pbVar6 * 3 + (uint)pbVar6[iVar10] + (uint)pbVar6[-1]) * 3 +
                                 local_1c) >> 4);
          *local_18 = (byte)((int)(*pbVar6 + 7 +
                                  ((uint)pbVar12[iVar5] * 3 + (uint)pbVar6[iVar10] +
                                  (uint)pbVar6[-1]) * 3 + local_1c) >> 4);
          pbVar2 = pbVar12 + iVar5;
          iVar5 = iVar5 + -1;
          param_4[(int)pbVar8 - (int)param_2] =
               (byte)((int)(pbVar6[-1] + 7 +
                           ((uint)pbVar6[iVar10] * 3 + (uint)*pbVar6 + (uint)*pbVar2) * 3 + local_1c
                           ) >> 4);
          local_18 = local_18 + -2;
          param_4 = param_4 + -2;
          pbVar6 = pbVar6 + -1;
        } while (-1 < iVar5);
      }
      *param_2 = (byte)((int)(*pbVar12 + 1 + (uint)*pbVar9 * 3 + local_1c) >> 2);
      *pbVar8 = (byte)((int)(*pbVar9 + 1 + (uint)*pbVar12 * 3 + local_1c) >> 2);
      param_2 = param_2 + iVar4 * -2;
      pbVar8 = pbVar8 + iVar4 * -2;
      local_c = local_c + -iVar3;
      pbVar9 = pbVar9 + -iVar3;
      pbVar12 = pbVar12 + -iVar3;
      local_10 = local_10 + -iVar3;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  param_2[local_8 - 1] = pbVar9[(int)param_1 + -1];
  if (-1 < iVar7) {
    pbVar8 = param_2 + iVar7 * 2 + 1;
    do {
      pbVar8[1] = (byte)((int)(pbVar9[iVar7] + 1 + (uint)pbVar9[iVar7 + 1] * 3 + local_1c) >> 2);
      *pbVar8 = (byte)((int)(pbVar9[iVar7 + 1] + 1 + (uint)pbVar9[iVar7] * 3 + local_1c) >> 2);
      iVar7 = iVar7 + -1;
      pbVar8 = pbVar8 + -2;
    } while (-1 < iVar7);
  }
  *param_2 = *pbVar9;
  return;
}


