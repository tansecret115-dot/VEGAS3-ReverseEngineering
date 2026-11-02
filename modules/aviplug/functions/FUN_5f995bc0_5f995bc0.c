/* Module: aviplug.dll
   Function: FUN_5f995bc0
   Address: 5f995bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f995bc0(short *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  undefined4 *puVar10;
  double local_13c [32];
  int local_3c;
  int local_38;
  int local_34;
  short *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  short *local_20;
  uint local_1c;
  short *local_18;
  int local_14;
  double *local_10;
  int local_c;
  int local_8;
  
  psVar3 = param_3;
  iVar2 = *(int *)(param_5 + 8);
  uVar5 = *(uint *)(param_5 + 4);
  iVar7 = *(int *)(param_5 + 0x10);
  local_24 = uVar5;
  local_2c = iVar2;
  local_c = *(int *)(param_5 + 0xc);
  local_8 = iVar7;
  if (iVar2 < *(int *)(param_5 + 0xc)) {
    local_8 = *(int *)(param_5 + 0x10);
    local_1c = 0;
    if (*(int *)(param_5 + 0x1d64) == 0) {
      iVar7 = param_4 + -1;
    }
    else {
      iVar7 = param_4 + -2;
    }
    if (0 < (int)uVar5) {
      psVar3 = param_3 + iVar7 * uVar5;
      pdVar9 = local_13c;
      local_18 = (short *)uVar5;
      do {
        sVar4 = *psVar3;
        local_28 = (int)sVar4;
        psVar3 = psVar3 + 1;
        uVar8 = (int)local_18 - 1;
        *pdVar9 = (double)(int)sVar4;
        local_18 = (short *)uVar8;
        pdVar9 = pdVar9 + 1;
      } while (uVar8 != 0);
    }
    if (local_8 < 0) {
      do {
        local_8 = local_8 + iVar2;
        local_1c = local_1c + 1;
      } while (local_8 < 0);
    }
    local_3c = iVar2 * param_2 + *(int *)(param_5 + 0x10);
    uVar8 = uVar5;
    if (uVar5 == 1) {
      iVar7 = param_2 + -1;
      local_8 = iVar7 * iVar2 + *(int *)(param_5 + 0x10);
      psVar3 = param_1 + param_2 + -1;
      if ((int)local_1c <= iVar7) {
        local_18 = (short *)((iVar7 - local_1c) + 1);
        do {
          iVar2 = local_8 / local_c;
          local_14 = iVar2;
          if (local_8 % local_c == 0) {
            *psVar3 = param_3[iVar2];
          }
          else {
            lVar1 = ((longlong)((int)param_3[iVar2 + 1] - (int)param_3[iVar2]) *
                    (longlong)(local_8 % local_c)) / (longlong)local_c;
            local_14 = (int)lVar1;
            *psVar3 = (short)lVar1 + param_3[iVar2];
          }
          psVar3 = psVar3 + -1;
          local_8 = local_8 - local_2c;
          local_18 = (short *)((int)local_18 + -1);
          uVar8 = local_24;
        } while (local_18 != (short *)0x0);
      }
    }
    else if (uVar5 == 2) {
      iVar7 = param_2 + -1;
      local_8 = iVar7 * iVar2 + *(int *)(param_5 + 0x10);
      psVar3 = param_1 + param_2 * 2 + -2;
      if ((int)local_1c <= iVar7) {
        local_18 = (short *)((iVar7 - local_1c) + 1);
        do {
          iVar2 = local_8 / local_c;
          local_14 = iVar2;
          iVar7 = local_8 % local_c;
          if (iVar7 == 0) {
            *psVar3 = param_3[iVar2 * 2];
            psVar3[1] = param_3[iVar2 * 2 + 1];
          }
          else {
            *psVar3 = (short)(((longlong)((int)param_3[iVar2 * 2 + 2] - (int)param_3[iVar2 * 2]) *
                              (longlong)iVar7) / (longlong)local_c) + param_3[iVar2 * 2];
            sVar4 = param_3[iVar2 * 2 + 1];
            local_14 = (int)sVar4;
            lVar1 = ((longlong)((int)param_3[iVar2 * 2 + 3] - (int)sVar4) * (longlong)iVar7) /
                    (longlong)local_c;
            local_10 = (double *)(int)lVar1;
            psVar3[1] = (short)lVar1 + sVar4;
          }
          psVar3 = psVar3 + -2;
          local_8 = local_8 - local_2c;
          local_18 = (short *)((int)local_18 + -1);
          uVar8 = local_24;
        } while (local_18 != (short *)0x0);
      }
    }
    else {
      if ((int)uVar5 < 1) goto LAB_5f9962f7;
      local_34 = param_2 + -1;
      local_20 = param_3;
      local_38 = local_34 * iVar2;
      local_18 = param_1 + local_34 * uVar5;
      local_28 = uVar5;
      do {
        local_8 = local_34 * iVar2 + *(int *)(param_5 + 0x10);
        uVar8 = uVar5;
        if ((int)local_1c <= local_34) {
          local_30 = (short *)((local_34 - local_1c) + 1);
          local_14 = uVar5 * 2;
          psVar3 = local_18;
          do {
            local_10 = (double *)(local_8 / local_c);
            psVar6 = local_20 + (local_8 / local_c) * local_24;
            if (local_8 % local_c == 0) {
              *psVar3 = *psVar6;
            }
            else {
              lVar1 = ((longlong)((int)psVar6[uVar5] - (int)*psVar6) * (longlong)(local_8 % local_c)
                      ) / (longlong)local_c;
              local_10 = (double *)(int)lVar1;
              *psVar3 = (short)lVar1 + *psVar6;
            }
            psVar3 = psVar3 + -uVar5;
            local_8 = local_8 - local_2c;
            local_30 = (short *)((int)local_30 + -1);
            uVar8 = local_24;
          } while (local_30 != (short *)0x0);
        }
        local_20 = local_20 + 1;
        local_28 = local_28 - 1;
        local_18 = local_18 + 1;
        uVar5 = uVar8;
      } while (local_28 != 0);
    }
    uVar5 = uVar8;
    if (0 < (int)uVar8) {
      local_18 = (short *)((int)param_3 - (int)param_1);
      local_20 = (short *)uVar8;
      do {
        iVar7 = *(int *)(param_5 + 0x10) + local_c;
        local_30 = param_1;
        local_8 = iVar7;
        iVar2 = ftol();
        psVar3 = param_1;
        if (0 < (int)local_1c) {
          local_34 = *(short *)((int)local_18 + (int)param_1) - iVar2;
          local_28 = local_1c;
          do {
            *param_1 = (short)iVar2 +
                       (short)(((longlong)local_34 * (longlong)local_8) / (longlong)local_c);
            param_1 = param_1 + local_24;
            iVar7 = iVar7 + local_2c;
            local_28 = local_28 - 1;
            local_8 = iVar7;
            psVar3 = local_30;
          } while (local_28 != 0);
        }
        param_1 = psVar3 + 1;
        local_20 = (short *)((int)local_20 - 1);
        local_30 = param_1;
        uVar5 = local_24;
      } while (local_20 != (short *)0x0);
    }
LAB_5f9962f7:
    *(int *)(param_5 + 0x10) = local_3c;
    if (0 < (int)uVar5) {
      pdVar9 = local_13c;
      puVar10 = (undefined4 *)(param_5 + 0x30);
      for (iVar2 = (uVar5 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *(undefined4 *)pdVar9;
        pdVar9 = (double *)((int)pdVar9 + 4);
        puVar10 = puVar10 + 1;
      }
    }
    if (*(int *)(param_5 + 0x1d64) != 0) {
      param_4 = param_4 + -1;
    }
    iVar2 = *(int *)(param_5 + 0x10) - local_c * param_4;
    *(int *)(param_5 + 0x10) = iVar2;
    *(double *)(param_5 + 0x20) = (double)iVar2 / (double)local_c;
    return param_2;
  }
  iVar2 = 0;
  local_1c = 0;
  if (0 < (int)uVar5) {
    local_10 = local_13c;
    param_3 = param_3 + (param_4 + -1) * uVar5;
    local_18 = (short *)uVar5;
    do {
      local_28 = (int)*param_3;
      *local_10 = (double)(int)*param_3;
      param_3 = param_3 + 1;
      local_10 = local_10 + 1;
      local_18 = (short *)((int)local_18 - 1);
    } while (local_18 != (short *)0x0);
  }
  if (iVar7 < 0) {
    local_8 = iVar7 + local_c;
    if (0 < (int)uVar5) {
      local_10 = (double *)(param_5 + 0x30);
      local_18 = (short *)((int)psVar3 - (int)param_1);
      psVar6 = param_1;
      local_20 = (short *)uVar5;
      do {
        iVar2 = ftol();
        *psVar6 = (short)(((longlong)(*(short *)((int)local_18 + (int)psVar6) - iVar2) *
                          (longlong)local_8) / (longlong)local_c) + (short)iVar2;
        psVar6 = psVar6 + 1;
        local_20 = (short *)((int)local_20 - 1);
        local_10 = (double *)((int)local_10 + 8);
        uVar5 = local_24;
      } while (local_20 != (short *)0x0);
    }
    local_1c = 1;
    iVar2 = 1;
    iVar7 = *(int *)(param_5 + 0x10) + local_2c;
    local_8 = iVar7;
  }
  uVar8 = uVar5;
  if (uVar5 == 1) {
    param_3 = param_1 + iVar2;
    if (iVar2 < param_2) {
      param_2 = param_2 - iVar2;
      local_1c = iVar2 + param_2;
      do {
        local_8 = local_8 / local_c;
        if (iVar7 % local_c == 0) {
          sVar4 = psVar3[local_8];
        }
        else {
          sVar4 = (short)(((longlong)((int)psVar3[local_8 + 1] - (int)psVar3[local_8]) *
                          (longlong)(iVar7 % local_c)) / (longlong)local_c) + psVar3[local_8];
        }
        *param_3 = sVar4;
        param_3 = param_3 + 1;
        iVar7 = iVar7 + local_2c;
        param_2 = param_2 + -1;
        local_8 = iVar7;
        uVar8 = local_24;
      } while (param_2 != 0);
    }
  }
  else if (uVar5 == 2) {
    param_3 = param_1 + iVar2 * 2;
    if (iVar2 < param_2) {
      param_2 = param_2 - iVar2;
      local_1c = iVar2 + param_2;
      do {
        local_8 = local_8 / local_c;
        iVar2 = iVar7 % local_c;
        if (iVar2 == 0) {
          *param_3 = psVar3[local_8 * 2];
          param_3[1] = psVar3[local_8 * 2 + 1];
        }
        else {
          *param_3 = (short)(((longlong)((int)psVar3[local_8 * 2 + 2] - (int)psVar3[local_8 * 2]) *
                             (longlong)iVar2) / (longlong)local_c) + psVar3[local_8 * 2];
          sVar4 = psVar3[local_8 * 2 + 1];
          local_14 = (int)sVar4;
          param_3[1] = (short)(((longlong)((int)psVar3[local_8 * 2 + 3] - (int)sVar4) *
                               (longlong)iVar2) / (longlong)local_c) + sVar4;
        }
        param_3 = param_3 + 2;
        iVar7 = iVar7 + local_2c;
        param_2 = param_2 + -1;
        local_8 = iVar7;
        uVar8 = local_24;
      } while (param_2 != 0);
    }
  }
  else {
    local_10 = (double *)0x0;
    if ((int)uVar5 < 1) goto LAB_5f995f29;
    local_20 = psVar3;
    do {
      psVar3 = param_1 + iVar2 * uVar5 + (int)local_10;
      uVar8 = uVar5;
      if (iVar2 < param_2) {
        local_18 = (short *)(param_2 - iVar2);
        iVar2 = iVar2 + (int)local_18;
        local_14 = uVar5 * 2;
        local_1c = iVar2;
        do {
          psVar6 = local_20 + (local_8 / local_c) * local_24;
          if (iVar7 % local_c == 0) {
            *psVar3 = *psVar6;
          }
          else {
            *psVar3 = (short)(((longlong)((int)psVar6[uVar5] - (int)*psVar6) *
                              (longlong)(iVar7 % local_c)) / (longlong)local_c) + *psVar6;
          }
          psVar3 = psVar3 + uVar5;
          iVar7 = iVar7 + local_2c;
          local_18 = (short *)((int)local_18 + -1);
          local_8 = iVar7;
          uVar8 = local_24;
        } while (local_18 != (short *)0x0);
      }
      local_10 = (double *)((int)local_10 + 1);
      local_20 = local_20 + 1;
      uVar5 = uVar8;
    } while ((int)local_10 < (int)uVar8);
  }
  if (0 < (int)uVar8) {
    pdVar9 = local_13c;
    puVar10 = (undefined4 *)(param_5 + 0x30);
    for (iVar2 = (uVar8 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *(undefined4 *)pdVar9;
      pdVar9 = (double *)((int)pdVar9 + 4);
      puVar10 = puVar10 + 1;
    }
  }
LAB_5f995f29:
  iVar2 = (iVar7 - local_c * param_4) % local_c;
  *(int *)(param_5 + 0x10) = iVar2;
  *(double *)(param_5 + 0x20) = (double)iVar2 / (double)local_c;
  return local_1c;
}


