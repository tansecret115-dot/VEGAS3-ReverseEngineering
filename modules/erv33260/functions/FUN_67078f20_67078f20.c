/* Module: erv33260.dll
   Function: FUN_67078f20
   Address: 67078f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67078f20(void *this,int param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint local_3c [3];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int *local_18;
  float local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (*param_2 != 2) {
    FUN_67078f00((int)this);
  }
  while( true ) {
    while( true ) {
      uVar9 = 0;
      (**(code **)(**(int **)((int)this + 0x1c4) + 8))();
      FUN_670795b0(this,param_1,*param_2);
      FUN_6707d800((int)this);
      iVar5 = *(int *)((int)this + 0x1dc);
      local_18 = *(int **)((int)this + 0x1e4);
      local_8 = iVar5;
      if ((*(int *)((int)this + 0x178) != 0) && (iVar4 = FUN_67079680((int)this), iVar4 != 0)) {
        *(undefined4 *)(*(int *)((int)this + 0x1ec) + 0x14) = *(undefined4 *)(iVar5 + 0x14);
        iVar5 = *(int *)((int)this + 0x1ec);
        local_8 = iVar5;
      }
      if ((*param_2 == 2) && (*(int *)((int)this + 0xd8) == 2)) {
        uVar8 = (uint)(*(int *)((int)this + 0xdc) << 5) / 0x2711;
        *(undefined4 *)((int)this + 0x220) = 0;
        *(char *)((int)this + 0x1c0) = '\x1f' - (char)uVar8;
        if (*(int *)(param_1 + 0x28) != 0) {
          local_24 = 0x1f - uVar8;
          uStack_20 = 0;
          local_28 = 0;
          local_2c = 0x1f - (uint)(*(int *)((int)this + 0x94) << 5) / 0x2711;
          local_14 = (float)local_24 / (float)local_2c;
          if (*(int *)((int)this + 0x338) != 0) {
            do {
              iVar5 = *(int *)(param_1 + 0x24);
              local_10 = (uint)*(byte *)(uVar9 + iVar5);
              bVar2 = ftol();
              bVar7 = bVar2;
              if (0x1f < bVar2) {
                bVar7 = 0x1f;
              }
              if (bVar7 == 0) {
                bVar2 = 1;
              }
              else if (0x1f < bVar2) {
                bVar2 = 0x1f;
              }
              *(byte *)(uVar9 + iVar5) = bVar2;
              uVar9 = uVar9 + 1;
              iVar5 = local_8;
            } while (uVar9 < *(uint *)((int)this + 0x338));
          }
        }
      }
      uVar9 = 0;
      iVar4 = FUN_67079640(this,*(void **)((int)this + 0x1c4));
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar5 = (**(code **)(**(int **)((int)this + 0x16c) + 4))
                        ((int)this + 0x178,(int)this + 0x84,*(undefined4 *)((int)this + 0x1c4),iVar5
                         ,param_1,local_18,*(int **)((int)this + 0x16c));
      if (iVar5 != 0) {
        return iVar5;
      }
      *(undefined4 *)((int)this + 0x234) = 0;
      local_8 = 0;
      if ((*(int *)((int)this + 0xfc) != 0) && (*(int *)((int)this + 0x100) != 0)) {
        uVar8 = (*(int *)((int)this + 0x1d4) * *(int *)((int)this + 0x100) + 99U) / 100;
        *(uint *)((int)this + 0x234) = uVar8;
        if ((uVar8 != 0) && (uVar8 != 0)) {
          do {
            if (*(uint *)((int)this + 0x1d4) <= *(uint *)((int)this + 0x230)) {
              *(undefined4 *)((int)this + 0x230) = 0;
            }
            (**(code **)(**(int **)((int)this + 0x16c) + 0x14))
                      (0,*(undefined4 *)((int)this + 0x230));
            uVar9 = uVar9 + 1;
            *(int *)((int)this + 0x230) = *(int *)((int)this + 0x230) + 1;
          } while (uVar9 < *(uint *)((int)this + 0x234));
        }
      }
      uVar9 = 0;
      if (*(int *)((int)this + 0x21c) != 0) break;
      while( true ) {
        if (*(uint *)((int)this + 0x1cc) <= uVar9) goto LAB_670793c0;
        local_3c[2] = *(undefined4 *)((int)this + 0x1d0);
        local_3c[1] = 0;
        local_30 = 1;
        local_3c[0] = uVar9;
        FUN_6707ad20(*(void **)((int)this + 0x1c4),0,uVar9,(uint)*(byte *)((int)this + 0x1c0));
        *(undefined1 *)((int)this + 0x1f0) = *(undefined1 *)((int)this + 0x1c0);
        (**(code **)(**(int **)((int)this + 0x16c) + 0x10))
                  (local_3c,(undefined1 *)((int)this + 0x1f0),&local_c);
        bVar3 = FUN_6707d670(*(int *)((int)this + 0x1c4));
        if (CONCAT31(extraout_var_00,bVar3) == 0) {
          local_8 = FUN_67079790(this);
          *(undefined1 *)((int)this + 0x22c) = 1;
          if (local_8 != 0) {
            return local_8;
          }
          goto LAB_67079484;
        }
        if (((*(int *)((int)this + 0x178) == 1) && (3 < uVar9)) &&
           (iVar5 = (**(code **)(**(int **)((int)this + 0x16c) + 0x2c))(),
           uVar8 = iVar5 - *(int *)((int)this + 0x234),
           0x4b < (uint)((int)((uVar8 & ((int)uVar8 < 0) - 1) * 100) /
                        (int)((uVar9 + 1) * *(int *)((int)this + 0x1d0))))) break;
        uVar9 = uVar9 + 1;
      }
      *param_2 = 0;
      if (*(int *)((int)this + 0xa4) == 1) {
        *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0xa8);
      }
      FUN_6707ace0(*(void **)((int)this + 0x1c4),0);
    }
    local_30 = *(undefined4 *)((int)this + 0x1cc);
    local_3c[2] = *(undefined4 *)((int)this + 0x1d0);
    local_3c[0] = 0;
    local_3c[1] = 0;
    if (*(int *)((int)this + 0x178) != 0) {
      (**(code **)(**(int **)((int)this + 0x16c) + 0x20))(local_3c);
    }
    *(undefined1 *)((int)this + 0x1f0) = *(undefined1 *)((int)this + 0x1c0);
    local_8 = (**(code **)(**(int **)((int)this + 0x16c) + 0x10))
                        (local_3c,(undefined1 *)((int)this + 0x1f0),&local_c);
    if (local_8 != 0) {
      *(undefined1 *)((int)this + 0x22c) = 1;
      return local_8;
    }
    bVar3 = FUN_6707d670(*(int *)((int)this + 0x1c4));
    if (CONCAT31(extraout_var,bVar3) == 0) break;
    if ((*(int *)((int)this + 0x178) != 1) ||
       (iVar5 = (**(code **)(**(int **)((int)this + 0x16c) + 0x2c))(),
       uVar9 = iVar5 - *(int *)((int)this + 0x234),
       ((uVar9 & ((int)uVar9 < 0) - 1) * 100) / *(uint *)((int)this + 0x1d4) < 0x4c)) {
LAB_670793c0:
      if ((*param_2 == 0) || ((*param_2 != 2 && (*(int *)((int)this + 0x1b8) == 0)))) {
        if ((*(int *)(*(int *)((int)this + 0x1e4) + 0x28) == 0) &&
           (uVar9 = 0, *(int *)((int)this + 0x338) != 0)) {
          do {
            uVar9 = uVar9 + 1;
            *(undefined1 *)(*(int *)(*(int *)((int)this + 0x1e4) + 0x24) + -1 + uVar9) =
                 *(undefined1 *)((int)this + 0x1c0);
          } while (uVar9 < *(uint *)((int)this + 0x338));
        }
        piVar1 = *(int **)((int)this + 0x16c);
        iVar5 = *(int *)((int)this + 0x1e4);
        cVar10 = *param_2 == 0;
        local_18 = piVar1;
        iVar4 = (**(code **)(*piVar1 + 0x48))();
        iVar6 = (**(code **)(*piVar1 + 0x44))();
        FUN_6707a0b0((void *)((int)this + 600),*(int *)(iVar5 + 4),*(int *)(iVar5 + 0xc),
                     *(int *)(iVar5 + 8),*(int *)((int)this + 0x1d0) << 4,
                     *(int *)((int)this + 0x1cc) << 4,*(int *)(iVar5 + 0x10),
                     2 < *(int *)((int)this + 0x78),*(int *)(iVar5 + 0x24),1,iVar6,iVar4,cVar10);
      }
LAB_67079484:
      (**(code **)(**(int **)((int)this + 0x16c) + 0x38))(local_1c);
      if ((*(int *)((int)this + 8) == 0x13) || (*(int *)((int)this + 8) == 0x17)) {
        FUN_6707d7e0(*(int *)((int)this + 0x1c4));
      }
      iVar5 = FUN_6707adb0(*(void **)((int)this + 0x1c4),*(undefined4 **)(param_3 + 0x34));
      *(int *)(param_3 + 0x2c) = iVar5;
      if (iVar5 != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x1e4) + 0x14) = *(undefined4 *)(param_1 + 0x14);
        local_30 = *(undefined4 *)((int)this + 0x1cc);
        local_3c[2] = *(undefined4 *)((int)this + 0x1d0);
        local_3c[0] = 0;
        local_3c[1] = 0;
        (**(code **)(**(int **)((int)this + 0x16c) + 0x24))
                  (local_3c,*(undefined4 *)((int)this + 0x1e4));
        if ((*(int *)((int)this + 400) != 0) && (*(int *)((int)this + 0xf8) != 0)) {
          *(undefined4 *)((int)this + 0xf8) = 0;
        }
        FUN_6707ace0(*(void **)((int)this + 0x1c4),1);
        return local_8;
      }
      *(undefined1 *)((int)this + 0x22c) = 1;
      return 1;
    }
    *param_2 = 0;
    if (*(int *)((int)this + 0xa4) == 1) {
      *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0xa8);
    }
    FUN_6707ace0(*(void **)((int)this + 0x1c4),0);
  }
  local_8 = FUN_67079790(this);
  *(undefined1 *)((int)this + 0x22c) = 1;
  if (local_8 != 0) {
    return local_8;
  }
  goto LAB_67079484;
}


