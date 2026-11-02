/* Module: vidcap30.exe
   Function: FUN_004c1560
   Address: 004c1560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c1560(undefined2 *param_1,int param_2,undefined2 *param_3,int param_4,int param_5)

{
  uint3 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  undefined4 *puVar9;
  double local_144 [32];
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  uint local_20;
  double *local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  uVar8 = *(uint *)(param_5 + 4);
  iVar3 = *(int *)(param_5 + 0x10);
  local_40 = uVar8;
  local_30 = *(int *)(param_5 + 8);
  local_10 = *(int *)(param_5 + 0xc);
  local_c = iVar3;
  if (*(int *)(param_5 + 8) < *(int *)(param_5 + 0xc)) {
    local_c = *(int *)(param_5 + 0x10);
    local_20 = 0;
    if (*(int *)(param_5 + 0x1d64) == 0) {
      iVar3 = param_4 + -1;
    }
    else {
      iVar3 = param_4 + -2;
    }
    if (0 < (int)uVar8) {
      local_8 = 0;
      puVar2 = (undefined2 *)((int)param_3 + iVar3 * uVar8 * 3);
      pdVar7 = local_144;
      local_28 = (undefined2 *)uVar8;
      do {
        local_8._0_3_ = CONCAT21(*puVar2,(undefined1)local_8);
        local_8 = CONCAT13(*(undefined1 *)(puVar2 + 1),(undefined3)local_8);
        uVar4 = (int)local_28 - 1;
        local_28 = (undefined2 *)uVar4;
        *pdVar7 = (double)local_8;
        puVar2 = (undefined2 *)((int)puVar2 + 3);
        pdVar7 = pdVar7 + 1;
      } while (uVar4 != 0);
    }
    if (local_c < 0) {
      do {
        local_c = local_c + local_30;
        local_20 = local_20 + 1;
      } while (local_c < 0);
    }
    local_44 = local_30 * param_2 + *(int *)(param_5 + 0x10);
    if (uVar8 == 1) {
      iVar3 = param_2 + -1;
      local_c = iVar3 * local_30 + *(int *)(param_5 + 0x10);
      local_1c = (double *)(param_2 * 3 + -3 + (int)param_1);
      if ((int)local_20 <= iVar3) {
        local_28 = (undefined2 *)((iVar3 - local_20) + 1);
        do {
          local_8 = local_c / local_10;
          puVar1 = (uint3 *)((int)param_3 + (local_c / local_10) * 3);
          if (local_c % local_10 == 0) {
            *(short *)local_1c = (short)*puVar1;
            *(undefined1 *)((int)local_1c + 2) = *(undefined1 *)((int)puVar1 + 2);
          }
          else {
            local_14 = (uint)*puVar1 * 0x100;
            local_18 = (uint)*(uint3 *)((int)puVar1 + 3) * 0x100;
            iVar3 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) *
                          (longlong)(local_c % local_10)) / (longlong)local_10) + local_14;
            local_8 = iVar3;
            iVar3 = local_8;
            local_8._1_2_ = (undefined2)((uint)iVar3 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
            *(undefined2 *)local_1c = local_8._1_2_;
            *(undefined1 *)((int)local_1c + 2) = local_8._3_1_;
            local_8 = iVar3;
          }
          local_c = local_c - local_30;
          local_28 = (undefined2 *)((int)local_28 + -1);
          local_1c = (double *)((int)local_1c + -3);
        } while (local_28 != (undefined2 *)0x0);
      }
    }
    else if (uVar8 == 2) {
      iVar3 = param_2 + -1;
      local_c = iVar3 * local_30 + *(int *)(param_5 + 0x10);
      local_1c = (double *)(param_1 + param_2 * 3 + -3);
      if ((int)local_20 <= iVar3) {
        local_24 = (undefined2 *)((int)(param_1 + param_2 * 3 + -3) + 3);
        local_2c = (undefined2 *)((iVar3 - local_20) + 1);
        do {
          local_8 = local_c / local_10;
          iVar3 = local_c % local_10;
          puVar1 = (uint3 *)(param_3 + (local_c / local_10) * 3);
          if (iVar3 == 0) {
            *(short *)local_1c = (short)*puVar1;
            *(undefined1 *)((int)local_1c + 2) = *(undefined1 *)((int)puVar1 + 2);
            *local_24 = *(undefined2 *)((int)puVar1 + 3);
            *(undefined1 *)(local_24 + 1) = *(undefined1 *)((int)puVar1 + 5);
          }
          else {
            local_14 = (uint)*puVar1 * 0x100;
            local_18 = (uint)*(uint3 *)((int)puVar1 + 6) * 0x100;
            iVar5 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) * (longlong)iVar3) /
                         (longlong)local_10) + local_14;
            local_28 = (undefined2 *)iVar5;
            local_28._1_2_ = (undefined2)((uint)iVar5 >> 8);
            local_28._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
            *(undefined2 *)local_1c = local_28._1_2_;
            *(undefined1 *)((int)local_1c + 2) = local_28._3_1_;
            local_14 = (uint)*(uint3 *)((int)puVar1 + 3) * 0x100;
            local_18 = (uint)*(uint3 *)((int)puVar1 + 9) * 0x100;
            iVar3 = (int)(((longlong)(int)(local_18 + (uint)*(uint3 *)((int)puVar1 + 3) * -0x100) *
                          (longlong)iVar3) / (longlong)local_10) + local_14;
            local_8 = iVar3;
            iVar3 = local_8;
            local_8._1_2_ = (undefined2)((uint)iVar3 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
            *local_24 = local_8._1_2_;
            *(undefined1 *)(local_24 + 1) = local_8._3_1_;
            local_8 = iVar3;
          }
          local_c = local_c - local_30;
          local_2c = (undefined2 *)((int)local_2c + -1);
          local_1c = (double *)((int)local_1c + -6);
          local_24 = local_24 + -3;
        } while (local_2c != (undefined2 *)0x0);
      }
    }
    else {
      if ((int)uVar8 < 1) goto LAB_004c1f3d;
      local_3c = param_2 + -1;
      local_38 = local_3c * local_30;
      local_24 = param_3;
      local_2c = (undefined2 *)((int)param_1 + local_3c * uVar8 * 3);
      local_34 = uVar8;
      do {
        local_1c = (double *)local_2c;
        local_c = local_3c * local_30 + *(int *)(param_5 + 0x10);
        if ((int)local_20 <= local_3c) {
          local_28 = (undefined2 *)((local_3c - local_20) + 1);
          do {
            local_8 = local_c / local_10;
            puVar1 = (uint3 *)((int)local_24 + (local_c / local_10) * uVar8 * 3);
            if (local_c % local_10 == 0) {
              *(short *)local_1c = (short)*puVar1;
              *(undefined1 *)((int)local_1c + 2) = *(undefined1 *)((int)puVar1 + 2);
            }
            else {
              local_14 = (uint)*puVar1 * 0x100;
              local_18 = (uint)*(uint3 *)(uVar8 * 3 + (int)puVar1) * 0x100;
              iVar3 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) *
                            (longlong)(local_c % local_10)) / (longlong)local_10) + local_14;
              local_8 = iVar3;
              iVar3 = local_8;
              local_8._1_2_ = (undefined2)((uint)iVar3 >> 8);
              local_8._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
              *(undefined2 *)local_1c = local_8._1_2_;
              *(undefined1 *)((int)local_1c + 2) = local_8._3_1_;
              local_8 = iVar3;
            }
            local_c = local_c - local_30;
            local_28 = (undefined2 *)((int)local_28 + -1);
            local_1c = (double *)((int)local_1c + uVar8 * -3);
          } while (local_28 != (undefined2 *)0x0);
        }
        local_24 = (undefined2 *)((int)local_24 + 3);
        local_2c = (undefined2 *)((int)local_2c + 3);
        local_34 = local_34 - 1;
      } while (local_34 != 0);
    }
    if (0 < (int)uVar8) {
      local_1c = (double *)((int)param_3 - (int)param_1);
      local_18 = local_18 & 0xffffff00;
      local_2c = (undefined2 *)uVar8;
      do {
        iVar5 = *(int *)(param_5 + 0x10) + local_10;
        local_28 = param_1;
        local_c = iVar5;
        iVar3 = ftol();
        local_18._0_3_ =
             CONCAT21(*(undefined2 *)((int)param_1 + (int)local_1c),(undefined1)local_18);
        local_18 = CONCAT13(*(undefined1 *)((int)param_1 + (int)local_1c + 2),(undefined3)local_18);
        puVar2 = param_1;
        if (0 < (int)local_20) {
          local_38 = local_18 - iVar3;
          local_3c = local_40 * 3;
          local_34 = local_20;
          do {
            iVar6 = (int)(((longlong)(int)(local_18 - iVar3) * (longlong)local_c) /
                         (longlong)local_10) + iVar3;
            local_8 = iVar6;
            iVar6 = local_8;
            local_8._1_2_ = (undefined2)((uint)iVar6 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
            *param_1 = local_8._1_2_;
            *(undefined1 *)(param_1 + 1) = local_8._3_1_;
            iVar5 = iVar5 + local_30;
            param_1 = (undefined2 *)((int)param_1 + local_40 * 3);
            local_34 = local_34 - 1;
            local_c = iVar5;
            puVar2 = local_28;
            local_8 = iVar6;
          } while (local_34 != 0);
        }
        param_1 = (undefined2 *)((int)puVar2 + 3);
        local_2c = (undefined2 *)((int)local_2c - 1);
        local_28 = param_1;
        uVar8 = local_40;
      } while (local_2c != (undefined2 *)0x0);
    }
LAB_004c1f3d:
    *(int *)(param_5 + 0x10) = local_44;
    if (0 < (int)uVar8) {
      pdVar7 = local_144;
      puVar9 = (undefined4 *)(param_5 + 0x30);
      for (iVar3 = (uVar8 & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *(undefined4 *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + 4);
        puVar9 = puVar9 + 1;
      }
    }
    if (*(int *)(param_5 + 0x1d64) != 0) {
      param_4 = param_4 + -1;
    }
    iVar3 = *(int *)(param_5 + 0x10) - local_10 * param_4;
    *(int *)(param_5 + 0x10) = iVar3;
    *(double *)(param_5 + 0x20) = (double)iVar3 / (double)local_10;
    return param_2;
  }
  iVar5 = 0;
  local_20 = 0;
  if (0 < (int)uVar8) {
    local_1c = local_144;
    local_8 = 0;
    puVar2 = (undefined2 *)((int)param_3 + (param_4 + -1) * uVar8 * 3);
    local_24 = puVar2;
    local_14 = uVar8;
    do {
      pdVar7 = local_1c;
      local_8._0_3_ = CONCAT21(*puVar2,(undefined1)local_8);
      local_8 = CONCAT13(*(undefined1 *)(puVar2 + 1),(undefined3)local_8);
      local_1c = local_1c + 1;
      puVar2 = (undefined2 *)((int)local_24 + 3);
      local_24 = puVar2;
      *pdVar7 = (double)local_8;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  if (iVar3 < 0) {
    local_c = iVar3 + local_10;
    if (0 < (int)uVar8) {
      local_24 = (undefined2 *)(param_5 + 0x30);
      local_1c = (double *)((int)param_3 - (int)param_1);
      local_18 = local_18 & 0xffffff00;
      puVar2 = param_1;
      local_2c = (undefined2 *)uVar8;
      do {
        local_14 = ftol();
        local_18._0_3_ = CONCAT21(*(undefined2 *)((int)local_1c + (int)puVar2),(undefined1)local_18)
        ;
        local_18 = CONCAT13(*(undefined1 *)((undefined2 *)((int)local_1c + (int)puVar2) + 1),
                            (undefined3)local_18);
        local_20 = (uint)(((longlong)(int)(local_18 - local_14) * (longlong)local_c) /
                         (longlong)local_10);
        iVar3 = local_20 + local_14;
        local_8 = iVar3;
        iVar3 = local_8;
        local_8._1_2_ = (undefined2)((uint)iVar3 >> 8);
        local_8._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
        *puVar2 = local_8._1_2_;
        *(undefined1 *)(puVar2 + 1) = local_8._3_1_;
        local_2c = (undefined2 *)((int)local_2c - 1);
        local_24 = (undefined2 *)((int)local_24 + 8);
        puVar2 = (undefined2 *)((int)puVar2 + 3);
        local_8 = iVar3;
      } while (local_2c != (undefined2 *)0x0);
    }
    local_20 = 1;
    iVar5 = 1;
    iVar3 = *(int *)(param_5 + 0x10) + local_30;
    local_c = iVar3;
  }
  if (uVar8 == 1) {
    puVar2 = (undefined2 *)((int)param_1 + iVar5 * 3);
    if (iVar5 < param_2) {
      param_1 = (undefined2 *)(param_2 - iVar5);
      local_20 = iVar5 + (int)param_1;
      do {
        puVar1 = (uint3 *)((int)param_3 + (local_c / local_10) * 3);
        if (iVar3 % local_10 == 0) {
          *puVar2 = (short)*puVar1;
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((int)puVar1 + 2);
        }
        else {
          local_14 = (uint)*puVar1 * 0x100;
          local_18 = (uint)*(uint3 *)((int)puVar1 + 3) * 0x100;
          iVar5 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) *
                        (longlong)(iVar3 % local_10)) / (longlong)local_10) + local_14;
          local_8 = iVar5;
          local_8._1_2_ = (undefined2)((uint)iVar5 >> 8);
          local_8._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
          *puVar2 = local_8._1_2_;
          *(undefined1 *)(puVar2 + 1) = local_8._3_1_;
        }
        puVar2 = (undefined2 *)((int)puVar2 + 3);
        iVar3 = iVar3 + local_30;
        param_1 = (undefined2 *)((int)param_1 + -1);
        local_c = iVar3;
      } while (param_1 != (undefined2 *)0x0);
    }
  }
  else if (uVar8 == 2) {
    local_1c = (double *)(param_1 + iVar5 * 3);
    if (iVar5 < param_2) {
      local_2c = (undefined2 *)(param_2 - iVar5);
      param_1 = (undefined2 *)((int)(param_1 + iVar5 * 3) + 3);
      local_20 = iVar5 + (int)local_2c;
      do {
        puVar1 = (uint3 *)(param_3 + (local_c / local_10) * 3);
        iVar5 = iVar3 % local_10;
        if (iVar5 == 0) {
          *(short *)local_1c = (short)*puVar1;
          *(undefined1 *)((int)local_1c + 2) = *(undefined1 *)((int)puVar1 + 2);
          *param_1 = *(undefined2 *)((int)puVar1 + 3);
          *(undefined1 *)(param_1 + 1) = *(undefined1 *)((int)puVar1 + 5);
        }
        else {
          local_14 = (uint)*puVar1 * 0x100;
          local_18 = (uint)*(uint3 *)((int)puVar1 + 6) * 0x100;
          iVar6 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) * (longlong)iVar5) /
                       (longlong)local_10) + local_14;
          param_2._1_2_ = (undefined2)((uint)iVar6 >> 8);
          param_2._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
          *(undefined2 *)local_1c = param_2._1_2_;
          *(undefined1 *)((int)local_1c + 2) = param_2._3_1_;
          local_14 = (uint)*(uint3 *)((int)puVar1 + 3) * 0x100;
          local_18 = (uint)*(uint3 *)((int)puVar1 + 9) * 0x100;
          iVar5 = (int)(((longlong)(int)(local_18 + (uint)*(uint3 *)((int)puVar1 + 3) * -0x100) *
                        (longlong)iVar5) / (longlong)local_10) + local_14;
          local_8 = iVar5;
          local_8._1_2_ = (undefined2)((uint)iVar5 >> 8);
          local_8._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
          *param_1 = local_8._1_2_;
          *(undefined1 *)(param_1 + 1) = local_8._3_1_;
        }
        param_1 = param_1 + 3;
        iVar3 = iVar3 + local_30;
        local_2c = (undefined2 *)((int)local_2c + -1);
        local_1c = (double *)((int)local_1c + 6);
        local_c = iVar3;
      } while (local_2c != (undefined2 *)0x0);
    }
  }
  else {
    local_28 = (undefined2 *)0x0;
    if ((int)uVar8 < 1) goto LAB_004c1a10;
    local_24 = param_3;
    do {
      local_1c = (double *)((int)param_1 + (iVar5 * uVar8 + (int)local_28) * 3);
      if (iVar5 < param_2) {
        local_2c = (undefined2 *)(param_2 - iVar5);
        iVar5 = iVar5 + (int)local_2c;
        local_20 = iVar5;
        do {
          puVar1 = (uint3 *)((int)local_24 + (local_c / local_10) * uVar8 * 3);
          if (iVar3 % local_10 == 0) {
            *(short *)local_1c = (short)*puVar1;
            *(undefined1 *)((int)local_1c + 2) = *(undefined1 *)((int)puVar1 + 2);
          }
          else {
            local_14 = (uint)*puVar1 * 0x100;
            local_18 = (uint)*(uint3 *)(uVar8 * 3 + (int)puVar1) * 0x100;
            iVar6 = (int)(((longlong)(int)(local_18 + (uint)*puVar1 * -0x100) *
                          (longlong)(iVar3 % local_10)) / (longlong)local_10) + local_14;
            local_8 = iVar6;
            local_8._1_2_ = (undefined2)((uint)iVar6 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
            *(undefined2 *)local_1c = local_8._1_2_;
            *(undefined1 *)((int)local_1c + 2) = local_8._3_1_;
          }
          iVar3 = iVar3 + local_30;
          local_2c = (undefined2 *)((int)local_2c + -1);
          local_1c = (double *)((int)local_1c + uVar8 * 3);
          local_c = iVar3;
        } while (local_2c != (undefined2 *)0x0);
      }
      local_28 = (undefined2 *)((int)local_28 + 1);
      local_24 = (undefined2 *)((int)local_24 + 3);
    } while ((int)local_28 < (int)uVar8);
  }
  if (0 < (int)uVar8) {
    pdVar7 = local_144;
    puVar9 = (undefined4 *)(param_5 + 0x30);
    for (iVar5 = (uVar8 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *(undefined4 *)pdVar7;
      pdVar7 = (double *)((int)pdVar7 + 4);
      puVar9 = puVar9 + 1;
    }
  }
LAB_004c1a10:
  iVar3 = (iVar3 - local_10 * param_4) % local_10;
  *(int *)(param_5 + 0x10) = iVar3;
  *(double *)(param_5 + 0x20) = (double)iVar3 / (double)local_10;
  return local_20;
}


