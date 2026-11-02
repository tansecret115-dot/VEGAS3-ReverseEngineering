/* Module: mp3plug.dll
   Function: FUN_5f6e9b40
   Address: 5f6e9b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6e9b40(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int in_stack_00000010;
  int in_stack_00000014;
  int local_6b4;
  int local_6b0;
  uint *local_6ac;
  uint local_69c [384];
  uint auStack_9c [10];
  uint auStack_74 [6];
  uint local_5c;
  undefined8 local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  uint local_18;
  
  local_30 = param_2;
  if (in_EAX == 0) {
    local_38 = 0;
    iVar9 = *(int *)(in_stack_00000014 + 0x10) * 2;
    if (0 < iVar9) {
      local_38 = 0;
      local_28 = 3;
      do {
        iVar3 = local_38 * 0x20;
        local_38 = local_38 + 1;
        iVar9 = iVar9 - *(int *)(param_2 + 4 + iVar3);
      } while (0 < iVar9);
      iVar9 = param_2;
    }
    local_28 = 3;
    if (param_1 == 0) {
      iVar9 = 1;
      if (local_38 < 2) {
        local_69c[0] = 1;
      }
      else {
        dVar1 = (double)((float)local_38 * _DAT_5f75d7f4 + _DAT_5f75d7f0);
        local_44 = dVar1;
        dVar1 = local_44;
        local_44._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        local_44._0_4_ = SUB84(dVar1,0);
        uVar10 = local_44._4_4_ >> 0x14 & 0x7ff;
        if (uVar10 < 0x3ff) {
          local_69c[0] = 0;
        }
        else {
          local_1c = in_stack_00000014;
          local_18 = local_44._4_4_;
          local_69c[0] = (local_44._4_4_ << 0xb | (uint)local_44 >> 0x15 | 0x80000000) >>
                         (0x1eU - (char)uVar10 & 0x1f);
          if ((longlong)dVar1 < 0) {
            local_69c[0] = -local_69c[0];
          }
        }
        local_5c = local_69c[0];
        local_44 = dVar1;
        if (0xf < (int)local_69c[0]) {
          local_69c[0] = 0x10;
        }
      }
      local_38 = local_38 - local_69c[0];
      if (local_38 < 1) {
        local_69c[1] = 1;
        local_69c[2] = 0;
      }
      else {
        if (local_38 < 2) {
          local_69c[1] = 1;
        }
        else {
          local_69c[1] = local_38 + 1 >> 1;
          if (7 < (int)local_69c[1]) {
            local_69c[1] = 8;
          }
        }
        local_69c[2] = local_38 - local_69c[1];
      }
    }
    else if (param_1 == 1) {
      iVar9 = 0;
      uVar10 = 1;
      local_28 = 3;
      do {
        iVar3 = local_38 - uVar10;
        if (iVar3 < 1) break;
        uVar5 = 1;
        iVar6 = iVar9;
        do {
          uVar7 = iVar3 - uVar5;
          iVar9 = iVar6;
          if ((int)uVar7 < 1) break;
          iVar9 = iVar6 + 1;
          local_69c[iVar6 * 3 + 2] = uVar7;
          local_69c[iVar6 * 3 + 1] = uVar5;
          local_69c[iVar6 * 3] = uVar10;
          uVar5 = uVar5 + 1;
          iVar6 = iVar9;
        } while ((int)uVar5 < 9);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x11);
      if (iVar9 == 0) {
        local_69c[2] = 0;
        iVar9 = 1;
        local_69c[0] = 1;
        local_69c[1] = 1;
      }
    }
  }
  else {
    iVar9 = 1;
    local_28 = 2;
    if (in_EAX == 2) {
      local_69c[0] = 9;
      local_69c[1] = 0x24;
      local_69c[2] = 0;
    }
    else {
      local_69c[0] = 8;
      local_69c[1] = 0x24;
      local_69c[2] = 0;
    }
  }
  *(undefined4 *)(in_stack_00000014 + 0x44) = 0x7fffffff;
  *(int *)(in_stack_00000014 + 0x14) = local_28;
  if (local_28 < 3) {
    iVar3 = in_stack_00000014 + local_28 * 4;
    local_24 = ((in_stack_00000014 + 0xc) - iVar3 & 0xfffffff8U) + iVar3;
    for (; iVar3 < local_24; iVar3 = iVar3 + 8) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0;
    }
    for (; iVar3 < in_stack_00000014 + 0xc; iVar3 = iVar3 + 4) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
    }
  }
  if (0 < iVar9) {
    local_2c = iVar9 * 0xc;
    iVar9 = *(int *)(in_stack_00000014 + 0x14);
    local_28 = 0;
    do {
      iVar6 = 0;
      iVar8 = 0;
      iVar3 = *(int *)(in_stack_00000014 + 0x10) * 2;
      if (0 < iVar9) {
        iVar4 = (int)&local_6b4 + local_28;
        do {
          uVar10 = 0;
          auStack_9c[iVar6 + 3] = 0;
          auStack_9c[iVar6] = 0;
          local_38 = *(int *)(iVar4 + 0x18);
          if (0 < iVar3) {
            local_34 = iVar4;
            do {
              iVar4 = iVar8 * 0x20;
              local_1c = iVar3;
              local_18 = uVar10;
              iVar9 = *(int *)(local_30 + 4 + iVar4);
              uVar5 = *(uint *)(in_stack_00000010 +
                               *(int *)(local_30 + 8 + iVar4) * 4 + *(int *)(local_30 + iVar4) * 4);
              if (auStack_9c[iVar6 + 3] < uVar5) {
                auStack_9c[iVar6 + 3] = uVar5;
              }
              iVar2 = local_38;
              uVar10 = uVar10 + 1;
              iVar8 = iVar8 + 1;
              if (iVar3 <= iVar9) {
                auStack_9c[iVar6] = auStack_9c[iVar6] + iVar3;
                iVar3 = 0;
                iVar4 = local_34;
                goto LAB_5f6e9ec4;
              }
              iVar3 = iVar3 - iVar9;
              auStack_9c[iVar6] = iVar9 + auStack_9c[iVar6];
            } while ((int)uVar10 < iVar2);
            iVar4 = local_34;
            local_38 = iVar2;
          }
LAB_5f6e9ec4:
          iVar8 = iVar8 + (local_38 - uVar10);
          iVar9 = *(int *)(in_stack_00000014 + 0x14);
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar6 < iVar9);
      }
      iVar3 = 0;
      iVar6 = 0;
      local_38 = 0;
      if (0 < iVar9) {
        do {
          auStack_9c[iVar3 + 6] = 0x7fffffff;
          iVar9 = 0;
          do {
            if (auStack_9c[iVar3 + 3] <= (uint)(&DAT_5f741220)[iVar9 * 6]) {
              iVar8 = iVar9 * 0x18;
              goto LAB_5f6e9f4d;
            }
            iVar4 = iVar9 + 1;
            if (0x12 < iVar4) {
              iVar8 = iVar4 * 0x18;
              goto LAB_5f6e9f4d;
            }
            iVar8 = iVar4 * 0x18;
            if (auStack_9c[iVar3 + 3] <= (uint)(&DAT_5f741220)[iVar4 * 6]) goto LAB_5f6e9f4d;
            iVar9 = iVar9 + 2;
          } while (iVar9 < 0x13);
          iVar8 = iVar9 * 0x18;
LAB_5f6e9f4d:
          local_6b4 = in_stack_00000010 + iVar6 * 4;
          local_6ac = auStack_9c + 9;
          local_6b0 = (int)(auStack_9c[iVar3] + (uint)(0x7fffffff < auStack_9c[iVar3])) >> 1;
          (**(code **)((int)&PTR_FUN_5f741234 + iVar8))();
          auStack_9c[iVar3 + 6] = auStack_9c[9];
          auStack_9c[iVar3 + 0xc] = *(uint *)(iVar8 + 0x5f741228);
          iVar9 = *(int *)(iVar8 + 0x5f741224);
          iVar4 = 1;
          if (iVar9 < 2) {
            uVar10 = auStack_9c[iVar3 + 6];
          }
          else {
            uVar10 = auStack_9c[iVar3 + 6];
            do {
              uVar5 = auStack_9c[iVar4 + 9];
              if ((int)uVar5 < (int)uVar10) {
                auStack_9c[iVar3 + 6] = uVar5;
                auStack_9c[iVar3 + 0xc] = *(uint *)(iVar8 + 0x5f741228 + iVar4 * 4);
                iVar9 = *(int *)(iVar8 + 0x5f741224);
                uVar10 = uVar5;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar9);
          }
          iVar6 = iVar6 + auStack_9c[iVar3];
          local_38 = uVar10 + local_38;
          iVar9 = *(int *)(in_stack_00000014 + 0x14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar9);
      }
      if (local_38 < *(int *)(in_stack_00000014 + 0x44)) {
        *(int *)(in_stack_00000014 + 0x44) = local_38;
        iVar9 = *(int *)(in_stack_00000014 + 0x14);
        *(int *)(in_stack_00000014 + 0x18) = *(int *)((int)local_69c + local_28) + -1;
        *(int *)(in_stack_00000014 + 0x1c) = *(int *)((int)local_69c + local_28 + 4) + -1;
        iVar3 = 0;
        if (0 < iVar9) {
          do {
            *(uint *)(in_stack_00000014 + 0x20 + iVar3 * 4) = auStack_9c[iVar3 + 0xc];
            *(uint *)(in_stack_00000014 + 0x2c + iVar3 * 4) = auStack_9c[iVar3 + 6];
            *(int *)(in_stack_00000014 + 0x38 + iVar3 * 4) =
                 (int)(auStack_9c[iVar3] + (uint)(0x7fffffff < auStack_9c[iVar3])) >> 1;
            iVar9 = *(int *)(in_stack_00000014 + 0x14);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar9);
        }
      }
      local_28 = local_28 + 0xc;
    } while (local_28 < local_2c);
  }
  return;
}


