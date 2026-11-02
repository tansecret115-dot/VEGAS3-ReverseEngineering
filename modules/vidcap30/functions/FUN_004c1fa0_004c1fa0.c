/* Module: vidcap30.exe
   Function: FUN_004c1fa0
   Address: 004c1fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c1fa0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  undefined4 *puVar10;
  double local_13c [32];
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  double *local_10;
  int local_c;
  int local_8;
  
  iVar3 = (int)param_3;
  iVar4 = *(int *)(param_5 + 8);
  uVar6 = *(uint *)(param_5 + 4);
  iVar7 = *(int *)(param_5 + 0x10);
  local_24 = uVar6;
  local_28 = iVar4;
  local_c = *(int *)(param_5 + 0xc);
  local_8 = iVar7;
  if (iVar4 < *(int *)(param_5 + 0xc)) {
    local_8 = *(int *)(param_5 + 0x10);
    local_1c = 0;
    if (*(int *)(param_5 + 0x1d64) == 0) {
      iVar7 = param_4 + -1;
    }
    else {
      iVar7 = param_4 + -2;
    }
    if (0 < (int)uVar6) {
      piVar5 = (int *)((int)param_3 + iVar7 * uVar6 * 4);
      uVar8 = uVar6;
      pdVar9 = local_13c;
      do {
        iVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        uVar8 = uVar8 - 1;
        *pdVar9 = (double)iVar7;
        pdVar9 = pdVar9 + 1;
      } while (uVar8 != 0);
    }
    if (local_8 < 0) {
      do {
        local_8 = local_8 + iVar4;
        local_1c = local_1c + 1;
      } while (local_8 < 0);
    }
    local_38 = iVar4 * param_2 + *(int *)(param_5 + 0x10);
    uVar8 = uVar6;
    if (uVar6 == 1) {
      iVar7 = param_2 + -1;
      local_8 = iVar7 * iVar4 + *(int *)(param_5 + 0x10);
      piVar5 = param_1 + param_2 + -1;
      if ((int)local_1c <= iVar7) {
        local_18 = (int *)((iVar7 - local_1c) + 1);
        do {
          local_14 = local_8 / local_c;
          if (local_8 % local_c == 0) {
            *piVar5 = *(int *)((int)param_3 + local_14 * 4);
          }
          else {
            iVar4 = *(int *)((int)param_3 + local_14 * 4);
            local_14 = (int)(((longlong)(*(int *)((int)param_3 + 4 + local_14 * 4) - iVar4) *
                             (longlong)(local_8 % local_c)) / (longlong)local_c);
            *piVar5 = local_14 + iVar4;
          }
          piVar5 = piVar5 + -1;
          local_8 = local_8 - local_28;
          local_18 = (int *)((int)local_18 + -1);
          uVar8 = local_24;
        } while (local_18 != (int *)0x0);
      }
    }
    else if (uVar6 == 2) {
      iVar7 = param_2 + -1;
      local_8 = iVar7 * iVar4 + *(int *)(param_5 + 0x10);
      piVar5 = param_1 + param_2 * 2 + -2;
      if ((int)local_1c <= iVar7) {
        local_18 = (int *)((iVar7 - local_1c) + 1);
        do {
          iVar4 = local_8 / local_c;
          local_14 = iVar4;
          iVar7 = local_8 % local_c;
          if (iVar7 == 0) {
            *piVar5 = *(int *)((int)param_3 + iVar4 * 8);
            piVar5[1] = *(int *)((int)param_3 + 4 + iVar4 * 8);
          }
          else {
            iVar3 = *(int *)((int)param_3 + iVar4 * 8);
            *piVar5 = (int)(((longlong)(*(int *)((int)param_3 + 8 + iVar4 * 8) - iVar3) *
                            (longlong)iVar7) / (longlong)local_c) + iVar3;
            local_14 = *(int *)((int)param_3 + 4 + iVar4 * 8);
            local_10 = (double *)
                       (((longlong)(*(int *)((int)param_3 + 0xc + iVar4 * 8) - local_14) *
                        (longlong)iVar7) / (longlong)local_c);
            piVar5[1] = (int)local_10 + local_14;
          }
          piVar5 = piVar5 + -2;
          local_8 = local_8 - local_28;
          local_18 = (int *)((int)local_18 + -1);
          uVar8 = local_24;
        } while (local_18 != (int *)0x0);
      }
    }
    else {
      if ((int)uVar6 < 1) goto LAB_004c2694;
      local_34 = param_2 + -1;
      local_20 = (uint)param_3;
      local_3c = local_34 * iVar4;
      local_18 = param_1 + local_34 * uVar6;
      local_2c = uVar6;
      do {
        local_8 = local_34 * iVar4 + *(int *)(param_5 + 0x10);
        uVar8 = uVar6;
        if ((int)local_1c <= local_34) {
          local_30 = (int *)((local_34 - local_1c) + 1);
          local_14 = uVar6 * 4;
          piVar5 = local_18;
          do {
            local_10 = (double *)(local_8 / local_c);
            piVar1 = (int *)(local_20 + (local_8 / local_c) * local_24 * 4);
            if (local_8 % local_c == 0) {
              *piVar5 = *piVar1;
            }
            else {
              local_10 = (double *)
                         (((longlong)(piVar1[uVar6] - *piVar1) * (longlong)(local_8 % local_c)) /
                         (longlong)local_c);
              *piVar5 = (int)local_10 + *piVar1;
            }
            piVar5 = piVar5 + -uVar6;
            local_8 = local_8 - local_28;
            local_30 = (int *)((int)local_30 + -1);
            uVar8 = local_24;
          } while (local_30 != (int *)0x0);
        }
        local_20 = local_20 + 4;
        local_2c = local_2c - 1;
        local_18 = local_18 + 1;
        uVar6 = uVar8;
      } while (local_2c != 0);
    }
    uVar6 = uVar8;
    if (0 < (int)uVar8) {
      local_18 = (int *)((int)param_3 - (int)param_1);
      local_20 = uVar8;
      do {
        iVar7 = *(int *)(param_5 + 0x10) + local_c;
        local_30 = param_1;
        local_8 = iVar7;
        iVar4 = ftol();
        piVar5 = param_1;
        if (0 < (int)local_1c) {
          local_34 = *(int *)((int)local_18 + (int)param_1) - iVar4;
          local_2c = local_1c;
          do {
            *param_1 = (int)(((longlong)local_34 * (longlong)local_8) / (longlong)local_c) + iVar4;
            param_1 = param_1 + local_24;
            iVar7 = iVar7 + local_28;
            local_2c = local_2c - 1;
            local_8 = iVar7;
            piVar5 = local_30;
          } while (local_2c != 0);
        }
        param_1 = piVar5 + 1;
        local_20 = local_20 - 1;
        local_30 = param_1;
        uVar6 = local_24;
      } while (local_20 != 0);
    }
LAB_004c2694:
    *(int *)(param_5 + 0x10) = local_38;
    if (0 < (int)uVar6) {
      pdVar9 = local_13c;
      puVar10 = (undefined4 *)(param_5 + 0x30);
      for (iVar4 = (uVar6 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *(undefined4 *)pdVar9;
        pdVar9 = (double *)((int)pdVar9 + 4);
        puVar10 = puVar10 + 1;
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
  if (0 < (int)uVar6) {
    local_10 = local_13c;
    param_3 = (int *)((int)param_3 + (param_4 + -1) * uVar6 * 4);
    local_18 = (int *)uVar6;
    do {
      *local_10 = (double)*param_3;
      param_3 = param_3 + 1;
      local_10 = local_10 + 1;
      local_18 = (int *)((int)local_18 - 1);
    } while (local_18 != (int *)0x0);
  }
  if (iVar7 < 0) {
    local_8 = iVar7 + local_c;
    if (0 < (int)uVar6) {
      local_10 = (double *)(param_5 + 0x30);
      local_18 = (int *)(iVar3 - (int)param_1);
      piVar5 = param_1;
      local_20 = uVar6;
      do {
        iVar4 = ftol();
        *piVar5 = (int)(((longlong)(*(int *)((int)local_18 + (int)piVar5) - iVar4) *
                        (longlong)local_8) / (longlong)local_c) + iVar4;
        piVar5 = piVar5 + 1;
        local_20 = local_20 - 1;
        local_10 = (double *)((int)local_10 + 8);
        uVar6 = local_24;
      } while (local_20 != 0);
    }
    local_1c = 1;
    iVar4 = 1;
    iVar7 = *(int *)(param_5 + 0x10) + local_28;
    local_8 = iVar7;
  }
  uVar8 = uVar6;
  if (uVar6 == 1) {
    param_3 = param_1 + iVar4;
    if (iVar4 < param_2) {
      param_2 = param_2 - iVar4;
      local_1c = iVar4 + param_2;
      do {
        local_8 = local_8 / local_c;
        if (iVar7 % local_c == 0) {
          iVar4 = *(int *)(iVar3 + local_8 * 4);
        }
        else {
          iVar4 = *(int *)(iVar3 + local_8 * 4);
          iVar4 = (int)(((longlong)(*(int *)(iVar3 + 4 + local_8 * 4) - iVar4) *
                        (longlong)(iVar7 % local_c)) / (longlong)local_c) + iVar4;
        }
        *param_3 = iVar4;
        param_3 = param_3 + 1;
        iVar7 = iVar7 + local_28;
        param_2 = param_2 + -1;
        local_8 = iVar7;
        uVar8 = local_24;
      } while (param_2 != 0);
    }
  }
  else if (uVar6 == 2) {
    param_3 = param_1 + iVar4 * 2;
    if (iVar4 < param_2) {
      param_2 = param_2 - iVar4;
      local_1c = iVar4 + param_2;
      do {
        local_8 = local_8 / local_c;
        iVar4 = iVar7 % local_c;
        if (iVar4 == 0) {
          *param_3 = *(int *)(iVar3 + local_8 * 8);
          param_3[1] = *(int *)(iVar3 + 4 + local_8 * 8);
        }
        else {
          iVar2 = *(int *)(iVar3 + local_8 * 8);
          *param_3 = (int)(((longlong)(*(int *)(iVar3 + 8 + local_8 * 8) - iVar2) * (longlong)iVar4)
                          / (longlong)local_c) + iVar2;
          local_14 = *(int *)(iVar3 + 4 + local_8 * 8);
          param_3[1] = (int)(((longlong)(*(int *)(iVar3 + 0xc + local_8 * 8) - local_14) *
                             (longlong)iVar4) / (longlong)local_c) + local_14;
        }
        param_3 = param_3 + 2;
        iVar7 = iVar7 + local_28;
        param_2 = param_2 + -1;
        local_8 = iVar7;
        uVar8 = local_24;
      } while (param_2 != 0);
    }
  }
  else {
    local_10 = (double *)0x0;
    if ((int)uVar6 < 1) goto LAB_004c22ee;
    local_20 = iVar3;
    do {
      piVar5 = param_1 + iVar4 * uVar6 + (int)local_10;
      uVar8 = uVar6;
      if (iVar4 < param_2) {
        local_18 = (int *)(param_2 - iVar4);
        iVar4 = iVar4 + (int)local_18;
        local_14 = uVar6 * 4;
        local_1c = iVar4;
        do {
          piVar1 = (int *)(local_20 + (local_8 / local_c) * local_24 * 4);
          if (iVar7 % local_c == 0) {
            *piVar5 = *piVar1;
          }
          else {
            *piVar5 = (int)(((longlong)(piVar1[uVar6] - *piVar1) * (longlong)(iVar7 % local_c)) /
                           (longlong)local_c) + *piVar1;
          }
          piVar5 = piVar5 + uVar6;
          iVar7 = iVar7 + local_28;
          local_18 = (int *)((int)local_18 + -1);
          local_8 = iVar7;
          uVar8 = local_24;
        } while (local_18 != (int *)0x0);
      }
      local_10 = (double *)((int)local_10 + 1);
      local_20 = local_20 + 4;
      uVar6 = uVar8;
    } while ((int)local_10 < (int)uVar8);
  }
  if (0 < (int)uVar8) {
    pdVar9 = local_13c;
    puVar10 = (undefined4 *)(param_5 + 0x30);
    for (iVar4 = (uVar8 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *(undefined4 *)pdVar9;
      pdVar9 = (double *)((int)pdVar9 + 4);
      puVar10 = puVar10 + 1;
    }
  }
LAB_004c22ee:
  iVar4 = (iVar7 - local_c * param_4) % local_c;
  *(int *)(param_5 + 0x10) = iVar4;
  *(double *)(param_5 + 0x20) = (double)iVar4 / (double)local_c;
  return local_1c;
}


