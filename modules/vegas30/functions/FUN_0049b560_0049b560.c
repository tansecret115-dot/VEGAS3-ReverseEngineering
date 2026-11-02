/* Module: vegas30.exe
   Function: FUN_0049b560
   Address: 0049b560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049b886) */
/* WARNING: Removing unreachable block (ram,0x0049b9a8) */
/* WARNING: Removing unreachable block (ram,0x0049ba35) */

undefined4 FUN_0049b560(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 local_64 [4];
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  undefined1 *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int iStack_8;
  
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 == 0) {
    return 0;
  }
  local_20 = *(int *)(iVar1 + 8);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_10 = (uint *)0x0;
  }
  else {
    local_10 = (uint *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  uVar5 = *local_10;
  local_14 = DAT_006477b0;
  local_1c = uVar5;
  iVar4 = FUN_00497a40(param_1,param_2);
  local_3c = &stack0xffffff64;
  if (iVar4 < 0) {
    if (iVar4 != -2) {
      return 0;
    }
  }
  else {
    if ((iVar4 < (int)uVar5) &&
       (*(int *)(*(int *)(local_10[2] + iVar4 * 4) + 4) !=
        *(int *)(iVar1 + 0x78 + *(int *)(iVar1 + 0xc) * 0x68))) {
      return 0;
    }
    if (-1 < iVar4) goto LAB_0049b632;
    if (iVar4 == -1) {
      iVar4 = 0;
      goto LAB_0049b632;
    }
    if (iVar4 != -2) goto LAB_0049b632;
  }
  if ((int)uVar5 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(param_2 -
                 *(int *)(*(int *)(*(int *)((local_10[2] - 4) + uVar5 * 4) + 0x69c) + 0x24)) /
            local_14 + uVar5;
  }
LAB_0049b632:
  FUN_0060ac30();
  puVar8 = (undefined4 *)&stack0xffffff64;
  for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_38 = -1;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_0046ac60(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(iVar1 + 0xa8));
  iVar2 = *(int *)(iVar1 + 0xc);
  uVar5 = *(uint *)(iVar1 + 0x88 + iVar2 * 0x68);
  iVar6 = iVar1 + iVar2 * 0x68;
  FUN_0046ac80(local_1c,iVar4,*(undefined4 *)(iVar6 + 0x78),uVar5 + param_3,
               *(int *)(iVar6 + 0x8c) + param_4 + (uint)CARRY4(uVar5,param_3),
               *(undefined4 *)(iVar1 + 0xa8 + iVar2 * 0x68));
  local_34 = 0;
  if (0 < local_20) {
    local_28 = 0;
    local_18 = (int *)(iVar1 + 0xec);
    do {
      uVar5 = local_34;
      if (local_34 < *(uint *)(iVar1 + 8)) {
        pbVar7 = (byte *)(local_18 + -0x1f);
      }
      else {
        pbVar7 = (byte *)0x0;
      }
      if ((*pbVar7 & 0x80) == 0) {
        FUN_0046ad60(*(int *)(pbVar7 + 0x38),*(int *)(pbVar7 + 8),local_1c,
                     *(uint *)(pbVar7 + 0x18) + param_3,
                     *(int *)(pbVar7 + 0x1c) + param_4 +
                     (uint)CARRY4(*(uint *)(pbVar7 + 0x18),param_3),
                     local_34 == *(uint *)(iVar1 + 0xc),local_64);
        iVar4 = local_60;
      }
      else {
        iVar4 = *(int *)(pbVar7 + 0x38);
      }
      local_2c = 0;
      if ((iVar4 < (int)local_1c) && (-1 < iVar4)) {
        iVar6 = *(int *)(local_10[2] + iVar4 * 4);
        if (local_38 != *(int *)(pbVar7 + 0x38)) {
          *(int *)(local_3c + iVar4 * 4) = *(int *)(local_3c + iVar4 * 4) + 1;
          local_38 = *(int *)(pbVar7 + 0x38);
        }
        local_2c = *(int *)(local_3c + iVar4 * 4) + -1;
        iVar4 = *(int *)(iVar6 + 0x69c);
        iVar6 = *(int *)(iVar4 + 0x1c);
        local_24 = iVar6 + 2;
        local_30 = (*(int *)(iVar4 + 0x24) - iVar6) + -4;
      }
      else {
        if ((int)local_1c < 1) {
          local_24 = *(int *)(pbVar7 + 0x14) * local_14 + 2 + *(int *)(param_1 + 0xac4);
        }
        else {
          local_24 = *(int *)(*(int *)(*(int *)((local_10[2] - 4) + local_1c * 4) + 0x69c) + 0x24) +
                     local_28;
          if (((int)uVar5 < local_20) && (*(int *)(pbVar7 + 0x14) != *local_18)) {
            local_28 = local_28 + local_14;
          }
        }
        local_30 = local_14;
      }
      iStack_8 = *(int *)(param_1 + 0xb94);
      local_c = *(int *)(param_1 + 0xb90);
      if ((*pbVar7 & 0x80) == 0) {
        if (local_c == 0 && iStack_8 == 0) {
          param_2 = 0xffffffff;
        }
        else {
          local_5c = *(uint *)(pbVar7 + 0x18) + param_3;
          iStack_58 = *(int *)(pbVar7 + 0x1c) + param_4 +
                      (uint)CARRY4(*(uint *)(pbVar7 + 0x18),param_3);
          lVar9 = ftol();
          uVar3 = lVar9 + *(int *)(param_1 + 0xac0);
          param_2 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_2)))) {
            if (0x3fff < (longlong)uVar3) {
              param_2 = 0x3fff;
            }
          }
          else {
            param_2 = 0xffffc000;
          }
        }
        if (local_c == 0 && iStack_8 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(pbVar7 + 0x20) + *(uint *)(pbVar7 + 0x18);
          local_4c = uVar5 + param_3;
          iStack_48 = *(int *)(pbVar7 + 0x24) + *(int *)(pbVar7 + 0x1c) +
                      (uint)CARRY4(*(uint *)(pbVar7 + 0x20),*(uint *)(pbVar7 + 0x18)) + param_4 +
                      (uint)CARRY4(uVar5,param_3);
          lVar9 = ftol();
          uVar3 = lVar9 + *(int *)(param_1 + 0xac0);
          uVar5 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar5)))) {
            if (0x3fff < (longlong)uVar3) {
LAB_0049ba3d:
              uVar5 = 0x3fff;
            }
          }
          else {
            uVar5 = 0xffffc000;
          }
        }
      }
      else {
        if (local_c == 0 && iStack_8 == 0) {
          param_2 = 0xffffffff;
        }
        else {
          local_44 = *(uint *)(pbVar7 + 0x18) + param_3;
          iStack_40 = *(int *)(pbVar7 + 0x1c) + param_4 +
                      (uint)CARRY4(*(uint *)(pbVar7 + 0x18),param_3);
          lVar9 = ftol();
          uVar3 = lVar9 + *(int *)(param_1 + 0xac0);
          param_2 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_2)))) {
            if (0x3fff < (longlong)uVar3) {
              param_2 = 0x3fff;
            }
          }
          else {
            param_2 = 0xffffc000;
          }
        }
        if (local_c == 0 && iStack_8 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(pbVar7 + 0x20) + *(uint *)(pbVar7 + 0x18);
          local_54 = uVar5 + param_3;
          iStack_50 = *(int *)(pbVar7 + 0x24) + *(int *)(pbVar7 + 0x1c) +
                      (uint)CARRY4(*(uint *)(pbVar7 + 0x20),*(uint *)(pbVar7 + 0x18)) + param_4 +
                      (uint)CARRY4(uVar5,param_3);
          lVar9 = ftol();
          uVar3 = lVar9 + *(int *)(param_1 + 0xac0);
          uVar5 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar5)))) {
            if (-1 < (longlong)uVar3) {
              if (0xffffffff < (longlong)uVar3) goto LAB_0049ba3d;
              if (0x3fff < uVar5) {
                uVar5 = 0x3fff;
              }
            }
          }
          else {
            uVar5 = 0xffffc000;
          }
        }
      }
      iVar4 = local_2c * 3;
      *(uint *)(pbVar7 + 0x54) = param_2 + iVar4;
      *(int *)(pbVar7 + 0x58) = local_24 + iVar4;
      *(uint *)(pbVar7 + 0x5c) = iVar4 + uVar5;
      local_34 = local_34 + 1;
      *(int *)(pbVar7 + 0x60) = local_30 + local_24 + iVar4;
      local_18 = local_18 + 0x1a;
    } while ((int)local_34 < local_20);
  }
  FUN_0046aed0();
  return 1;
}


