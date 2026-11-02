/* Module: vidcap30.exe
   Function: FUN_004c0dd0
   Address: 004c0dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c0dd0(short *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 *puVar11;
  double local_13c [32];
  int local_3c;
  int local_38;
  int local_34;
  short *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  short *local_18;
  int local_14;
  double *local_10;
  int local_c;
  int local_8;
  
  iVar3 = (int)param_3;
  iVar4 = *(int *)(param_5 + 8);
  uVar7 = *(uint *)(param_5 + 4);
  iVar8 = *(int *)(param_5 + 0x10);
  local_24 = uVar7;
  local_2c = iVar4;
  local_c = *(int *)(param_5 + 0xc);
  local_8 = iVar8;
  if (iVar4 < *(int *)(param_5 + 0xc)) {
    local_8 = *(int *)(param_5 + 0x10);
    local_1c = 0;
    if (*(int *)(param_5 + 0x1d64) == 0) {
      iVar8 = param_4 + -1;
    }
    else {
      iVar8 = param_4 + -2;
    }
    if (0 < (int)uVar7) {
      psVar5 = (short *)((int)param_3 + iVar8 * uVar7 * 2);
      pdVar10 = local_13c;
      local_18 = (short *)uVar7;
      do {
        sVar6 = *psVar5;
        local_28 = (int)sVar6;
        psVar5 = psVar5 + 1;
        uVar9 = (int)local_18 - 1;
        *pdVar10 = (double)(int)sVar6;
        local_18 = (short *)uVar9;
        pdVar10 = pdVar10 + 1;
      } while (uVar9 != 0);
    }
    if (local_8 < 0) {
      do {
        local_8 = local_8 + iVar4;
        local_1c = local_1c + 1;
      } while (local_8 < 0);
    }
    local_3c = iVar4 * param_2 + *(int *)(param_5 + 0x10);
    uVar9 = uVar7;
    if (uVar7 == 1) {
      iVar8 = param_2 + -1;
      local_8 = iVar8 * iVar4 + *(int *)(param_5 + 0x10);
      psVar5 = param_1 + param_2 + -1;
      if ((int)local_1c <= iVar8) {
        local_18 = (short *)((iVar8 - local_1c) + 1);
        do {
          local_14 = local_8 / local_c;
          if (local_8 % local_c == 0) {
            *psVar5 = *(short *)((int)param_3 + local_14 * 2);
          }
          else {
            sVar6 = *(short *)((int)param_3 + local_14 * 2);
            lVar2 = ((longlong)((int)*(short *)((int)param_3 + 2 + local_14 * 2) - (int)sVar6) *
                    (longlong)(local_8 % local_c)) / (longlong)local_c;
            local_14 = (int)lVar2;
            *psVar5 = (short)lVar2 + sVar6;
          }
          psVar5 = psVar5 + -1;
          local_8 = local_8 - local_2c;
          local_18 = (short *)((int)local_18 + -1);
          uVar9 = local_24;
        } while (local_18 != (short *)0x0);
      }
    }
    else if (uVar7 == 2) {
      iVar8 = param_2 + -1;
      local_8 = iVar8 * iVar4 + *(int *)(param_5 + 0x10);
      psVar5 = param_1 + param_2 * 2 + -2;
      if ((int)local_1c <= iVar8) {
        local_18 = (short *)((iVar8 - local_1c) + 1);
        do {
          iVar4 = local_8 / local_c;
          local_14 = iVar4;
          iVar8 = local_8 % local_c;
          if (iVar8 == 0) {
            *psVar5 = *(short *)((int)param_3 + iVar4 * 4);
            psVar5[1] = *(short *)((int)param_3 + 2 + iVar4 * 4);
          }
          else {
            sVar6 = *(short *)((int)param_3 + iVar4 * 4);
            *psVar5 = (short)(((longlong)
                               ((int)*(short *)((int)param_3 + 4 + iVar4 * 4) - (int)sVar6) *
                              (longlong)iVar8) / (longlong)local_c) + sVar6;
            sVar6 = *(short *)((int)param_3 + 2 + iVar4 * 4);
            local_14 = (int)sVar6;
            lVar2 = ((longlong)((int)*(short *)((int)param_3 + 6 + iVar4 * 4) - (int)sVar6) *
                    (longlong)iVar8) / (longlong)local_c;
            local_10 = (double *)(int)lVar2;
            psVar5[1] = (short)lVar2 + sVar6;
          }
          psVar5 = psVar5 + -2;
          local_8 = local_8 - local_2c;
          local_18 = (short *)((int)local_18 + -1);
          uVar9 = local_24;
        } while (local_18 != (short *)0x0);
      }
    }
    else {
      if ((int)uVar7 < 1) goto LAB_004c1507;
      local_34 = param_2 + -1;
      local_20 = (uint)param_3;
      local_38 = local_34 * iVar4;
      local_18 = param_1 + local_34 * uVar7;
      local_28 = uVar7;
      do {
        local_8 = local_34 * iVar4 + *(int *)(param_5 + 0x10);
        uVar9 = uVar7;
        if ((int)local_1c <= local_34) {
          local_30 = (short *)((local_34 - local_1c) + 1);
          local_14 = uVar7 * 2;
          psVar5 = local_18;
          do {
            local_10 = (double *)(local_8 / local_c);
            psVar1 = (short *)(local_20 + (local_8 / local_c) * local_24 * 2);
            if (local_8 % local_c == 0) {
              *psVar5 = *psVar1;
            }
            else {
              lVar2 = ((longlong)((int)psVar1[uVar7] - (int)*psVar1) * (longlong)(local_8 % local_c)
                      ) / (longlong)local_c;
              local_10 = (double *)(int)lVar2;
              *psVar5 = (short)lVar2 + *psVar1;
            }
            psVar5 = psVar5 + -uVar7;
            local_8 = local_8 - local_2c;
            local_30 = (short *)((int)local_30 + -1);
            uVar9 = local_24;
          } while (local_30 != (short *)0x0);
        }
        local_20 = local_20 + 2;
        local_28 = local_28 - 1;
        local_18 = local_18 + 1;
        uVar7 = uVar9;
      } while (local_28 != 0);
    }
    uVar7 = uVar9;
    if (0 < (int)uVar9) {
      local_18 = (short *)((int)param_3 - (int)param_1);
      local_20 = uVar9;
      do {
        iVar8 = *(int *)(param_5 + 0x10) + local_c;
        local_30 = param_1;
        local_8 = iVar8;
        iVar4 = ftol();
        psVar5 = param_1;
        if (0 < (int)local_1c) {
          local_34 = *(short *)((int)local_18 + (int)param_1) - iVar4;
          local_28 = local_1c;
          do {
            *param_1 = (short)iVar4 +
                       (short)(((longlong)local_34 * (longlong)local_8) / (longlong)local_c);
            param_1 = param_1 + local_24;
            iVar8 = iVar8 + local_2c;
            local_28 = local_28 - 1;
            local_8 = iVar8;
            psVar5 = local_30;
          } while (local_28 != 0);
        }
        param_1 = psVar5 + 1;
        local_20 = local_20 - 1;
        local_30 = param_1;
        uVar7 = local_24;
      } while (local_20 != 0);
    }
LAB_004c1507:
    *(int *)(param_5 + 0x10) = local_3c;
    if (0 < (int)uVar7) {
      pdVar10 = local_13c;
      puVar11 = (undefined4 *)(param_5 + 0x30);
      for (iVar4 = (uVar7 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *(undefined4 *)pdVar10;
        pdVar10 = (double *)((int)pdVar10 + 4);
        puVar11 = puVar11 + 1;
      }
    }
    if (*(int *)(param_5 + 0x1d64) != 0) {
      param_4 = param_4 + -1;
    }
    iVar4 = *(int *)(param_5 + 0x10) - local_c * param_4;
    *(int *)(param_5 + 0x10) = iVar4;
    *(double *)(param_5 + 0x20) = (double)iVar4 / (double)local_c;
    return param_2;
  }
  iVar4 = 0;
  local_1c = 0;
  if (0 < (int)uVar7) {
    local_10 = local_13c;
    param_3 = (short *)((int)param_3 + (param_4 + -1) * uVar7 * 2);
    local_18 = (short *)uVar7;
    do {
      local_28 = (int)*param_3;
      *local_10 = (double)(int)*param_3;
      param_3 = param_3 + 1;
      local_10 = local_10 + 1;
      local_18 = (short *)((int)local_18 - 1);
    } while (local_18 != (short *)0x0);
  }
  if (iVar8 < 0) {
    local_8 = iVar8 + local_c;
    if (0 < (int)uVar7) {
      local_10 = (double *)(param_5 + 0x30);
      local_18 = (short *)(iVar3 - (int)param_1);
      psVar5 = param_1;
      local_20 = uVar7;
      do {
        iVar4 = ftol();
        *psVar5 = (short)(((longlong)(*(short *)((int)local_18 + (int)psVar5) - iVar4) *
                          (longlong)local_8) / (longlong)local_c) + (short)iVar4;
        psVar5 = psVar5 + 1;
        local_20 = local_20 - 1;
        local_10 = (double *)((int)local_10 + 8);
        uVar7 = local_24;
      } while (local_20 != 0);
    }
    local_1c = 1;
    iVar4 = 1;
    iVar8 = *(int *)(param_5 + 0x10) + local_2c;
    local_8 = iVar8;
  }
  uVar9 = uVar7;
  if (uVar7 == 1) {
    param_3 = param_1 + iVar4;
    if (iVar4 < param_2) {
      param_2 = param_2 - iVar4;
      local_1c = iVar4 + param_2;
      do {
        local_8 = local_8 / local_c;
        if (iVar8 % local_c == 0) {
          sVar6 = *(short *)(iVar3 + local_8 * 2);
        }
        else {
          sVar6 = *(short *)(iVar3 + local_8 * 2);
          sVar6 = (short)(((longlong)((int)*(short *)(iVar3 + 2 + local_8 * 2) - (int)sVar6) *
                          (longlong)(iVar8 % local_c)) / (longlong)local_c) + sVar6;
        }
        *param_3 = sVar6;
        param_3 = param_3 + 1;
        iVar8 = iVar8 + local_2c;
        param_2 = param_2 + -1;
        local_8 = iVar8;
        uVar9 = local_24;
      } while (param_2 != 0);
    }
  }
  else if (uVar7 == 2) {
    param_3 = param_1 + iVar4 * 2;
    if (iVar4 < param_2) {
      param_2 = param_2 - iVar4;
      local_1c = iVar4 + param_2;
      do {
        local_8 = local_8 / local_c;
        iVar4 = iVar8 % local_c;
        if (iVar4 == 0) {
          *param_3 = *(short *)(iVar3 + local_8 * 4);
          param_3[1] = *(short *)(iVar3 + 2 + local_8 * 4);
        }
        else {
          sVar6 = *(short *)(iVar3 + local_8 * 4);
          *param_3 = (short)(((longlong)((int)*(short *)(iVar3 + 4 + local_8 * 4) - (int)sVar6) *
                             (longlong)iVar4) / (longlong)local_c) + sVar6;
          sVar6 = *(short *)(iVar3 + 2 + local_8 * 4);
          local_14 = (int)sVar6;
          param_3[1] = (short)(((longlong)((int)*(short *)(iVar3 + 6 + local_8 * 4) - (int)sVar6) *
                               (longlong)iVar4) / (longlong)local_c) + sVar6;
        }
        param_3 = param_3 + 2;
        iVar8 = iVar8 + local_2c;
        param_2 = param_2 + -1;
        local_8 = iVar8;
        uVar9 = local_24;
      } while (param_2 != 0);
    }
  }
  else {
    local_10 = (double *)0x0;
    if ((int)uVar7 < 1) goto LAB_004c1139;
    local_20 = iVar3;
    do {
      psVar5 = param_1 + iVar4 * uVar7 + (int)local_10;
      uVar9 = uVar7;
      if (iVar4 < param_2) {
        local_18 = (short *)(param_2 - iVar4);
        iVar4 = iVar4 + (int)local_18;
        local_14 = uVar7 * 2;
        local_1c = iVar4;
        do {
          psVar1 = (short *)(local_20 + (local_8 / local_c) * local_24 * 2);
          if (iVar8 % local_c == 0) {
            *psVar5 = *psVar1;
          }
          else {
            *psVar5 = (short)(((longlong)((int)psVar1[uVar7] - (int)*psVar1) *
                              (longlong)(iVar8 % local_c)) / (longlong)local_c) + *psVar1;
          }
          psVar5 = psVar5 + uVar7;
          iVar8 = iVar8 + local_2c;
          local_18 = (short *)((int)local_18 + -1);
          local_8 = iVar8;
          uVar9 = local_24;
        } while (local_18 != (short *)0x0);
      }
      local_10 = (double *)((int)local_10 + 1);
      local_20 = local_20 + 2;
      uVar7 = uVar9;
    } while ((int)local_10 < (int)uVar9);
  }
  if (0 < (int)uVar9) {
    pdVar10 = local_13c;
    puVar11 = (undefined4 *)(param_5 + 0x30);
    for (iVar4 = (uVar9 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *(undefined4 *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + 4);
      puVar11 = puVar11 + 1;
    }
  }
LAB_004c1139:
  iVar4 = (iVar8 - local_c * param_4) % local_c;
  *(int *)(param_5 + 0x10) = iVar4;
  *(double *)(param_5 + 0x20) = (double)iVar4 / (double)local_c;
  return local_1c;
}


