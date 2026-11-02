/* Module: vegas30.exe
   Function: FUN_004ac040
   Address: 004ac040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004ac33a) */
/* WARNING: Removing unreachable block (ram,0x004ac3dc) */

undefined4 FUN_004ac040(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  longlong lVar9;
  int *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  iVar5 = *(int *)(param_1 + 0x16c);
  if (iVar5 == 0) {
    return 0;
  }
  local_24 = *(int *)(iVar5 + 8);
  local_20 = iVar5;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_48 = (int *)0x0;
  }
  else {
    local_48 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *local_48;
  local_40 = DAT_006477b0;
  local_1c = iVar1;
  iVar3 = FUN_00497a40(param_1,param_2);
  local_28 = *(int *)(param_1 + 0x170);
  if (iVar3 < 0) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else if (iVar3 == -2) {
      if (iVar1 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = (param_2 - *(int *)(*(int *)(*(int *)(local_48[2] + -4 + iVar1 * 4) + 0x69c) + 0x24)
                ) / local_40 + iVar1;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x18) & 0x8000000) == 0x8000000) {
    param_2 = 0;
  }
  else {
    param_2 = iVar3 - *(int *)(iVar5 + 0xa8 + *(int *)(iVar5 + 0xc) * 0x68);
  }
  if (param_2 < -*(int *)(iVar5 + 0xa8)) {
    param_2 = -*(int *)(iVar5 + 0xa8);
  }
  local_38 = 0;
  if (0 < local_24) {
    local_34 = (uint *)(iVar5 + 0xec);
    local_30 = 0;
    do {
      if (local_38 < *(uint *)(iVar5 + 8)) {
        puVar7 = local_34 + -0x1f;
      }
      else {
        puVar7 = (uint *)0x0;
      }
      if (local_28 == 1) {
        uVar4 = puVar7[0xe];
      }
      else {
        uVar4 = *(uint *)(iVar5 + 0xa8);
      }
      if ((*puVar7 & 0x80) == 0) {
        uVar4 = uVar4 + param_2;
      }
      if (((int)uVar4 < 1) && (uVar4 = 0, local_28 == 1)) {
        uVar4 = puVar7[5];
      }
      if ((int)uVar4 < local_1c) {
LAB_004ac1ca:
        if ((int)uVar4 < 0) goto LAB_004ac228;
        iVar5 = *(int *)(local_48[2] + uVar4 * 4);
        iVar1 = *(int *)(iVar5 + 0x69c);
        if ((*puVar7 & 2) == 0) {
          local_44 = *(int *)(iVar1 + 0x1c) + 2;
          local_2c = (*(int *)(*(int *)(iVar5 + 0x69c) + 0x24) -
                     *(int *)(*(int *)(iVar5 + 0x69c) + 0x1c)) + -4;
        }
        else {
          FUN_004606f0(iVar5,*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x1c),2,&local_44,&local_2c);
        }
      }
      else {
        if (local_28 == 1) {
          iVar5 = puVar7[5] + *(int *)(iVar5 + 0xa8);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0xa8 + *(int *)(iVar5 + 0xc) * 0x68);
        }
        uVar4 = iVar5 + param_2;
        if ((int)uVar4 < local_1c) goto LAB_004ac1ca;
LAB_004ac228:
        local_2c = local_40;
        if (local_1c < 1) {
          if (local_28 == 1) {
            local_44 = puVar7[5] * local_40 + 2 + *(int *)(param_1 + 0xac4);
          }
          else {
            local_44 = *(int *)(param_1 + 0xac4) + 2;
          }
        }
        else {
          local_44 = *(int *)(*(int *)(*(int *)(local_48[2] + -4 + local_1c * 4) + 0x69c) + 0x24) +
                     local_30;
          if ((((int)local_38 < local_24) && (puVar7[5] != *local_34)) && (local_28 == 1)) {
            local_30 = local_30 + local_40;
          }
        }
      }
      iVar5 = local_2c;
      uVar4 = local_44;
      local_18 = *(int *)(param_1 + 0xb90);
      iStack_14 = *(int *)(param_1 + 0xb94);
      if (local_18 == 0 && iStack_14 == 0) {
        local_3c = 0xffffffff;
      }
      else {
        local_10 = puVar7[6] + param_3;
        iStack_c = puVar7[7] + param_4 + (uint)CARRY4(puVar7[6],param_3);
        lVar9 = ftol();
        uVar2 = lVar9 + *(int *)(param_1 + 0xac0);
        local_3c = (uint)uVar2;
        if ((uVar2 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < local_3c)))) {
          if (0x3fff < (longlong)uVar2) {
            local_3c = 0x3fff;
          }
        }
        else {
          local_3c = 0xffffc000;
        }
      }
      if (local_18 == 0 && iStack_14 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = puVar7[8] + puVar7[6];
        local_8 = uVar6 + param_3;
        iStack_4 = puVar7[9] + puVar7[7] + (uint)CARRY4(puVar7[8],puVar7[6]) + param_4 +
                   (uint)CARRY4(uVar6,param_3);
        lVar9 = ftol();
        uVar2 = lVar9 + *(int *)(param_1 + 0xac0);
        uVar6 = (uint)uVar2;
        if ((uVar2 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar6)))) {
          if (0x3fff < (longlong)uVar2) {
            uVar6 = 0x3fff;
          }
        }
        else {
          uVar6 = 0xffffc000;
        }
      }
      puVar7[0x15] = local_3c;
      puVar7[0x16] = uVar4;
      puVar7[0x17] = uVar6;
      puVar7[0x18] = uVar4 + iVar5;
      if (local_28 == 0) {
        bVar8 = CARRY4(param_3,puVar7[8]);
        param_3 = param_3 + puVar7[8];
        param_4 = param_4 + puVar7[9] + (uint)bVar8;
      }
      else if (local_28 == 2) {
        return 1;
      }
      local_38 = local_38 + 1;
      local_34 = local_34 + 0x1a;
      iVar5 = local_20;
    } while ((int)local_38 < local_24);
  }
  return 1;
}


