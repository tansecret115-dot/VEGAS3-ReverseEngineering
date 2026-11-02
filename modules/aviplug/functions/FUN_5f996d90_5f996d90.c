/* Module: aviplug.dll
   Function: FUN_5f996d90
   Address: 5f996d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f996d90(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  undefined4 *puVar8;
  double local_13c [32];
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  double *local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_3;
  iVar1 = *(int *)(param_5 + 8);
  uVar3 = *(uint *)(param_5 + 4);
  iVar5 = *(int *)(param_5 + 0x10);
  local_24 = uVar3;
  local_28 = iVar1;
  local_c = *(int *)(param_5 + 0xc);
  local_8 = iVar5;
  if (iVar1 < *(int *)(param_5 + 0xc)) {
    local_8 = *(int *)(param_5 + 0x10);
    local_1c = 0;
    if (*(int *)(param_5 + 0x1d64) == 0) {
      iVar5 = param_4 + -1;
    }
    else {
      iVar5 = param_4 + -2;
    }
    if (0 < (int)uVar3) {
      piVar2 = param_3 + iVar5 * uVar3;
      uVar6 = uVar3;
      pdVar7 = local_13c;
      do {
        iVar5 = *piVar2;
        piVar2 = piVar2 + 1;
        uVar6 = uVar6 - 1;
        *pdVar7 = (double)iVar5;
        pdVar7 = pdVar7 + 1;
      } while (uVar6 != 0);
    }
    if (local_8 < 0) {
      do {
        local_8 = local_8 + iVar1;
        local_1c = local_1c + 1;
      } while (local_8 < 0);
    }
    local_38 = iVar1 * param_2 + *(int *)(param_5 + 0x10);
    uVar6 = uVar3;
    if (uVar3 == 1) {
      iVar5 = param_2 + -1;
      local_8 = iVar5 * iVar1 + *(int *)(param_5 + 0x10);
      piVar2 = param_1 + param_2 + -1;
      if ((int)local_1c <= iVar5) {
        local_18 = (int *)((iVar5 - local_1c) + 1);
        do {
          iVar1 = local_8 / local_c;
          local_14 = iVar1;
          if (local_8 % local_c == 0) {
            *piVar2 = param_3[iVar1];
          }
          else {
            local_14 = (int)(((longlong)(param_3[iVar1 + 1] - param_3[iVar1]) *
                             (longlong)(local_8 % local_c)) / (longlong)local_c);
            *piVar2 = local_14 + param_3[iVar1];
          }
          piVar2 = piVar2 + -1;
          local_8 = local_8 - local_28;
          local_18 = (int *)((int)local_18 + -1);
          uVar6 = local_24;
        } while (local_18 != (int *)0x0);
      }
    }
    else if (uVar3 == 2) {
      iVar5 = param_2 + -1;
      local_8 = iVar5 * iVar1 + *(int *)(param_5 + 0x10);
      piVar2 = param_1 + param_2 * 2 + -2;
      if ((int)local_1c <= iVar5) {
        local_18 = (int *)((iVar5 - local_1c) + 1);
        do {
          iVar1 = local_8 / local_c;
          local_14 = iVar1;
          iVar5 = local_8 % local_c;
          if (iVar5 == 0) {
            *piVar2 = param_3[iVar1 * 2];
            piVar2[1] = param_3[iVar1 * 2 + 1];
          }
          else {
            *piVar2 = (int)(((longlong)(param_3[iVar1 * 2 + 2] - param_3[iVar1 * 2]) *
                            (longlong)iVar5) / (longlong)local_c) + param_3[iVar1 * 2];
            local_14 = param_3[iVar1 * 2 + 1];
            local_10 = (double *)
                       (((longlong)(param_3[iVar1 * 2 + 3] - local_14) * (longlong)iVar5) /
                       (longlong)local_c);
            piVar2[1] = (int)local_10 + local_14;
          }
          piVar2 = piVar2 + -2;
          local_8 = local_8 - local_28;
          local_18 = (int *)((int)local_18 + -1);
          uVar6 = local_24;
        } while (local_18 != (int *)0x0);
      }
    }
    else {
      if ((int)uVar3 < 1) goto LAB_5f997484;
      local_34 = param_2 + -1;
      local_20 = param_3;
      local_3c = local_34 * iVar1;
      local_18 = param_1 + local_34 * uVar3;
      local_2c = uVar3;
      do {
        local_8 = local_34 * iVar1 + *(int *)(param_5 + 0x10);
        uVar6 = uVar3;
        if ((int)local_1c <= local_34) {
          local_30 = (int *)((local_34 - local_1c) + 1);
          local_14 = uVar3 * 4;
          piVar2 = local_18;
          do {
            local_10 = (double *)(local_8 / local_c);
            piVar4 = local_20 + (local_8 / local_c) * local_24;
            if (local_8 % local_c == 0) {
              *piVar2 = *piVar4;
            }
            else {
              local_10 = (double *)
                         (((longlong)(piVar4[uVar3] - *piVar4) * (longlong)(local_8 % local_c)) /
                         (longlong)local_c);
              *piVar2 = (int)local_10 + *piVar4;
            }
            piVar2 = piVar2 + -uVar3;
            local_8 = local_8 - local_28;
            local_30 = (int *)((int)local_30 + -1);
            uVar6 = local_24;
          } while (local_30 != (int *)0x0);
        }
        local_20 = local_20 + 1;
        local_2c = local_2c - 1;
        local_18 = local_18 + 1;
        uVar3 = uVar6;
      } while (local_2c != 0);
    }
    uVar3 = uVar6;
    if (0 < (int)uVar6) {
      local_18 = (int *)((int)param_3 - (int)param_1);
      local_20 = (int *)uVar6;
      do {
        iVar5 = *(int *)(param_5 + 0x10) + local_c;
        local_30 = param_1;
        local_8 = iVar5;
        iVar1 = ftol();
        piVar2 = param_1;
        if (0 < (int)local_1c) {
          local_34 = *(int *)((int)local_18 + (int)param_1) - iVar1;
          local_2c = local_1c;
          do {
            *param_1 = (int)(((longlong)local_34 * (longlong)local_8) / (longlong)local_c) + iVar1;
            param_1 = param_1 + local_24;
            iVar5 = iVar5 + local_28;
            local_2c = local_2c - 1;
            local_8 = iVar5;
            piVar2 = local_30;
          } while (local_2c != 0);
        }
        param_1 = piVar2 + 1;
        local_20 = (int *)((int)local_20 - 1);
        local_30 = param_1;
        uVar3 = local_24;
      } while (local_20 != (int *)0x0);
    }
LAB_5f997484:
    *(int *)(param_5 + 0x10) = local_38;
    if (0 < (int)uVar3) {
      pdVar7 = local_13c;
      puVar8 = (undefined4 *)(param_5 + 0x30);
      for (iVar1 = (uVar3 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *(undefined4 *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + 4);
        puVar8 = puVar8 + 1;
      }
    }
    if (*(int *)(param_5 + 0x1d64) != 0) {
      param_4 = param_4 + -1;
    }
    iVar1 = *(int *)(param_5 + 0x10) - local_c * param_4;
    *(int *)(param_5 + 0x10) = iVar1;
    *(double *)(param_5 + 0x20) = (double)iVar1 / (double)local_c;
    return param_2;
  }
  iVar1 = 0;
  local_1c = 0;
  if (0 < (int)uVar3) {
    local_10 = local_13c;
    param_3 = param_3 + (param_4 + -1) * uVar3;
    local_18 = (int *)uVar3;
    do {
      *local_10 = (double)*param_3;
      param_3 = param_3 + 1;
      local_10 = local_10 + 1;
      local_18 = (int *)((int)local_18 - 1);
    } while (local_18 != (int *)0x0);
  }
  if (iVar5 < 0) {
    local_8 = iVar5 + local_c;
    if (0 < (int)uVar3) {
      local_10 = (double *)(param_5 + 0x30);
      local_18 = (int *)((int)piVar2 - (int)param_1);
      piVar4 = param_1;
      local_20 = (int *)uVar3;
      do {
        iVar1 = ftol();
        *piVar4 = (int)(((longlong)(*(int *)((int)local_18 + (int)piVar4) - iVar1) *
                        (longlong)local_8) / (longlong)local_c) + iVar1;
        piVar4 = piVar4 + 1;
        local_20 = (int *)((int)local_20 - 1);
        local_10 = (double *)((int)local_10 + 8);
        uVar3 = local_24;
      } while (local_20 != (int *)0x0);
    }
    local_1c = 1;
    iVar1 = 1;
    iVar5 = *(int *)(param_5 + 0x10) + local_28;
    local_8 = iVar5;
  }
  uVar6 = uVar3;
  if (uVar3 == 1) {
    param_3 = param_1 + iVar1;
    if (iVar1 < param_2) {
      param_2 = param_2 - iVar1;
      local_1c = iVar1 + param_2;
      do {
        local_8 = local_8 / local_c;
        if (iVar5 % local_c == 0) {
          iVar1 = piVar2[local_8];
        }
        else {
          iVar1 = (int)(((longlong)(piVar2[local_8 + 1] - piVar2[local_8]) *
                        (longlong)(iVar5 % local_c)) / (longlong)local_c) + piVar2[local_8];
        }
        *param_3 = iVar1;
        param_3 = param_3 + 1;
        iVar5 = iVar5 + local_28;
        param_2 = param_2 + -1;
        local_8 = iVar5;
        uVar6 = local_24;
      } while (param_2 != 0);
    }
  }
  else if (uVar3 == 2) {
    param_3 = param_1 + iVar1 * 2;
    if (iVar1 < param_2) {
      param_2 = param_2 - iVar1;
      local_1c = iVar1 + param_2;
      do {
        local_8 = local_8 / local_c;
        iVar1 = iVar5 % local_c;
        if (iVar1 == 0) {
          *param_3 = piVar2[local_8 * 2];
          param_3[1] = piVar2[local_8 * 2 + 1];
        }
        else {
          *param_3 = (int)(((longlong)(piVar2[local_8 * 2 + 2] - piVar2[local_8 * 2]) *
                           (longlong)iVar1) / (longlong)local_c) + piVar2[local_8 * 2];
          local_14 = piVar2[local_8 * 2 + 1];
          param_3[1] = (int)(((longlong)(piVar2[local_8 * 2 + 3] - local_14) * (longlong)iVar1) /
                            (longlong)local_c) + local_14;
        }
        param_3 = param_3 + 2;
        iVar5 = iVar5 + local_28;
        param_2 = param_2 + -1;
        local_8 = iVar5;
        uVar6 = local_24;
      } while (param_2 != 0);
    }
  }
  else {
    local_10 = (double *)0x0;
    if ((int)uVar3 < 1) goto LAB_5f9970de;
    local_20 = piVar2;
    do {
      piVar2 = param_1 + iVar1 * uVar3 + (int)local_10;
      uVar6 = uVar3;
      if (iVar1 < param_2) {
        local_18 = (int *)(param_2 - iVar1);
        iVar1 = iVar1 + (int)local_18;
        local_14 = uVar3 * 4;
        local_1c = iVar1;
        do {
          piVar4 = local_20 + (local_8 / local_c) * local_24;
          if (iVar5 % local_c == 0) {
            *piVar2 = *piVar4;
          }
          else {
            *piVar2 = (int)(((longlong)(piVar4[uVar3] - *piVar4) * (longlong)(iVar5 % local_c)) /
                           (longlong)local_c) + *piVar4;
          }
          piVar2 = piVar2 + uVar3;
          iVar5 = iVar5 + local_28;
          local_18 = (int *)((int)local_18 + -1);
          local_8 = iVar5;
          uVar6 = local_24;
        } while (local_18 != (int *)0x0);
      }
      local_10 = (double *)((int)local_10 + 1);
      local_20 = local_20 + 1;
      uVar3 = uVar6;
    } while ((int)local_10 < (int)uVar6);
  }
  if (0 < (int)uVar6) {
    pdVar7 = local_13c;
    puVar8 = (undefined4 *)(param_5 + 0x30);
    for (iVar1 = (uVar6 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = *(undefined4 *)pdVar7;
      pdVar7 = (double *)((int)pdVar7 + 4);
      puVar8 = puVar8 + 1;
    }
  }
LAB_5f9970de:
  iVar1 = (iVar5 - local_c * param_4) % local_c;
  *(int *)(param_5 + 0x10) = iVar1;
  *(double *)(param_5 + 0x20) = (double)iVar1 / (double)local_c;
  return local_1c;
}


