/* Module: mp3plug.dll
   Function: FUN_5f6f6680
   Address: 5f6f6680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6f6680(int param_1,int param_2)

{
  double dVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint local_69c [384];
  uint auStack_9c [16];
  uint local_5c;
  undefined8 local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_18;
  
  local_30 = param_2;
  if (in_EAX == 0) {
    local_38 = 0;
    iVar6 = *(int *)(in_stack_00000018 + 0x10) * 2;
    if (0 < iVar6) {
      local_2c = param_1;
      local_38 = 0;
      local_28 = 3;
      do {
        iVar8 = local_38 * 4;
        iVar2 = local_38 * 4;
        local_38 = local_38 + 1;
        iVar6 = iVar6 - (*(int *)(param_2 + 4 + iVar8) - *(int *)(param_2 + iVar2));
      } while (0 < iVar6);
    }
    if (param_1 == 0) {
      if (local_38 < 2) {
        local_34 = 1;
      }
      else {
        dVar1 = (double)((float)local_38 * _DAT_5f75e354 + _DAT_5f75e350);
        local_44 = dVar1;
        dVar1 = local_44;
        local_44._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        local_44._0_4_ = SUB84(dVar1,0);
        local_2c = (uint)local_44;
        uVar3 = local_44._4_4_ >> 0x14 & 0x7ff;
        if (uVar3 < 0x3ff) {
          local_34 = 0;
        }
        else {
          local_18 = 3;
          local_34 = (local_44._4_4_ << 0xb | (uint)local_44 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar3 & 0x1f);
          if ((longlong)dVar1 < 0) {
            local_34 = -local_34;
          }
        }
        local_5c = local_34;
        local_44 = dVar1;
        if (0xf < (int)local_34) {
          local_34 = 0x10;
        }
      }
      local_38 = local_38 - local_34;
      local_69c[0] = local_34;
      iVar6 = 1;
      iVar2 = 3;
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
    else {
      iVar6 = param_2;
      iVar2 = 3;
      if (param_1 == 1) {
        iVar6 = 0;
        uVar3 = 1;
        local_28 = 3;
        do {
          iVar2 = local_38 - uVar3;
          if (iVar2 < 1) break;
          uVar4 = 1;
          iVar8 = iVar6;
          do {
            uVar5 = iVar2 - uVar4;
            iVar6 = iVar8;
            if ((int)uVar5 < 1) break;
            iVar6 = iVar8 + 1;
            local_69c[iVar8 * 3 + 2] = uVar5;
            local_69c[iVar8 * 3 + 1] = uVar4;
            local_69c[iVar8 * 3] = uVar3;
            uVar4 = uVar4 + 1;
            iVar8 = iVar6;
          } while ((int)uVar4 < 9);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x11);
        iVar2 = local_28;
        if (iVar6 == 0) {
          local_69c[2] = 0;
          iVar6 = 1;
          local_69c[0] = 1;
          local_69c[1] = 1;
        }
      }
    }
  }
  else {
    iVar6 = 1;
    iVar2 = 2;
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
  *(undefined4 *)(in_stack_00000018 + 0x44) = 0x7fffffff;
  *(int *)(in_stack_00000018 + 0x14) = iVar2;
  if (iVar2 < 3) {
    iVar2 = in_stack_00000018 + iVar2 * 4;
    local_24 = ((in_stack_00000018 + 0xc) - iVar2 & 0xfffffff8U) + iVar2;
    for (; iVar2 < local_24; iVar2 = iVar2 + 8) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
    for (; iVar2 < in_stack_00000018 + 0xc; iVar2 = iVar2 + 4) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
    }
  }
  if (0 < iVar6) {
    local_2c = 0;
    iVar2 = *(int *)(in_stack_00000018 + 0x14);
    local_34 = iVar6 * 0xc;
    do {
      iVar7 = 0;
      iVar8 = 0;
      iVar6 = *(int *)(in_stack_00000018 + 0x10) * 2;
      if (0 < iVar2) {
        local_38 = local_2c;
        do {
          iVar2 = 0;
          auStack_9c[iVar7 + 6] = 0;
          auStack_9c[iVar7 + 3] = 0;
          do {
            if (0 < iVar6) {
              iVar9 = *(int *)(local_30 + 4 + iVar8 * 4) - *(int *)(local_30 + iVar8 * 4);
              iVar10 = iVar6;
              if (iVar9 < iVar6) {
                iVar10 = iVar9;
              }
              auStack_9c[iVar7 + 3] = auStack_9c[iVar7 + 3] + iVar10;
              iVar10 = *(int *)(local_30 + 4 + iVar8 * 4) - *(int *)(local_30 + iVar8 * 4);
              if (iVar6 <= iVar10) {
                iVar10 = iVar6;
              }
              iVar6 = iVar6 - iVar10;
              uVar3 = *(uint *)(in_stack_00000014 + iVar8 * 4);
              if (auStack_9c[iVar7 + 6] < uVar3) {
                auStack_9c[iVar7 + 6] = uVar3;
              }
            }
            iVar2 = iVar2 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar2 < *(int *)((int)local_69c + local_38));
          iVar2 = *(int *)(in_stack_00000018 + 0x14);
          iVar7 = iVar7 + 1;
          local_38 = local_38 + 4;
        } while (iVar7 < iVar2);
      }
      iVar6 = 0;
      iVar8 = 0;
      local_38 = 0;
      if (0 < iVar2) {
        local_38 = 0;
        do {
          auStack_9c[iVar6] = 0x7fffffff;
          iVar2 = 0;
          do {
            if (auStack_9c[iVar6 + 6] <= (uint)(&DAT_5f741940)[iVar2 * 6]) {
              (*(code *)(&PTR_FUN_5f741954)[iVar2 * 6])
                        (in_stack_00000010 + iVar8 * 4,
                         (int)(auStack_9c[iVar6 + 3] + (uint)(0x7fffffff < auStack_9c[iVar6 + 3]))
                         >> 1,auStack_9c + 9);
              iVar10 = 0;
              iVar7 = (&DAT_5f741944)[iVar2 * 6];
              if (iVar7 < 1) {
                uVar3 = auStack_9c[iVar6];
              }
              else {
                uVar3 = auStack_9c[iVar6];
                do {
                  uVar4 = auStack_9c[iVar10 + 9];
                  if ((int)uVar4 < (int)uVar3) {
                    auStack_9c[iVar6] = uVar4;
                    auStack_9c[iVar6 + 0xc] = (&DAT_5f741948)[iVar2 * 6 + iVar10];
                    iVar7 = (&DAT_5f741944)[iVar2 * 6];
                    uVar3 = uVar4;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar7);
              }
              goto LAB_5f6f6afd;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x13);
          uVar3 = auStack_9c[iVar6];
LAB_5f6f6afd:
          iVar8 = iVar8 + auStack_9c[iVar6 + 3];
          local_38 = uVar3 + local_38;
          iVar2 = *(int *)(in_stack_00000018 + 0x14);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      if (local_38 < *(int *)(in_stack_00000018 + 0x44)) {
        *(int *)(in_stack_00000018 + 0x44) = local_38;
        *(int *)(in_stack_00000018 + 0x18) = *(int *)((int)local_69c + local_2c) + -1;
        *(int *)(in_stack_00000018 + 0x1c) = *(int *)((int)local_69c + local_2c + 4) + -1;
        iVar2 = *(int *)(in_stack_00000018 + 0x14);
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            *(uint *)(in_stack_00000018 + 0x20 + iVar6 * 4) = auStack_9c[iVar6 + 0xc];
            *(uint *)(in_stack_00000018 + 0x2c + iVar6 * 4) = auStack_9c[iVar6];
            *(int *)(in_stack_00000018 + 0x38 + iVar6 * 4) =
                 (int)(auStack_9c[iVar6 + 3] + (uint)(0x7fffffff < auStack_9c[iVar6 + 3])) >> 1;
            iVar2 = *(int *)(in_stack_00000018 + 0x14);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
      }
      local_2c = local_2c + 0xc;
    } while ((int)local_2c < (int)local_34);
  }
  return;
}


