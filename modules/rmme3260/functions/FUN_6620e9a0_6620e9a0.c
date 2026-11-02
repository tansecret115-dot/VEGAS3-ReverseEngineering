/* Module: rmme3260.dll
   Function: FUN_6620e9a0
   Address: 6620e9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6620e9a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_1c = 0;
  local_10 = 0;
  local_8 = 0;
  local_14 = 0;
  local_18 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0x104) != 0) {
    iVar10 = 0;
    do {
      iVar3 = *(int *)((int)this + 0x108) + iVar10;
      if ((*(int *)(iVar3 + 0x1e) == 0) && (*(int *)(iVar3 + 0x10) == 0)) {
        uVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x10))(iVar3 + 0x14,iVar3 + 0x22);
        *(undefined4 *)(iVar10 + 0x1e + *(int *)((int)this + 0x108)) = uVar4;
        iVar3 = *(int *)((int)this + 0x108);
        if (*(short *)(iVar10 + 0x18 + iVar3) != **(short **)(iVar10 + iVar3)) {
          do {
            iVar2 = *(int *)(iVar10 + iVar3 + 0x1e);
            if (iVar2 == 0) break;
            (**(code **)(**(int **)(iVar10 + iVar3 + 4) + 0x14))(iVar2);
            iVar3 = *(int *)((int)this + 0x108) + iVar10;
            uVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x10))(iVar3 + 0x14,iVar3 + 0x22);
            *(undefined4 *)(iVar10 + 0x1e + *(int *)((int)this + 0x108)) = uVar4;
            iVar3 = *(int *)((int)this + 0x108);
          } while (*(short *)(iVar10 + 0x18 + iVar3) != **(short **)(iVar10 + iVar3));
        }
        piVar5 = (int *)(*(int *)((int)this + 0x108) + iVar10);
        if (*(int *)((int)piVar5 + 0x1e) == 0) {
          piVar5[4] = 1;
        }
        else {
          iVar3 = *piVar5;
          if (*(int *)(iVar3 + 4) != 0) {
            if ((*(byte *)(piVar5 + 7) & 2) == 0) {
              piVar5[5] = *(int *)(iVar3 + 8);
            }
            else {
              *(int *)(iVar3 + 8) = piVar5[5];
            }
          }
        }
      }
      iVar3 = iVar10 + *(int *)((int)this + 0x108);
      if (*(int *)(iVar10 + 0x1e + *(int *)((int)this + 0x108)) != 0) {
        uVar7 = *(uint *)(iVar3 + 0x14);
        if (local_18 == 0) {
          local_10 = local_c;
          local_18 = 1;
          local_8 = uVar7;
        }
        else if (uVar7 < local_8) {
          local_10 = local_c;
          local_8 = uVar7;
        }
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        local_14 = local_14 + 1;
      }
      local_c = local_c + 1;
      iVar10 = iVar10 + 0x26;
    } while (local_c < *(uint *)((int)this + 0x104));
  }
  iVar10 = local_1c;
  if (local_14 == *(int *)((int)this + 0x104)) {
    iVar10 = 1;
  }
  if (iVar10 == 0) {
    iVar10 = local_10 * 0x26;
    puVar1 = (undefined4 *)(iVar10 + 0x14 + *(int *)((int)this + 0x108));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar1 + 2);
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)(*(int *)(iVar10 + *(int *)((int)this + 0x108)) + 2);
    *param_2 = *(undefined4 *)(iVar10 + 0x22 + *(int *)((int)this + 0x108));
    uVar7 = *(uint *)(iVar10 + 0x1e + *(int *)((int)this + 0x108));
    *(undefined4 *)(iVar10 + *(int *)((int)this + 0x108) + 0x22) = 0;
    *(undefined4 *)(iVar10 + 0x1e + *(int *)((int)this + 0x108)) = 0;
    iVar10 = *(int *)(iVar10 + 4 + *(int *)((int)this + 0x108));
    goto LAB_6620eef6;
  }
  uVar6 = (**(code **)(**(int **)(*(int *)((int)this + 0x100) + 8 +
                                 *(int *)((int)this + 0xf8) * 0x14) + 0x10))(param_1,param_2);
  uVar8 = 0xffffffff;
  iVar10 = 0;
  piVar5 = (int *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf8) * 0x14);
  if (0 < *piVar5) {
    psVar9 = (short *)piVar5[1];
    do {
      if (*psVar9 == *(short *)(param_1 + 1)) {
        uVar8 = (uint)*(ushort *)(piVar5[1] + 2 + iVar10 * 4);
        goto LAB_6620ebf3;
      }
      iVar10 = iVar10 + 1;
      psVar9 = psVar9 + 2;
    } while (iVar10 < *piVar5);
    uVar8 = 0xffffffff;
  }
LAB_6620ebf3:
  uVar7 = uVar6;
  if (uVar8 != *(uint *)(*(int *)((int)this + 0xe4) + (uint)*(ushort *)((int)this + 0xe2) * 4)) {
    do {
      local_c = 0xffffffff;
      uVar7 = 0;
      if (uVar6 == 0) break;
      (**(code **)(*(int *)piVar5[2] + 0x14))(uVar6);
      uVar6 = (**(code **)(**(int **)(*(int *)((int)this + 0x100) + 8 +
                                     *(int *)((int)this + 0xf8) * 0x14) + 0x10))(param_1,param_2);
      uVar8 = 0xffffffff;
      local_8 = 0;
      piVar5 = (int *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf8) * 0x14);
      if (0 < *piVar5) {
        psVar9 = (short *)piVar5[1];
        local_14 = CONCAT22(local_14._2_2_,*(short *)(param_1 + 1));
        do {
          if (*psVar9 == *(short *)(param_1 + 1)) {
            uVar8 = (uint)*(ushort *)(piVar5[1] + 2 + local_8 * 4);
            goto LAB_6620ec99;
          }
          psVar9 = psVar9 + 2;
          local_8 = local_8 + 1;
        } while ((int)local_8 < *piVar5);
        uVar8 = 0xffffffff;
      }
LAB_6620ec99:
      uVar7 = uVar6;
    } while (uVar8 != *(uint *)(*(int *)((int)this + 0xe4) + (uint)*(ushort *)((int)this + 0xe2) * 4
                               ));
  }
  local_c = 0xffffffff;
  if (uVar7 == 0) {
    iVar10 = *(int *)(*(int *)(*(int *)((int)this + 0x100) + 8 + *(int *)((int)this + 0xf8) * 0x14)
                     + 0x24);
    if (iVar10 != 0) {
      *(int *)((int)this + 0x24) = iVar10;
      goto LAB_6620eec5;
    }
    *(short *)((int)this + 0xe2) = *(short *)((int)this + 0xe2) + 1;
    uVar7 = (uint)*(ushort *)((int)this + 0xe2);
    if ((int)uVar7 < *(int *)((int)this + 0xe8)) {
      do {
        iVar10 = FUN_6620e950(this,*(uint *)(*(int *)((int)this + 0xe4) + uVar7 * 4));
        if (iVar10 == 0) break;
        *(short *)((int)this + 0xe2) = *(short *)((int)this + 0xe2) + 1;
        uVar7 = (uint)*(ushort *)((int)this + 0xe2);
      } while ((int)uVar7 < *(int *)((int)this + 0xe8));
    }
    local_18 = 0;
    if ((*(int *)((int)this + 0xe8) <= (int)(uint)*(ushort *)((int)this + 0xe2)) ||
       (iVar10 = FUN_6620f020(this,*(uint *)(*(int *)((int)this + 0xe4) +
                                            (uint)*(ushort *)((int)this + 0xe2) * 4),
                              (ushort *)&local_18), iVar10 == 0)) {
      uVar7 = 0;
      goto LAB_6620eec5;
    }
    *(uint *)((int)this + 0xf8) = local_18 & 0xffff;
    local_1c = 0;
    (**(code **)(*(int *)this + 0x18))(0,&local_1c);
    uVar7 = (**(code **)(**(int **)(*(int *)((int)this + 0x100) + 8 +
                                   *(int *)((int)this + 0xf8) * 0x14) + 0x10))(param_1,param_2);
    uVar8 = 0xffffffff;
    iVar10 = 0;
    piVar5 = (int *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf8) * 0x14);
    if (0 < *piVar5) {
      psVar9 = (short *)piVar5[1];
      do {
        if (*psVar9 == *(short *)(param_1 + 1)) {
          uVar8 = (uint)*(ushort *)(piVar5[1] + 2 + iVar10 * 4);
          goto LAB_6620ede3;
        }
        iVar10 = iVar10 + 1;
        psVar9 = psVar9 + 2;
      } while (iVar10 < *piVar5);
      uVar8 = 0xffffffff;
    }
LAB_6620ede3:
    if (uVar8 != *(uint *)(*(int *)((int)this + 0xe4) + (uint)*(ushort *)((int)this + 0xe2) * 4)) {
      do {
        local_c = 0xffffffff;
        uVar8 = 0;
        if (uVar7 == 0) goto LAB_6620eea3;
        (**(code **)(*(int *)piVar5[2] + 0x14))(uVar7);
        uVar7 = (**(code **)(**(int **)(*(int *)((int)this + 0x100) + 8 +
                                       *(int *)((int)this + 0xf8) * 0x14) + 0x10))(param_1,param_2);
        uVar8 = 0xffffffff;
        local_8 = 0;
        piVar5 = (int *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 0xf8) * 0x14);
        if (0 < *piVar5) {
          psVar9 = (short *)piVar5[1];
          local_14 = CONCAT22(local_14._2_2_,*(short *)(param_1 + 1));
          do {
            if (*psVar9 == *(short *)(param_1 + 1)) {
              uVar8 = (uint)*(ushort *)(piVar5[1] + 2 + local_8 * 4);
              goto LAB_6620ee87;
            }
            psVar9 = psVar9 + 2;
            local_8 = local_8 + 1;
          } while ((int)local_8 < *piVar5);
          uVar8 = 0xffffffff;
        }
LAB_6620ee87:
      } while (uVar8 != *(uint *)(*(int *)((int)this + 0xe4) +
                                 (uint)*(ushort *)((int)this + 0xe2) * 4));
    }
    local_c = 0xffffffff;
    uVar8 = uVar7;
    if (uVar7 == 0) {
LAB_6620eea3:
      local_c = 0xffffffff;
      *(undefined4 *)((int)this + 0x24) =
           *(undefined4 *)
            (*(int *)(*(int *)((int)this + 0x100) + 8 + *(int *)((int)this + 0xf8) * 0x14) + 0x24);
      uVar7 = uVar8;
      goto LAB_6620eec5;
    }
LAB_6620eec9:
    *(short *)(param_1 + 1) =
         (short)*(undefined4 *)
                 (*(int *)((int)this + 0xe4) + (uint)*(ushort *)((int)this + 0xe2) * 4);
  }
  else {
LAB_6620eec5:
    if (uVar7 != 0) goto LAB_6620eec9;
  }
  iVar10 = *(int *)(*(int *)((int)this + 0x100) + 8 + *(int *)((int)this + 0xf8) * 0x14);
LAB_6620eef6:
  FUN_66250fc0((void *)((int)this + 0x10c),uVar7,iVar10);
  return uVar7;
}


