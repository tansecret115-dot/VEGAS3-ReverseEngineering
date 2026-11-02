/* Module: erv33260.dll
   Function: FUN_6707a1c0
   Address: 6707a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6707a1c0(int param_1,int param_2,uint param_3,uint param_4,byte *param_5,byte *param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint local_10;
  uint local_8;
  
  if (param_4 != 0) {
    local_18 = param_4 + 7 >> 3;
    pbVar10 = (byte *)(param_1 + 4);
    do {
      if (4 < param_3) {
        pbVar9 = pbVar10 + param_2;
        local_10 = param_3 - 1 >> 2;
        pbVar1 = pbVar10;
        do {
          local_20 = (uint)*param_5;
          if (*param_5 != 0) {
            uVar2 = (int)(((uint)*pbVar1 * 4 - (uint)pbVar9[1 - param_2]) + (uint)pbVar1[-1] * -4 +
                         (uint)pbVar1[-2]) >> 3;
            if ((int)local_20 < (int)uVar2) {
              local_8 = local_20;
            }
            else {
              local_8 = -local_20;
              if ((int)-local_20 <= (int)uVar2) {
                local_8 = uVar2;
              }
            }
            pbVar1[-1] = (&DAT_67091508)[local_8 + pbVar1[-1]];
            uVar7 = (uint)*param_5;
            uVar4 = uVar7;
            if (((int)uVar2 <= (int)uVar7) && (uVar4 = -uVar7, (int)-uVar7 <= (int)uVar2)) {
              uVar4 = uVar2;
            }
            *pbVar1 = (&DAT_67091508)[*pbVar1 - uVar4];
            uVar7 = (uint)param_5[1];
            uVar4 = (int)(((uint)pbVar9[-2] - (uint)pbVar1[param_2 + 1]) + (uint)pbVar9[-1] * -4 +
                         (uint)*pbVar9 * 4) >> 3;
            uVar2 = uVar7;
            if (((int)uVar4 <= (int)uVar7) && (uVar2 = -uVar7, (int)-uVar7 <= (int)uVar4)) {
              uVar2 = uVar4;
            }
            pbVar9[-1] = (&DAT_67091508)[uVar2 + pbVar9[-1]];
            uVar2 = (uint)param_5[1];
            if (((int)uVar2 < (int)uVar4) || (uVar2 = -uVar2, (int)uVar4 < (int)uVar2)) {
              uVar4 = uVar2;
            }
            *pbVar9 = (&DAT_67091508)[*pbVar9 - uVar4];
            uVar2 = (uint)pbVar1[param_2 * 2 + -1];
            uVar4 = (int)(((uint)pbVar1[param_2 * 2] * 4 - (uint)pbVar1[param_2 * 2 + 1]) +
                          (uint)pbVar1[param_2 * 2 + -2] + uVar2 * -4) >> 3;
            local_8 = (uint)param_5[2];
            if (((int)uVar4 <= (int)local_8) && (local_8 = -local_8, (int)local_8 <= (int)uVar4)) {
              local_8 = uVar4;
            }
            pbVar1[param_2 * 2 + -1] = (&DAT_67091508)[local_8 + uVar2];
            uVar7 = (uint)param_5[2];
            uVar2 = uVar7;
            if (((int)uVar4 <= (int)uVar7) && (uVar2 = -uVar7, (int)-uVar7 <= (int)uVar4)) {
              uVar2 = uVar4;
            }
            iVar5 = param_2 * 3;
            pbVar1[param_2 * 2] = (&DAT_67091508)[pbVar1[param_2 * 2] - uVar2];
            local_8 = (uint)param_5[3];
            uVar2 = (int)(((uint)pbVar1[iVar5] * 4 - (uint)pbVar1[iVar5 + 1]) +
                          (uint)pbVar1[iVar5 + -1] * -4 + (uint)pbVar1[iVar5 + -2]) >> 3;
            if (((int)uVar2 <= (int)local_8) && (local_8 = -local_8, (int)local_8 <= (int)uVar2)) {
              local_8 = uVar2;
            }
            pbVar1[iVar5 + -1] = (&DAT_67091508)[local_8 + pbVar1[iVar5 + -1]];
            uVar7 = (uint)param_5[3];
            uVar4 = uVar7;
            if (((int)uVar2 <= (int)uVar7) && (uVar4 = -uVar7, (int)-uVar7 <= (int)uVar2)) {
              uVar4 = uVar2;
            }
            pbVar1[iVar5] = (&DAT_67091508)[pbVar1[iVar5] - uVar4];
          }
          local_28 = (uint)param_5[4];
          if (param_5[4] != 0) {
            uVar2 = (uint)pbVar1[param_2 * 4 + -1];
            uVar4 = (int)(((uint)pbVar1[param_2 * 4] * 4 - (uint)pbVar1[param_2 * 4 + 1]) +
                          (uint)pbVar1[param_2 * 4 + -2] + uVar2 * -4) >> 3;
            if ((int)local_28 < (int)uVar4) {
              local_8 = local_28;
            }
            else {
              local_8 = -local_28;
              if ((int)-local_28 <= (int)uVar4) {
                local_8 = uVar4;
              }
            }
            pbVar1[param_2 * 4 + -1] = (&DAT_67091508)[local_8 + uVar2];
            uVar7 = (uint)param_5[4];
            uVar2 = uVar7;
            if (((int)uVar4 <= (int)uVar7) && (uVar2 = -uVar7, (int)-uVar7 <= (int)uVar4)) {
              uVar2 = uVar4;
            }
            iVar5 = param_2 * 5;
            pbVar1[param_2 * 4] = (&DAT_67091508)[pbVar1[param_2 * 4] - uVar2];
            uVar2 = (int)(((uint)pbVar1[iVar5] * 4 - (uint)pbVar1[iVar5 + 1]) +
                          (uint)pbVar1[iVar5 + -2] + (uint)pbVar1[iVar5 + -1] * -4) >> 3;
            local_8 = (uint)param_5[5];
            if (((int)uVar2 <= (int)local_8) && (local_8 = -local_8, (int)local_8 <= (int)uVar2)) {
              local_8 = uVar2;
            }
            pbVar1[iVar5 + -1] = (&DAT_67091508)[local_8 + pbVar1[iVar5 + -1]];
            uVar7 = (uint)param_5[5];
            uVar4 = uVar7;
            if (((int)uVar2 <= (int)uVar7) && (uVar4 = -uVar7, (int)-uVar7 <= (int)uVar2)) {
              uVar4 = uVar2;
            }
            pbVar1[iVar5] = (&DAT_67091508)[pbVar1[iVar5] - uVar4];
            iVar5 = param_2 * 6;
            uVar2 = (int)(((uint)pbVar1[iVar5] * 4 - (uint)pbVar1[iVar5 + 1]) +
                          (uint)pbVar1[iVar5 + -2] + (uint)pbVar1[iVar5 + -1] * -4) >> 3;
            local_8 = (uint)param_5[6];
            if (((int)uVar2 <= (int)local_8) && (local_8 = -local_8, (int)local_8 <= (int)uVar2)) {
              local_8 = uVar2;
            }
            pbVar1[iVar5 + -1] = (&DAT_67091508)[local_8 + pbVar1[iVar5 + -1]];
            uVar7 = (uint)param_5[6];
            uVar4 = uVar7;
            if (((int)uVar2 <= (int)uVar7) && (uVar4 = -uVar7, (int)-uVar7 <= (int)uVar2)) {
              uVar4 = uVar2;
            }
            pbVar1[iVar5] = (&DAT_67091508)[pbVar1[iVar5] - uVar4];
            iVar5 = param_2 * 7;
            uVar2 = (int)(((uint)pbVar1[iVar5] * 4 - (uint)pbVar1[iVar5 + 1]) +
                          (uint)pbVar1[iVar5 + -2] + (uint)pbVar1[iVar5 + -1] * -4) >> 3;
            local_8 = (uint)param_5[7];
            if (((int)uVar2 <= (int)local_8) && (local_8 = -local_8, (int)local_8 <= (int)uVar2)) {
              local_8 = uVar2;
            }
            pbVar1[iVar5 + -1] = (&DAT_67091508)[local_8 + pbVar1[iVar5 + -1]];
            uVar7 = (uint)param_5[7];
            uVar4 = uVar7;
            if (((int)uVar2 <= (int)uVar7) && (uVar4 = -uVar7, (int)-uVar7 <= (int)uVar2)) {
              uVar4 = uVar2;
            }
            pbVar1[iVar5] = (&DAT_67091508)[pbVar1[iVar5] - uVar4];
          }
          pbVar1 = pbVar1 + 4;
          pbVar9 = pbVar9 + 4;
          param_5 = param_5 + 8;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
      }
      pbVar10 = pbVar10 + param_2 * 8;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  if (4 < param_4) {
    local_18 = param_4 - 1 >> 2;
    iVar5 = param_1 + param_2 * 4;
    pbVar10 = param_6;
    do {
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          local_28 = (uint)*pbVar10;
          if (*pbVar10 != 0) {
            iVar6 = iVar5 + param_2 * -2;
            pbVar10 = (byte *)((iVar5 + uVar2) - param_2);
            uVar7 = (int)(((uint)*(byte *)(iVar6 + uVar2) - (uint)*(byte *)(iVar5 + param_2 + uVar2)
                          ) + (uint)*pbVar10 * -4 + (uint)*(byte *)(iVar5 + uVar2) * 4) >> 3;
            uVar4 = local_28;
            if (((int)uVar7 <= (int)local_28) && (uVar4 = -local_28, (int)-local_28 <= (int)uVar7))
            {
              uVar4 = uVar7;
            }
            *pbVar10 = (&DAT_67091508)[uVar4 + *pbVar10];
            uVar4 = (uint)*param_6;
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + uVar2) = (&DAT_67091508)[*(byte *)(iVar5 + uVar2) - uVar7];
            uVar3 = (uint)param_6[1];
            uVar7 = (int)(((uint)*(byte *)(iVar6 + 1 + uVar2) -
                          (uint)*(byte *)(param_2 + iVar5 + 1 + uVar2)) + (uint)pbVar10[1] * -4 +
                         (uint)*(byte *)(iVar5 + 1 + uVar2) * 4) >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            pbVar10[1] = (&DAT_67091508)[uVar4 + pbVar10[1]];
            uVar4 = (uint)param_6[1];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 1 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 1 + uVar2) - uVar7];
            uVar3 = (uint)param_6[2];
            uVar7 = (int)(((uint)*(byte *)(iVar6 + 2 + uVar2) -
                          (uint)*(byte *)(param_2 + iVar5 + 2 + uVar2)) + (uint)pbVar10[2] * -4 +
                         (uint)*(byte *)(iVar5 + 2 + uVar2) * 4) >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            pbVar10[2] = (&DAT_67091508)[uVar4 + pbVar10[2]];
            uVar4 = (uint)param_6[2];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 2 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 2 + uVar2) - uVar7];
            uVar3 = (uint)param_6[3];
            uVar7 = (int)(((uint)*(byte *)(iVar6 + 3 + uVar2) -
                          (uint)*(byte *)(param_2 + iVar5 + 3 + uVar2)) + (uint)pbVar10[3] * -4 +
                         (uint)*(byte *)(iVar5 + 3 + uVar2) * 4) >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            pbVar10[3] = (&DAT_67091508)[uVar4 + pbVar10[3]];
            uVar4 = (uint)param_6[3];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 3 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 3 + uVar2) - uVar7];
            pbVar10 = param_6;
          }
          local_24 = (uint)pbVar10[4];
          if (pbVar10[4] != 0) {
            iVar11 = (iVar5 + uVar2) - param_2;
            iVar6 = iVar5 + param_2;
            uVar7 = (int)(((uint)*(byte *)(iVar5 + (2 - param_2) * 2 + uVar2) -
                          (uint)*(byte *)(iVar6 + 4 + uVar2)) + (uint)*(byte *)(iVar11 + 4) * -4 +
                         (uint)*(byte *)(iVar5 + 4 + uVar2) * 4) >> 3;
            uVar4 = local_24;
            if (((int)uVar7 <= (int)local_24) && (uVar4 = -local_24, (int)-local_24 <= (int)uVar7))
            {
              uVar4 = uVar7;
            }
            *(undefined1 *)(iVar11 + 4) = (&DAT_67091508)[uVar4 + *(byte *)(iVar11 + 4)];
            uVar4 = (uint)param_6[4];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 4 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 4 + uVar2) - uVar7];
            iVar8 = iVar5 + param_2 * -2;
            uVar3 = (uint)param_6[5];
            uVar7 = (int)(((uint)*(byte *)(iVar8 + 5 + uVar2) - (uint)*(byte *)(iVar6 + 5 + uVar2))
                          + (uint)*(byte *)(iVar5 + 5 + uVar2) * 4 +
                         (uint)*(byte *)(iVar11 + 5) * -4) >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            *(undefined1 *)(iVar11 + 5) = (&DAT_67091508)[uVar4 + *(byte *)(iVar11 + 5)];
            uVar4 = (uint)param_6[5];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 5 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 5 + uVar2) - uVar7];
            uVar3 = (uint)param_6[6];
            uVar7 = (int)(((uint)*(byte *)(iVar5 + (3 - param_2) * 2 + uVar2) -
                          (uint)*(byte *)(iVar6 + 6 + uVar2)) +
                          (uint)*(byte *)(iVar5 + 6 + uVar2) * 4 + (uint)*(byte *)(iVar11 + 6) * -4)
                    >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            *(undefined1 *)(iVar11 + 6) = (&DAT_67091508)[uVar4 + *(byte *)(iVar11 + 6)];
            uVar4 = (uint)param_6[6];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 6 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 6 + uVar2) - uVar7];
            uVar3 = (uint)param_6[7];
            uVar7 = (int)(((uint)*(byte *)(iVar8 + 7 + uVar2) - (uint)*(byte *)(iVar6 + 7 + uVar2))
                          + (uint)*(byte *)(iVar5 + 7 + uVar2) * 4 +
                         (uint)*(byte *)(iVar11 + 7) * -4) >> 3;
            uVar4 = uVar3;
            if (((int)uVar7 <= (int)uVar3) && (uVar4 = -uVar3, (int)-uVar3 <= (int)uVar7)) {
              uVar4 = uVar7;
            }
            *(undefined1 *)(iVar11 + 7) = (&DAT_67091508)[uVar4 + *(byte *)(iVar11 + 7)];
            uVar4 = (uint)param_6[7];
            if (((int)uVar4 < (int)uVar7) || (uVar4 = -uVar4, (int)uVar7 < (int)uVar4)) {
              uVar7 = uVar4;
            }
            *(undefined1 *)(iVar5 + 7 + uVar2) =
                 (&DAT_67091508)[*(byte *)(iVar5 + 7 + uVar2) - uVar7];
            pbVar10 = param_6;
          }
          uVar2 = uVar2 + 8;
          pbVar10 = pbVar10 + 8;
          param_6 = pbVar10;
        } while (uVar2 < param_3);
      }
      iVar5 = iVar5 + param_2 * 4;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  return;
}


