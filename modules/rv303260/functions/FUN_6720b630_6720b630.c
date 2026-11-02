/* Module: rv303260.dll
   Function: FUN_6720b630
   Address: 6720b630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_6720b630(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  undefined1 local_b0 [4];
  LARGE_INTEGER local_ac;
  LARGE_INTEGER local_a4;
  uint local_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined4 uStack_90;
  LARGE_INTEGER local_8c;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  void *local_50;
  void *local_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined8 local_3c;
  uint local_34;
  uint local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  uint uStack_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_60 = *(uint *)(param_4 + 8);
  uVar9 = *(uint *)((int)this + 0xa2);
  if (local_60 < uVar9) {
    local_60 = (local_60 - uVar9) - 1;
  }
  else {
    local_60 = local_60 - uVar9;
  }
  iVar7 = *(int *)(param_4 + 0xc);
  local_50 = (void *)0x0;
  local_4c = (void *)0x0;
  local_c = iVar7 + 0xfU >> 4;
  iVar5 = *(int *)(param_4 + 0x10);
  local_30 = iVar5 + 0xfU >> 4;
  uVar9 = local_30 * local_c;
  if ((iVar7 == *(int *)((int)this + 0xbe)) && (iVar5 == *(int *)((int)this + 0xc2))) {
    iVar7 = 0;
  }
  else {
    if ((iVar7 != 0) && (iVar5 != 0)) {
      *(int *)((int)this + 0xbe) = iVar7;
      uVar3 = *(undefined4 *)(param_4 + 0x10);
      *(undefined4 *)((int)this + 0xc2) = uVar3;
      FUN_6720c340(this,*(undefined4 *)((int)this + 0xbe),uVar3);
    }
    iVar7 = -0x7fffbffb;
  }
  if ((*(int *)((int)this + 0xf6) == 0) || (local_60 < 0x3c)) {
    iVar7 = -0x7fffbffb;
  }
  iVar5 = *(int *)(param_4 + 0xc);
  if ((((iVar5 == 0) || (*(int *)(param_4 + 0x10) == 0)) || (*(int *)((int)this + 0xb6) == 0)) ||
     ((*(int *)((int)this + 0xba) == 0 ||
      ((*(int *)((int)this + 0x112) != 0 &&
       ((*(int *)((int)this + 0xca) == 0 || (*(int *)((int)this + 0xce) == 0)))))))) {
    iVar7 = -0x7fffbffb;
  }
  if (((*(int *)((int)this + 0xb6) != iVar5) ||
      (*(int *)((int)this + 0xba) != *(int *)(param_4 + 0x10))) ||
     ((*(int *)((int)this + 0x112) != 0 &&
      ((*(int *)((int)this + 0xca) != iVar5 ||
       (*(int *)((int)this + 0xce) != *(int *)(param_4 + 0x10))))))) {
    iVar7 = -0x7fffbffb;
  }
  if (iVar7 == 0) {
    local_58 = local_c;
    local_54 = local_30;
    local_5c = iVar7;
    local_50 = operator_new(uVar9);
    local_4c = operator_new(uVar9 * 8);
    if ((*(uint *)(param_4 + 4) & 4) == 0) {
      local_34 = ((*(uint *)(param_4 + 4) & 8) != 0) + 1;
    }
    else {
      local_34 = 0;
    }
    if (*(int *)((int)this + 0x112) == 0) {
      local_70 = 0;
      local_74 = 0;
      local_78 = 2000;
      FUN_67208090(this,&local_78);
      local_18 = *(uint **)((int)this + 0x11a);
      local_14 = local_64;
      local_c = local_74 + 0xfU >> 4;
      local_30 = local_70 + 0xfU >> 4;
      uStack_20 = local_c * 0x10;
      local_10 = 0;
      if (local_30 != 0) {
        local_8 = 0;
        local_1c = 0;
        local_28 = 0;
        local_2c = (uint *)(local_c * 8);
        do {
          uVar9 = 0;
          if (local_c != 0) {
            iVar7 = (int)local_64 * local_c * local_10;
            local_3c = (double)CONCAT44(iVar7,(undefined4)local_3c);
            iVar5 = local_28;
            do {
              cVar1 = *(char *)((int)local_68 + iVar7);
              if (((cVar1 == '\0') || (cVar1 == '\x01')) || (local_6c == 0)) {
                *(undefined1 *)((int)local_50 + local_8 + uVar9) = 0;
                *(undefined4 *)((int)local_4c + iVar5) = 0;
                *(undefined4 *)((int)local_4c + iVar5 + 4) = 0;
              }
              else if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
                *(undefined1 *)((int)local_50 + local_8 + uVar9) = 1;
                iVar7 = (local_1c + uVar9 * 4) * 4;
                *(int *)((int)local_4c + iVar5) = ((int)*(short *)(local_6c + iVar7) << 1) / 3;
                *(int *)((int)local_4c + iVar5 + 4) =
                     ((int)*(short *)(local_6c + 2 + iVar7) << 1) / 3;
                iVar7 = local_3c._4_4_;
              }
              else if (cVar1 == '\a') {
                *(undefined1 *)((int)local_50 + local_8 + uVar9) = 1;
                *(undefined4 *)((int)local_4c + iVar5) = 0;
                *(undefined4 *)((int)local_4c + iVar5 + 4) = 0;
              }
              uVar9 = uVar9 + 1;
              iVar7 = iVar7 + (int)local_64;
              iVar5 = iVar5 + 8;
              local_3c = (double)CONCAT44(iVar7,(undefined4)local_3c);
            } while (uVar9 < local_c);
          }
          local_1c = local_1c + uStack_20;
          local_28 = local_28 + (int)local_2c;
          local_10 = local_10 + 1;
          local_8 = local_8 + local_c;
        } while (local_10 < local_30);
      }
    }
    else {
      local_18 = *(uint **)((int)this + 0xd2);
      if (local_34 == 2) {
        local_7c = 0;
        local_80 = 0;
        local_84 = 0x7d1;
        FUN_67208090(this,&local_84);
        local_2c = local_68;
        uVar9 = local_80 + 0xfU >> 4;
        local_30 = local_7c + 0xfU >> 4;
        local_10 = 0;
        local_c = uVar9;
        if (local_30 != 0) {
          local_8 = 0;
          local_3c = (double)((ulonglong)local_3c & 0xffffffff);
          local_1c = 0;
          do {
            local_40 = 0;
            if (uVar9 != 0) {
              local_28 = local_3c._4_4_;
              local_14 = (uint *)((int)local_2c * uVar9 * local_10);
              uVar10 = local_1c;
              do {
                cVar1 = *(char *)(local_70 + (int)local_14);
                if (((cVar1 == '\x02') || (cVar1 == '\x03')) ||
                   ((cVar1 == '\x04' || (cVar1 == '\x05')))) {
                  uVar9 = *(uint *)(param_4 + 8);
                  uVar6 = *(uint *)((int)this + 0x9e);
                  if (uVar9 < uVar6) {
                    uVar6 = uVar9 - uVar6;
                    uVar8 = uVar6 - 1;
                  }
                  else {
                    uVar6 = uVar9 - uVar6;
                    uVar8 = uVar6;
                  }
                  if (uVar8 != 0) {
                    local_9c = *(uint *)((int)this + 0xa2);
                    if (uVar9 < local_9c) {
                      local_9c = (uVar9 - local_9c) - 1;
                    }
                    else {
                      local_9c = uVar9 - local_9c;
                    }
                    if (uVar9 < *(uint *)((int)this + 0x9e)) {
                      uVar6 = uVar6 - 1;
                    }
                    uStack_98 = 0;
                    uStack_44 = 0;
                    local_48 = uVar6;
                  }
                  *(undefined1 *)((int)local_50 + local_8 + local_40) = 1;
                  uStack_20 = (uint)*(short *)(local_78 + local_28);
                  uVar3 = ftol();
                  *(undefined4 *)((int)local_4c + uVar10) = uVar3;
                  sVar2 = *(short *)(local_78 + 2 + local_28);
LAB_6720c11b:
                  uStack_20 = (uint)sVar2;
                  uVar3 = ftol();
                  *(undefined4 *)((int)local_4c + uVar10 + 4) = uVar3;
                  uVar9 = local_c;
                }
                else {
                  if (cVar1 == '\x06') {
                    *(undefined1 *)((int)local_50 + local_8 + local_40) = 0;
                    uStack_20 = (uint)*(short *)(local_78 + local_28);
                    uVar3 = ftol();
                    *(undefined4 *)((int)local_4c + uVar10) = uVar3;
                    sVar2 = *(short *)(local_78 + 2 + local_28);
                    goto LAB_6720c11b;
                  }
                  if ((cVar1 == '\b') || (cVar1 == '\a')) {
                    if (*(uint *)((int)this + 0xc6) != 0) {
                      uStack_90 = 0;
                      local_94 = *(uint *)((int)this + 0xc6);
                    }
                    *(undefined1 *)((int)local_50 + local_8 + local_40) =
                         *(undefined1 *)(*(int *)((int)this + 0x12a) + local_40 + local_8);
                    uVar3 = ftol();
                    *(undefined4 *)((int)local_4c + uVar10) = uVar3;
                    uVar3 = ftol();
                    *(undefined4 *)((int)local_4c + uVar10 + 4) = uVar3;
                    uVar9 = local_c;
                  }
                  else {
                    *(undefined1 *)((int)local_50 + local_8 + local_40) = 0;
                    *(undefined4 *)((int)local_4c + uVar10) = 0;
                    *(undefined4 *)((int)local_4c + uVar10 + 4) = 0;
                  }
                }
                local_40 = local_40 + 1;
                uVar10 = uVar10 + 8;
                local_14 = (uint *)((int)local_14 + (int)local_2c);
                local_28 = local_28 + 4;
              } while (local_40 < uVar9);
            }
            local_8 = local_8 + uVar9;
            local_10 = local_10 + 1;
            local_1c = local_1c + uVar9 * 8;
            local_3c = (double)CONCAT44(local_3c._4_4_ + uVar9 * 4,(undefined4)local_3c);
          } while (local_10 < local_30);
        }
      }
      else {
        if (*(int *)((int)this + 0xc6) != 0) {
          uStack_20 = 0;
          local_24 = *(int *)((int)this + 0xc6);
        }
        if (local_30 != 0) {
          iVar7 = 0;
          local_8 = 0;
          local_3c = (double)((ulonglong)local_3c & 0xffffffff);
          local_1c = local_30;
          do {
            uVar9 = 0;
            if (local_c != 0) {
              do {
                *(undefined1 *)((int)local_50 + local_8 + uVar9) =
                     *(undefined1 *)(uVar9 + local_8 + *(int *)((int)this + 0x12a));
                uVar3 = ftol();
                *(undefined4 *)((int)local_4c + iVar7) = uVar3;
                uVar3 = ftol();
                uVar9 = uVar9 + 1;
                *(undefined4 *)((int)local_4c + iVar7 + 4) = uVar3;
                iVar7 = iVar7 + 8;
              } while (uVar9 < local_c);
            }
            local_8 = local_8 + local_c;
            iVar7 = local_3c._4_4_ + local_c * 8;
            local_1c = local_1c - 1;
            local_3c = (double)CONCAT44(iVar7,(undefined4)local_3c);
          } while (local_1c != 0);
        }
      }
    }
    QueryPerformanceFrequency(&local_ac);
    QueryPerformanceCounter(&local_a4);
    uVar9 = local_60;
    piVar12 = &local_5c;
    uVar10 = local_34;
    uVar6 = local_60;
    uVar3 = ftol();
    local_8 = FUN_6720c370(this,*(undefined4 *)((int)this + 0xe6),*(undefined4 *)((int)this + 0xae),
                           param_2,uVar3,uVar10,uVar6,piVar12);
    QueryPerformanceCounter(&local_8c);
    local_48 = local_ac.s.LowPart;
    uStack_44 = 0;
    local_3c = ((((double)local_8c._0_4_ - (double)local_8c.s.HighPart * _DAT_672133c8) -
                ((double)local_a4._0_4_ - (double)local_a4.s.HighPart * _DAT_672133c8)) *
               _DAT_672133d0) /
               ((double)local_ac._0_4_ - (double)local_ac.s.HighPart * _DAT_672133c8);
    if (local_8 == 0) {
      local_14 = (uint *)0x1;
      puVar11 = (uint *)(((uVar9 + 0x10) * 3) / 100);
      local_2c = puVar11;
      if ((uint *)0x1 < puVar11) {
        local_34 = uVar9;
        param_2 = 0x100;
        do {
          uStack_20 = param_2 / (uint)puVar11;
          local_18 = (uint *)(local_34 / (uint)puVar11);
          puVar4 = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_b0);
          if (puVar4 != (ulonglong *)0x0) {
            QueryPerformanceCounter(&local_a4);
            local_8 = FUN_6720c3b0(this,uStack_20,puVar4);
            QueryPerformanceCounter(&local_8c);
            local_48 = local_8c.s.LowPart;
            uStack_44 = 0;
            local_9c = local_a4.s.LowPart;
            uStack_98 = 0;
            local_94 = local_ac.s.LowPart;
            uStack_90 = 0;
            local_3c = ((((double)local_8c._0_4_ - (double)local_8c.s.HighPart * _DAT_672133c8) -
                        ((double)local_a4._0_4_ - (double)local_a4.s.HighPart * _DAT_672133c8)) *
                       _DAT_672133d0) /
                       ((double)local_ac._0_4_ - (double)local_ac.s.HighPart * _DAT_672133c8) +
                       local_3c;
            if (local_8 == 0) {
              puVar11 = operator_new(0x28);
              *puVar11 = *(uint *)((int)this + 0x24);
              puVar11[2] = (int)local_18 + *(int *)((int)this + 0xa2);
              *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(param_1 + 0xc);
              *(ushort *)((int)puVar11 + 0xe) = *(ushort *)(param_1 + 0xe) | 1;
              *(ushort *)((int)puVar11 + 0xe) = *(ushort *)(param_1 + 0xe) | 0x40;
              puVar11[4] = *(uint *)(param_1 + 0x10);
              puVar11[5] = 1;
              puVar11[7] = 0;
              puVar11[6] = 1;
              if ((*(int *)((int)this + 0xb6e) == 0) ||
                 ((int)((uint)*(ushort *)((int)this + 0x3e) * (uint)*(ushort *)((int)this + 0x40)) <
                  0x16440)) {
                if (*(uint *)((int)this + 0x24) ==
                    (uint)(*(int *)(param_4 + 0x10) * *(int *)(param_4 + 0xc) * 3) >> 1) {
                  puVar11[1] = (uint)puVar4;
                }
                else {
                  local_18 = (uint *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_b0);
                  if (local_18 == (uint *)0x0) {
                    return 0x80004005;
                  }
                  FUN_67205ac0(*(void **)((int)this + 0x96),puVar4,local_18,
                               *(uint **)(param_4 + 0xc),*(uint *)(param_4 + 0x10),
                               (uint)*(ushort *)((int)this + 0x3e),
                               (uint)*(ushort *)((int)this + 0x40),0);
                  puVar11[1] = (uint)local_18;
                  (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(puVar4);
                }
              }
              else {
                puVar11[1] = (uint)puVar4;
                puVar11[5] = 2;
                puVar11[9] = *(uint *)(param_4 + 0xc);
                puVar11[8] = *(uint *)(param_4 + 0x10);
                iVar7 = *(int *)(param_4 + 0x10);
                iVar5 = *(int *)(param_4 + 0xc);
                *(byte *)((int)puVar11 + 0xf) = *(byte *)((int)puVar11 + 0xf) | 1;
                *puVar11 = (uint)(iVar7 * iVar5 * 3) >> 1;
              }
              *(uint *)((int)this + 0xa6) = puVar11[2];
              local_3c = 0.0;
              (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,puVar11);
              operator_delete(puVar11);
              puVar11 = local_2c;
            }
          }
          local_14 = (uint *)((int)local_14 + 1);
          param_2 = param_2 + 0x100;
          local_34 = local_34 + local_60;
        } while (local_14 < puVar11);
      }
    }
  }
  else if (*(int *)((int)this + 0x112) != 0) {
    *(undefined4 *)((int)this + 0xca) = 0;
    *(undefined4 *)((int)this + 0xce) = 0;
  }
  if (((((*(int *)((int)this + 0xf6) != 0) && (0x3b < local_60)) &&
       (*(int *)((int)this + 0x112) != 0)) &&
      ((*(int *)(param_4 + 0xc) != 0 && (*(int *)(param_4 + 0x10) != 0)))) &&
     ((*(int *)((int)this + 0xb6) != 0 &&
      ((*(int *)((int)this + 0xba) != 0 && ((*(byte *)(param_4 + 4) & 8) == 0)))))) {
    local_70 = 0;
    local_74 = 0;
    local_78 = 2000;
    iVar7 = FUN_67208090(this,&local_78);
    if (iVar7 == 0) {
      *(int *)((int)this + 0xca) = local_74;
      *(int *)((int)this + 0xce) = local_70;
      local_c = local_74 + 0xfU >> 4;
      local_30 = local_70 + 0xfU >> 4;
      uStack_20 = local_c * 0x10;
      local_18 = local_64;
      local_10 = 0;
      if (local_30 != 0) {
        local_2c = (uint *)0x0;
        param_2 = 0;
        param_1 = 0;
        do {
          uVar9 = 0;
          if (local_c != 0) {
            local_14 = (uint *)((int)local_64 * local_c * local_10);
            iVar7 = param_1;
            do {
              cVar1 = *(char *)((int)local_68 + (int)local_14);
              if (((cVar1 == '\0') || (cVar1 == '\x01')) || (local_6c == 0)) {
                *(undefined1 *)(*(int *)((int)this + 0x12a) + uVar9 + (int)local_2c) = 0;
LAB_6720bd80:
                *(undefined4 *)(iVar7 + *(int *)((int)this + 0x12e)) = 0;
                *(undefined4 *)(iVar7 + 4 + *(int *)((int)this + 0x12e)) = 0;
              }
              else {
                if (((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
                  *(undefined1 *)(*(int *)((int)this + 0x12a) + uVar9 + (int)local_2c) = 1;
                  goto LAB_6720bd80;
                }
                *(undefined1 *)(*(int *)((int)this + 0x12a) + uVar9 + (int)local_2c) = 1;
                iVar5 = (param_2 + uVar9 * 4) * 4;
                *(int *)(iVar7 + *(int *)((int)this + 0x12e)) = (int)*(short *)(local_6c + iVar5);
                *(int *)(iVar7 + 4 + *(int *)((int)this + 0x12e)) =
                     (int)*(short *)(local_6c + 2 + iVar5);
              }
              uVar9 = uVar9 + 1;
              local_14 = (uint *)((int)local_14 + (int)local_64);
              iVar7 = iVar7 + 8;
            } while (uVar9 < local_c);
          }
          local_10 = local_10 + 1;
          local_2c = (uint *)((int)local_2c + local_c);
          param_2 = param_2 + uStack_20;
          param_1 = param_1 + local_c * 8;
        } while (local_10 < local_30);
      }
      uVar9 = *(uint *)(param_3 + 0x14);
      uVar10 = *(uint *)(param_4 + 8);
      if (uVar9 < uVar10) {
        iVar7 = (uVar9 - uVar10) + -1;
      }
      else {
        iVar7 = uVar9 - uVar10;
      }
      *(int *)((int)this + 0xc6) = iVar7;
      *(undefined4 *)((int)this + 0xd2) = *(undefined4 *)((int)this + 0x11a);
    }
    else {
      *(undefined4 *)((int)this + 0xca) = 0;
      *(undefined4 *)((int)this + 0xce) = 0;
    }
  }
  if (local_50 != (void *)0x0) {
    operator_delete(local_50);
  }
  if (local_4c != (void *)0x0) {
    operator_delete(local_4c);
  }
  return 0;
}


