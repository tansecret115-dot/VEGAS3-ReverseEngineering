/* Module: vegas30.exe
   Function: FUN_00495b80
   Address: 00495b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00495f62) */
/* WARNING: Removing unreachable block (ram,0x00495f82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00495b80(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_28;
  int iStack_24;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (-1 < param_4) {
      local_10 = ftol();
      lVar7 = ftol();
      return lVar7;
    }
    local_10._0_4_ = -param_3;
    local_10._4_4_ = -(param_4 + (uint)(param_3 != 0));
    local_10 = ftol();
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x40);
    local_1c = *(int *)(param_2 + 0x44);
    local_28 = uVar1 + param_3;
    iStack_24 = local_1c + param_4 + (uint)CARRY4(uVar1,param_3);
    local_20 = uVar1;
    iVar3 = FUN_004942c0(param_1,&local_28);
    if (iVar3 == 0) {
      local_10._0_4_ = *(uint *)(param_2 + 0x20) + param_3;
      local_10._4_4_ =
           *(int *)(param_2 + 0x24) + param_4 + (uint)CARRY4(*(uint *)(param_2 + 0x20),param_3);
      iVar3 = FUN_004942c0(param_1,&local_10);
      if (iVar3 == 0) {
        if ((((DAT_00647794 < 2) && (*(int *)(param_1 + 0xb78) == 0)) &&
            (*(int *)(param_1 + 0xb7c) == 0)) &&
           (iVar3 = FUN_00494470(param_1,&param_3), iVar3 != 0)) {
          if (DAT_006476c0 == 0) {
            return CONCAT44(param_4,param_3);
          }
          if (-1 < param_4) {
            local_10 = ftol();
            lVar7 = ftol();
            return lVar7;
          }
          local_10._0_4_ = -param_3;
          local_10._4_4_ = -(param_4 + (uint)(param_3 != 0));
          local_10 = ftol();
        }
        else {
          if (DAT_006476bc != 0) {
            if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) {
              lVar7 = CONCAT44(iStack_24,local_28);
            }
            else {
              local_18 = ftol();
              lVar7 = ftol();
            }
            local_18._0_4_ = (uint)lVar7;
            uVar1 = *(uint *)(param_1 + 400);
            if ((CONCAT44((iStack_24 - *(int *)(param_1 + 0x194)) - (uint)(local_28 < uVar1),
                          local_28 - uVar1) <= lVar7) &&
               (lVar7 <= CONCAT44(*(int *)(param_1 + 0x194) + iStack_24 +
                                  (uint)CARRY4(uVar1,local_28),uVar1 + local_28))) {
              local_10 = lVar7 - CONCAT44(local_1c,local_20);
              iVar3 = (int)local_10;
              uVar2 = (ulonglong)local_10 >> 0x20;
              if (DAT_006476c0 == 0) {
                return local_10;
              }
              if (-1 < local_10) {
                uVar8 = ftol();
                local_10 = uVar8;
                lVar7 = ftol();
                return lVar7;
              }
              local_10._0_4_ = -iVar3;
              local_10._4_4_ = -((int)uVar2 + (uint)(iVar3 != 0));
              local_10 = ftol();
              goto LAB_004964c9;
            }
          }
          iVar4 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),param_2);
          iVar3 = iVar4;
          if (iVar4 < 1) {
LAB_00496080:
            local_18._0_4_ = *(uint *)(param_2 + 0x20);
            local_18._4_4_ = *(int *)(param_2 + 0x24);
            iVar3 = **(int **)(*(int *)(param_2 + 8) + 0x24);
            if (iVar4 < iVar3 + -1) {
              do {
                do {
                  iVar4 = iVar4 + 1;
                  if (iVar3 <= iVar4) goto LAB_0049626b;
                  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x24) + 8) + iVar4 * 4)
                  ;
                } while ((*(uint *)(iVar5 + 0x10) & 0x800000) != 0);
                local_28 = (uint)local_18 + param_3;
                iStack_24 = local_18._4_4_ + param_4 + (uint)CARRY4((uint)local_18,param_3);
                iVar5 = FUN_00494ba0(param_1,&local_28,iVar5);
              } while (iVar5 == 0);
              local_10._0_4_ = local_28 - (uint)local_18;
              local_10._4_4_ = (iStack_24 - local_18._4_4_) - (uint)(local_28 < (uint)local_18);
              if (DAT_006476c0 == 0) {
                return CONCAT44(local_10._4_4_,(uint)local_10);
              }
              if (-1 < local_10._4_4_) {
                local_10 = ftol();
                lVar7 = ftol();
                return lVar7;
              }
              bVar6 = (uint)local_10 != 0;
              local_10._0_4_ = -(uint)local_10;
              local_10._4_4_ = -(local_10._4_4_ + (uint)bVar6);
              local_10 = ftol();
            }
            else {
LAB_0049626b:
              iVar3 = local_1c;
              uVar1 = local_20;
              if (DAT_006476c4 != 0) {
                local_18._0_4_ = local_20 + param_3;
                local_18._4_4_ = local_1c + param_4 + (uint)CARRY4(local_20,param_3);
                iVar4 = FUN_00494fa0(param_1,&local_18);
                if (iVar4 != 0) {
                  local_10._0_4_ = (uint)local_18 - uVar1;
                  local_10._4_4_ = (local_18._4_4_ - iVar3) - (uint)((uint)local_18 < uVar1);
                  if (DAT_006476c0 == 0) {
                    return CONCAT44(local_10._4_4_,(uint)local_10);
                  }
                  if (-1 < local_10._4_4_) {
                    local_10 = ftol();
                    lVar7 = ftol();
                    return lVar7;
                  }
                  bVar6 = (uint)local_10 != 0;
                  local_10._0_4_ = -(uint)local_10;
                  local_10._4_4_ = -(local_10._4_4_ + (uint)bVar6);
                  local_10 = ftol();
                  goto LAB_004964c9;
                }
              }
              local_28 = uVar1 + param_3;
              iStack_24 = iVar3 + param_4 + (uint)CARRY4(uVar1,param_3);
              iVar4 = FUN_00494680(param_1,&local_28);
              if (iVar4 == 0) {
                if (DAT_006476c0 == 0) {
                  return CONCAT44(param_4,param_3);
                }
                if (-1 < param_4) {
                  local_10 = ftol();
                  lVar7 = ftol();
                  return lVar7;
                }
                local_10._0_4_ = -param_3;
                local_10._4_4_ = -(param_4 + (uint)(param_3 != 0));
                local_10 = ftol();
              }
              else {
                local_10._0_4_ = local_28 - uVar1;
                local_10._4_4_ = (iStack_24 - iVar3) - (uint)(local_28 < uVar1);
                if (DAT_006476c0 == 0) {
                  return CONCAT44(local_10._4_4_,(uint)local_10);
                }
                if (-1 < local_10._4_4_) {
                  local_10 = ftol();
                  lVar7 = ftol();
                  return lVar7;
                }
                bVar6 = (uint)local_10 != 0;
                local_10._0_4_ = -(uint)local_10;
                local_10._4_4_ = -(local_10._4_4_ + (uint)bVar6);
                local_10 = ftol();
              }
            }
          }
          else {
            do {
              iVar3 = iVar3 + -1;
              if (iVar3 < 0) goto LAB_00496080;
              iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x24) + 8) + iVar3 * 4);
            } while (((*(uint *)(iVar5 + 0x10) & 0x800000) != 0) ||
                    (iVar5 = FUN_00494ca0(param_1,&local_28,iVar5), iVar5 == 0));
            local_10._0_4_ = local_28 - local_20;
            local_10._4_4_ = (iStack_24 - local_1c) - (uint)(local_28 < local_20);
            if (DAT_006476c0 == 0) {
              return CONCAT44(local_10._4_4_,(uint)local_10);
            }
            if (-1 < local_10._4_4_) {
              local_10 = ftol();
              lVar7 = ftol();
              return lVar7;
            }
            bVar6 = (uint)local_10 != 0;
            local_10._0_4_ = -(uint)local_10;
            local_10._4_4_ = -(local_10._4_4_ + (uint)bVar6);
            local_10 = ftol();
          }
        }
      }
      else {
        local_18._0_4_ = (uint)local_10 - *(uint *)(param_2 + 0x20);
        local_18._4_4_ =
             (local_10._4_4_ - *(int *)(param_2 + 0x24)) -
             (uint)((uint)local_10 < *(uint *)(param_2 + 0x20));
        if (DAT_006476c0 == 0) {
          return CONCAT44(local_18._4_4_,(uint)local_18);
        }
        if (-1 < local_18._4_4_) {
          local_10 = ftol();
          lVar7 = ftol();
          return lVar7;
        }
        local_10._0_4_ = -(uint)local_18;
        local_10._4_4_ = -(local_18._4_4_ + (uint)((uint)local_18 != 0));
        local_10 = ftol();
      }
    }
    else {
      local_10._0_4_ = local_28 - uVar1;
      local_10._4_4_ = (iStack_24 - local_1c) - (uint)(local_28 < uVar1);
      if (DAT_006476c0 == 0) {
        return CONCAT44(local_10._4_4_,(uint)local_10);
      }
      if (-1 < local_10._4_4_) {
        local_10 = ftol();
        lVar7 = ftol();
        return lVar7;
      }
      bVar6 = (uint)local_10 != 0;
      local_10._0_4_ = -(uint)local_10;
      local_10._4_4_ = -(local_10._4_4_ + (uint)bVar6);
      local_10 = ftol();
    }
  }
LAB_004964c9:
  uVar8 = ftol();
  return CONCAT44(-((int)((ulonglong)uVar8 >> 0x20) + (uint)((int)uVar8 != 0)),-(int)uVar8);
}


