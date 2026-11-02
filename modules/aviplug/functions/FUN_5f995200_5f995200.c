/* Module: aviplug.dll
   Function: FUN_5f995200
   Address: 5f995200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f995200(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  double local_13c [32];
  int local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  byte *local_24;
  double *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  iVar8 = param_3;
  iVar3 = *(int *)(param_5 + 0x10);
  uVar1 = *(uint *)(param_5 + 4);
  local_2c = *(int *)(param_5 + 8);
  local_8 = *(int *)(param_5 + 0xc);
  local_c = iVar3;
  if (*(int *)(param_5 + 0xc) <= *(int *)(param_5 + 8)) {
    iVar8 = 0;
    local_14 = 0;
    if (0 < (int)uVar1) {
      local_20 = local_13c;
      do {
        pdVar6 = local_20;
        pbVar9 = (byte *)(param_3 + (param_4 + -1) * uVar1 + iVar8);
        iVar8 = iVar8 + 1;
        local_30 = (int)(char)(*pbVar9 ^ 0x80);
        local_20 = local_20 + 1;
        *pdVar6 = (double)local_30;
      } while (iVar8 < (int)uVar1);
    }
    if (iVar3 < 0) {
      local_c = iVar3 + local_8;
      if (0 < (int)uVar1) {
        local_28 = param_5 + 0x30;
        local_20 = (double *)(param_3 - (int)param_1);
        pbVar9 = param_1;
        local_10 = (byte *)uVar1;
        do {
          iVar8 = ftol();
          lVar2 = ((longlong)(int)(((int)(char)pbVar9[(int)local_20] ^ 0xffffff80U) - iVar8) *
                  (longlong)local_c) / (longlong)local_8;
          local_18 = (int)lVar2;
          iVar3 = local_18;
          local_18._0_1_ = (char)lVar2;
          *pbVar9 = (char)local_18 + (char)iVar8 ^ 0x80;
          pbVar9 = pbVar9 + 1;
          local_10 = (byte *)((int)local_10 - 1);
          local_28 = local_28 + 8;
          local_18 = iVar3;
        } while (local_10 != (byte *)0x0);
      }
      iVar3 = *(int *)(param_5 + 0x10) + local_2c;
      local_14 = 1;
      local_c = iVar3;
    }
    if (uVar1 == 1) {
      pbVar9 = param_1 + local_14;
      if ((int)local_14 < param_2) {
        param_2 = param_2 - local_14;
        local_14 = local_14 + param_2;
        do {
          iVar8 = local_c / local_8;
          local_1c = iVar3 % local_8;
          if (local_1c == 0) {
            *pbVar9 = *(byte *)(iVar8 + param_3);
            local_c = iVar3;
          }
          else {
            uVar7 = (int)*(char *)(iVar8 + param_3) ^ 0xffffff80;
            param_1._0_1_ =
                 (char)(((longlong)
                         (int)(((int)*(char *)(iVar8 + 1 + param_3) ^ 0xffffff80U) - uVar7) *
                        (longlong)local_1c) / (longlong)local_8);
            *pbVar9 = (char)param_1 + (char)uVar7 ^ 0x80;
          }
          pbVar9 = pbVar9 + 1;
          iVar3 = local_c + local_2c;
          param_2 = param_2 + -1;
          local_c = iVar3;
        } while (param_2 != 0);
      }
    }
    else if (uVar1 == 2) {
      local_24 = param_1 + local_14 * 2;
      if ((int)local_14 < param_2) {
        local_20 = (double *)(param_2 - local_14);
        local_14 = local_14 + (int)local_20;
        do {
          iVar8 = local_c / local_8;
          local_1c = iVar3 % local_8;
          if (local_1c == 0) {
            *local_24 = *(byte *)(param_3 + iVar8 * 2);
            local_24[1] = *(byte *)(param_3 + 1 + iVar8 * 2);
            local_c = iVar3;
          }
          else {
            uVar7 = (int)*(char *)(param_3 + iVar8 * 2) ^ 0xffffff80;
            param_2._0_1_ =
                 (char)(((longlong)
                         (int)(((int)*(char *)(param_3 + 2 + iVar8 * 2) ^ 0xffffff80U) - uVar7) *
                        (longlong)local_1c) / (longlong)local_8);
            *local_24 = (char)param_2 + (char)uVar7 ^ 0x80;
            local_28 = (int)*(char *)(param_3 + 1 + iVar8 * 2) ^ 0xffffff80;
            param_1._0_1_ =
                 (char)(((longlong)
                         (int)(((int)*(char *)(param_3 + 3 + iVar8 * 2) ^ 0xffffff80U) - local_28) *
                        (longlong)local_1c) / (longlong)local_8);
            local_24[1] = (char)param_1 + (char)local_28 ^ 0x80;
          }
          local_24 = local_24 + 2;
          iVar3 = local_c + local_2c;
          local_20 = (double *)((int)local_20 + -1);
          local_c = iVar3;
        } while (local_20 != (double *)0x0);
      }
    }
    else {
      local_28 = 0;
      if ((int)uVar1 < 1) goto LAB_5f99555e;
      do {
        local_20 = (double *)(param_3 + local_28);
        pbVar9 = param_1 + local_14 * uVar1 + local_28;
        if ((int)local_14 < param_2) {
          local_10 = (byte *)(param_2 - local_14);
          local_14 = local_14 + (int)local_10;
          do {
            local_18 = local_c / local_8;
            pbVar5 = (byte *)((local_c / local_8) * uVar1 + param_3 + local_28);
            local_1c = iVar3 % local_8;
            if (local_1c == 0) {
              *pbVar9 = *pbVar5;
              local_c = iVar3;
            }
            else {
              lVar2 = ((longlong)
                       (int)(((int)(char)pbVar5[uVar1] ^ 0xffffff80U) -
                            ((int)(char)*pbVar5 ^ 0xffffff80U)) * (longlong)local_1c) /
                      (longlong)local_8;
              local_18 = (int)lVar2;
              local_18._0_1_ = (char)lVar2;
              *pbVar9 = (char)local_18 + (char)((int)(char)*pbVar5 ^ 0xffffff80U) ^ 0x80;
            }
            pbVar9 = pbVar9 + uVar1;
            iVar3 = local_c + local_2c;
            local_10 = (byte *)((int)local_10 + -1);
            local_c = iVar3;
          } while (local_10 != (byte *)0x0);
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)uVar1);
    }
    if (0 < (int)uVar1) {
      pdVar6 = local_13c;
      puVar10 = (undefined4 *)(param_5 + 0x30);
      for (iVar8 = (uVar1 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *(undefined4 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        puVar10 = puVar10 + 1;
      }
    }
LAB_5f99555e:
    iVar3 = (iVar3 - local_8 * param_4) % local_8;
    *(int *)(param_5 + 0x10) = iVar3;
    *(double *)(param_5 + 0x20) = (double)iVar3 / (double)local_8;
    return local_14;
  }
  local_c = *(int *)(param_5 + 0x10);
  iVar4 = 0;
  local_18 = 0;
  iVar3 = param_4 + -2;
  if (*(int *)(param_5 + 0x1d64) == 0) {
    iVar3 = param_4 + -1;
  }
  if (0 < (int)uVar1) {
    local_30 = iVar3 * uVar1 + param_3;
    pdVar6 = local_13c;
    do {
      pbVar9 = (byte *)(local_30 + iVar4);
      iVar4 = iVar4 + 1;
      local_20 = (double *)(int)(char)(*pbVar9 ^ 0x80);
      *pdVar6 = (double)(int)local_20;
      pdVar6 = pdVar6 + 1;
    } while (iVar4 < (int)uVar1);
  }
  for (; local_c < 0; local_c = local_c + local_2c) {
    local_18 = local_18 + 1;
  }
  local_c = *(int *)(param_5 + 0x10);
  local_3c = local_2c * param_2 + local_c;
  if (uVar1 == 1) {
    iVar3 = param_2 + -1;
    local_c = iVar3 * local_2c + local_c;
    local_24 = param_1 + param_2 + -1;
    if (local_18 <= iVar3) {
      local_20 = (double *)((iVar3 - local_18) + 1);
      do {
        iVar3 = local_c / local_8;
        local_1c = local_c % local_8;
        if (local_1c == 0) {
          *local_24 = *(byte *)(iVar3 + iVar8);
        }
        else {
          uVar7 = (int)*(char *)(iVar3 + iVar8) ^ 0xffffff80;
          param_3._0_1_ =
               (char)(((longlong)(int)(((int)*(char *)(iVar3 + 1 + iVar8) ^ 0xffffff80U) - uVar7) *
                      (longlong)local_1c) / (longlong)local_8);
          *local_24 = (char)param_3 + (char)uVar7 ^ 0x80;
        }
        local_c = local_c - local_2c;
        local_20 = (double *)((int)local_20 + -1);
        local_24 = local_24 + -1;
      } while (local_20 != (double *)0x0);
    }
  }
  else if (uVar1 == 2) {
    iVar3 = param_2 + -1;
    local_c = iVar3 * local_2c + local_c;
    local_24 = param_1 + param_2 * 2 + -2;
    if (local_18 <= iVar3) {
      local_20 = (double *)((iVar3 - local_18) + 1);
      do {
        local_14 = local_c / local_8;
        local_1c = local_c % local_8;
        if (local_1c == 0) {
          *local_24 = *(byte *)(param_3 + local_14 * 2);
          local_24[1] = *(byte *)(param_3 + 1 + local_14 * 2);
        }
        else {
          uVar7 = (int)*(char *)(param_3 + local_14 * 2) ^ 0xffffff80;
          local_10._0_1_ =
               (char)(((longlong)
                       (int)(((int)*(char *)(param_3 + 2 + local_14 * 2) ^ 0xffffff80U) - uVar7) *
                      (longlong)local_1c) / (longlong)local_8);
          *local_24 = (char)local_10 + (char)uVar7 ^ 0x80;
          local_28 = (int)*(char *)(param_3 + 1 + local_14 * 2) ^ 0xffffff80;
          uVar7 = local_28;
          lVar2 = ((longlong)
                   (int)(((int)*(char *)(param_3 + 3 + local_14 * 2) ^ 0xffffff80U) - local_28) *
                  (longlong)local_1c) / (longlong)local_8;
          local_10 = (byte *)(int)lVar2;
          local_10._0_1_ = (char)lVar2;
          local_24[1] = (char)local_10 + (char)local_28 ^ 0x80;
          local_28 = uVar7;
        }
        local_c = local_c - local_2c;
        local_20 = (double *)((int)local_20 + -1);
        local_24 = local_24 + -2;
      } while (local_20 != (double *)0x0);
    }
  }
  else {
    local_28 = 0;
    if ((int)uVar1 < 1) goto LAB_5f99595a;
    local_14 = param_2 + -1;
    local_38 = local_14 * local_2c;
    local_34 = param_1 + local_14 * uVar1;
    do {
      local_20 = (double *)(local_28 + param_3);
      local_c = local_14 * local_2c + *(int *)(param_5 + 0x10);
      local_24 = param_1 + local_14 * uVar1 + local_28;
      if (local_18 <= (int)local_14) {
        local_30 = (local_14 - local_18) + 1;
        do {
          local_10 = (byte *)(local_c / local_8);
          local_1c = local_c % local_8;
          pbVar9 = (byte *)((local_c / local_8) * uVar1 + local_28 + param_3);
          if (local_1c == 0) {
            *local_24 = *pbVar9;
          }
          else {
            lVar2 = ((longlong)
                     (int)(((int)(char)pbVar9[uVar1] ^ 0xffffff80U) -
                          ((int)(char)*pbVar9 ^ 0xffffff80U)) * (longlong)local_1c) /
                    (longlong)local_8;
            local_10 = (byte *)(int)lVar2;
            local_10._0_1_ = (char)lVar2;
            *local_24 = (char)local_10 + (char)((int)(char)*pbVar9 ^ 0xffffff80U) ^ 0x80;
          }
          local_c = local_c - local_2c;
          local_30 = local_30 + -1;
          local_24 = local_24 + -uVar1;
        } while (local_30 != 0);
      }
      local_28 = local_28 + 1;
    } while ((int)local_28 < (int)uVar1);
  }
  if (0 < (int)uVar1) {
    local_20 = (double *)(iVar8 - (int)param_1);
    local_14 = uVar1;
    do {
      iVar3 = *(int *)(param_5 + 0x10) + local_8;
      local_10 = param_1;
      local_c = iVar3;
      local_28 = ftol();
      uVar7 = local_28;
      pbVar9 = param_1;
      if (0 < local_18) {
        local_34 = (byte *)(((int)(char)param_1[(int)local_20] ^ 0xffffff80U) - local_28);
        local_30 = local_18;
        do {
          param_3._0_1_ = (char)(((longlong)(int)local_34 * (longlong)local_c) / (longlong)local_8);
          *param_1 = (char)local_28 + (char)param_3 ^ 0x80;
          iVar3 = iVar3 + local_2c;
          param_1 = param_1 + uVar1;
          local_30 = local_30 + -1;
          local_c = iVar3;
          pbVar9 = local_10;
        } while (local_30 != 0);
      }
      param_1 = pbVar9 + 1;
      local_14 = local_14 - 1;
      local_10 = param_1;
      local_28 = uVar7;
    } while (local_14 != 0);
  }
LAB_5f99595a:
  *(int *)(param_5 + 0x10) = local_3c;
  if (0 < (int)uVar1) {
    pdVar6 = local_13c;
    puVar10 = (undefined4 *)(param_5 + 0x30);
    for (iVar3 = (uVar1 & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar10 = puVar10 + 1;
    }
  }
  if (*(int *)(param_5 + 0x1d64) != 0) {
    param_4 = param_4 + -1;
  }
  iVar3 = *(int *)(param_5 + 0x10) - local_8 * param_4;
  *(int *)(param_5 + 0x10) = iVar3;
  *(double *)(param_5 + 0x20) = (double)iVar3 / (double)local_8;
  return param_2;
}


