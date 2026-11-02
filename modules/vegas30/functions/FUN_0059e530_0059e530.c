/* Module: vegas30.exe
   Function: FUN_0059e530
   Address: 0059e530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059e530(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,undefined4 *param_7,int param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_20 = 0;
  uVar10 = ftol();
  iVar2 = FUN_00540df0(param_1,uVar10);
  iVar3 = param_9;
  if ((iVar2 != 0) && (param_9 != 0)) {
    _SfList_ArrayForceItemCount_12(param_5,1,0);
    iVar2 = *(int *)(param_5 + 8);
    iVar3 = FUN_005a96c0(iVar2,param_1,param_2,param_3,param_4,0,0,iVar3);
    *(undefined4 *)(iVar2 + 0x88) = 0;
    return iVar3;
  }
  if (param_8 == 0) {
    local_c = 1;
  }
  else {
    local_c = param_6;
  }
  iVar3 = local_c;
  if (DAT_0064b158 < 1) {
    if ((*(int *)(param_2 + 0x50) != 1) || (local_24 = 1, *(int *)(param_2 + 0x54) != 1)) {
      local_24 = 0;
    }
  }
  else {
    local_24 = 1;
  }
  if ((((*(int *)(param_2 + 0x1c) != 1) && (*(int *)(param_2 + 0x1c) != 2)) || (local_24 == 0)) ||
     (local_8 = 1, *(uint *)(param_2 + 0x90) < 3)) {
    local_8 = 0;
  }
  _SfList_ArrayForceItemCount_12(param_5,local_c * 2,0);
  local_34 = 0;
  local_4 = 0;
  if (0 < iVar3) {
    local_30 = 1;
    local_10 = param_7;
    do {
      uVar5 = param_3;
      uVar7 = param_4;
      if (param_8 != 0) {
        uVar5 = *local_10;
        uVar7 = local_10[1];
      }
      if (local_8 == 0) {
        if (((*(int *)(param_2 + 0x1c) == 0) && (2 < *(uint *)(param_2 + 0x90))) && (local_24 != 0))
        {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        iVar3 = *(int *)(param_5 + 4) * local_34 + *(int *)(param_5 + 8);
        local_20 = FUN_005a96c0(iVar3,param_1,param_2,uVar5,uVar7,uVar9,0,param_9);
        if (local_20 < 0) break;
        local_34 = local_34 + 1;
        local_30 = local_30 + 1;
        *(undefined4 *)(iVar3 + 0x88) = uVar9;
      }
      else {
        local_18 = 3;
        local_14 = 2;
        if (*(int *)(param_2 + 0x1c) == 1) {
          local_18 = 2;
          local_14 = 3;
        }
        iVar3 = *(int *)(param_5 + 4) * local_34 + *(int *)(param_5 + 8);
        local_20 = FUN_005a96c0(iVar3,param_1,param_2,uVar5,uVar7,local_18,0,param_9);
        if (local_20 < 0) break;
        iVar2 = local_30 * *(int *)(param_5 + 4) + *(int *)(param_5 + 8);
        local_20 = FUN_005a96c0(iVar2,param_1,param_2,uVar5,uVar7,local_14,1,param_9);
        if (local_20 < 0) break;
        iVar8 = 0;
        param_6 = 0;
        iVar4 = FUN_0057c190(0,iVar3,4);
        param_6 = param_6 + iVar4;
        iVar4 = FUN_0057c190(param_6,iVar3 + 0x18,8);
        param_6 = param_6 + iVar4;
        if (*(int **)(iVar3 + 0x20) == (int *)0x0) {
          local_2c = 0;
        }
        else {
          local_2c = **(int **)(iVar3 + 0x20);
        }
        iVar4 = FUN_0057c190(param_6,&local_2c,4);
        iVar6 = 0;
        param_6 = param_6 + iVar4;
        if (0 < local_2c) {
          do {
            FUN_005a1360(&param_6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_2c);
        }
        piVar1 = (int *)(iVar3 + 0x30);
        iVar4 = FUN_0057c190(param_6,piVar1,4);
        param_6 = param_6 + iVar4;
        if (0 < *piVar1) {
          param_7 = (undefined4 *)0x0;
          do {
            FUN_005a1270(&param_6);
            iVar8 = iVar8 + 1;
            param_7 = param_7 + 0x14;
          } while (iVar8 < *piVar1);
        }
        iVar4 = FUN_0057c190(param_6,iVar3 + 0x38,0x40);
        param_6 = param_6 + iVar4;
        iVar4 = FUN_0057c190(param_6,iVar3 + 0x78,4);
        param_6 = param_6 + iVar4;
        iVar4 = FUN_0057c190(param_6,iVar3 + 0x28,4);
        iVar8 = 0;
        param_6 = param_6 + iVar4;
        param_7 = (undefined4 *)0x0;
        iVar4 = FUN_0057c190(0,iVar2,4);
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        iVar4 = FUN_0057c190(param_7,iVar2 + 0x18,8);
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        if (*(int **)(iVar2 + 0x20) == (int *)0x0) {
          local_28 = 0;
        }
        else {
          local_28 = **(int **)(iVar2 + 0x20);
        }
        iVar4 = FUN_0057c190(param_7,&local_28,4);
        iVar6 = 0;
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        if (0 < local_28) {
          do {
            FUN_005a1360(&param_7);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_28);
        }
        piVar1 = (int *)(iVar2 + 0x30);
        iVar4 = FUN_0057c190(param_7,piVar1,4);
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        if (0 < *piVar1) {
          local_1c = 0;
          do {
            FUN_005a1270(&param_7);
            iVar8 = iVar8 + 1;
            local_1c = local_1c + 0x50;
          } while (iVar8 < *piVar1);
        }
        iVar4 = FUN_0057c190(param_7,iVar2 + 0x38,0x40);
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        iVar4 = FUN_0057c190(param_7,iVar2 + 0x78,4);
        param_7 = (undefined4 *)((int)param_7 + iVar4);
        iVar4 = FUN_0057c190(param_7,iVar2 + 0x28,4);
        if (((param_6 == (int)param_7 + iVar4) && (*(int *)(iVar3 + 0x8c) == 0)) &&
           (*(int *)(iVar2 + 0x8c) == 0)) {
          local_34 = local_34 + 1;
          local_30 = local_30 + 1;
          *(undefined4 *)(iVar3 + 0x88) = 0;
          FUN_005a8810(iVar2);
        }
        else {
          *(undefined4 *)(iVar3 + 0x88) = local_18;
          *(undefined4 *)(iVar2 + 0x88) = local_14;
          local_34 = local_34 + 2;
          local_30 = local_30 + 2;
        }
      }
      local_4 = local_4 + 1;
      local_10 = local_10 + 2;
    } while (local_4 < local_c);
  }
  _SfList_ArrayForceItemCount_12(param_5,local_34,0);
  return local_20;
}


