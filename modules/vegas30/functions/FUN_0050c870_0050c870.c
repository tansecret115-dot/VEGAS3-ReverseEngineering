/* Module: vegas30.exe
   Function: FUN_0050c870
   Address: 0050c870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0050c870(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *local_a0;
  undefined8 local_9c;
  uint *local_94;
  uint *local_90;
  int iStack_8c;
  undefined1 local_88 [4];
  uint local_84 [6];
  undefined4 local_6c [27];
  
  if (param_1 == 0) {
    return (uint *)0xffffffff;
  }
  if (param_4 < 0) {
    param_4 = *(int *)(param_1 + 0x9c);
  }
  local_a0 = (undefined4 *)FUN_00522a00(param_4);
  if (local_a0 == (undefined4 *)0x0) {
    FUN_005b83b0(DAT_0064b138,1);
    if (param_4 == 0) {
      _SfList_CreateExZ_32(&local_a0,0x84,0xffffffff,0xffffffff,0x40000004,0,0,0);
      iVar2 = 0;
    }
    else {
      _SfList_CreateExZ_32(&local_a0,0x8c,0xffffffff,0xffffffff,0x40000004,0,0,0);
      iVar2 = param_4;
    }
    _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xa4),iVar2,&local_a0,1);
    FUN_005b84d0(DAT_0064b138,1);
    if (local_a0 != (undefined4 *)0x0) goto LAB_0050c939;
    local_9c = (double)((ulonglong)local_9c._4_4_ << 0x20);
  }
  else {
LAB_0050c939:
    local_9c = (double)CONCAT44(local_9c._4_4_,*local_a0);
  }
  local_90 = (uint *)FUN_0050c410(local_a0,local_88,param_2,param_3);
  if (-1 < (int)local_90) {
    return local_90;
  }
  iVar2 = FUN_0050bc90(local_a0,param_2,param_3);
  puVar3 = (uint *)FUN_0050bce0(local_a0,param_2,param_3);
  local_94 = puVar3;
  FUN_005b83b0(DAT_0064b138,1);
  puVar9 = local_94;
  if (iVar2 < 0) {
    if ((int)puVar3 < 0) {
      local_90 = (uint *)0x0;
      if (param_4 == 0) {
        puVar9 = local_84;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_84[0] = 0x7c;
        puVar8 = (undefined4 *)(param_1 + 0x24);
        puVar10 = local_6c;
        for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        local_84[1] = param_2;
        local_84[2] = param_3;
        _SfList_InsertList_16(local_a0,0xffffffff,local_84,1);
        *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
      }
      else if (param_4 == 1) {
        puVar9 = local_84;
        for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_84[0] = 0x84;
        FUN_0050c7d0(local_84);
        local_84[1] = param_2;
        local_84[2] = param_3;
        _SfList_InsertList_16(local_a0,0xffffffff,local_84,1);
      }
      else if (param_4 == 2) {
        puVar9 = local_84;
        for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_84[0] = 0x84;
        FUN_0050c820(local_84);
        local_84[1] = param_2;
        local_84[2] = param_3;
        _SfList_InsertList_16(local_a0,0xffffffff,local_84,1);
      }
      goto LAB_0050ccd5;
    }
LAB_0050cc74:
    if (-1 < iVar2) goto LAB_0050ccd5;
    puVar9 = (uint *)local_a0[2];
    local_94 = calloc(1,*puVar9 + 8);
    if (local_94 == (uint *)0x0) goto LAB_0050ccd5;
    uVar7 = *puVar9;
    puVar3 = local_94;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar3 = (char)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    local_94[1] = param_2;
    local_94[2] = param_3;
    _SfList_InsertList_16(local_a0,0,local_94,1);
    local_90 = (uint *)0x0;
  }
  else {
    if (0 < (int)puVar3) {
      iVar5 = local_a0[2];
      iVar2 = local_a0[1] * iVar2;
      iVar4 = local_a0[1] * (int)puVar3 + iVar5;
      iVar1 = *(int *)(iVar2 + 8 + iVar5);
      iVar2 = iVar2 + iVar5;
      iVar5 = *(uint *)(iVar4 + 4) - *(uint *)(iVar2 + 4);
      iStack_8c = (*(int *)(iVar4 + 8) - iVar1) -
                  (uint)(*(uint *)(iVar4 + 4) < *(uint *)(iVar2 + 4));
      if (iVar5 == 0 && iStack_8c == 0) {
        local_9c = 0.0;
      }
      else {
        local_9c = (double)CONCAT44((param_3 - iVar1) - (uint)(param_2 < *(uint *)(iVar2 + 4)),
                                    param_2 - *(uint *)(iVar2 + 4));
        local_9c = (double)(longlong)local_9c / (double)CONCAT44(iStack_8c,iVar5);
        switch(*(undefined4 *)(iVar2 + 0xc)) {
        case 1:
          if (_DAT_006106d0 <= local_9c) {
            local_9c = _DAT_006106d0;
          }
          else {
            local_9c = _DAT_00610fd8;
          }
          break;
        case 2:
          local_9c = local_9c * local_9c;
          break;
        case 3:
          local_9c = _DAT_006106d0 - (_DAT_006106d0 - local_9c) * (_DAT_006106d0 - local_9c);
          break;
        case 4:
          local_9c = (_DAT_00610f30 - (local_9c + local_9c)) * local_9c * local_9c;
        }
      }
      local_90 = local_94;
      if (param_4 == 0) {
        local_84[0] = 0x7c;
        FUN_0050b080(local_84,local_a0,0,iVar2,iVar4,param_2,param_3,(uint *)local_9c,local_9c._4_4_
                    );
        _SfList_InsertList_16(local_a0,puVar9,local_84,1);
      }
      else if ((0 < param_4) && (param_4 < 3)) {
        local_84[0] = 0x84;
        FUN_0050b080(local_84,local_a0,param_4,iVar2,iVar4,param_2,param_3,(uint *)local_9c,
                     local_9c._4_4_);
        _SfList_InsertList_16(local_a0,puVar9,local_84,1);
      }
      goto LAB_0050ccd5;
    }
    if (-1 < (int)puVar3) goto LAB_0050cc74;
    iVar2 = ((int)(uint *)local_9c + -1) * local_a0[1];
    puVar9 = (uint *)(iVar2 + local_a0[2]);
    local_94 = calloc(1,*(int *)(iVar2 + local_a0[2]) + 8);
    if (local_94 == (uint *)0x0) goto LAB_0050ccd5;
    uVar7 = *puVar9;
    puVar3 = local_94;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar3 = (char)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    puVar9 = (uint *)local_9c;
    local_94[1] = param_2;
    local_94[2] = param_3;
    _SfList_InsertList_16(local_a0,(uint *)local_9c,local_94,1);
    local_90 = puVar9;
  }
  free(local_94);
LAB_0050ccd5:
  FUN_005b84d0(DAT_0064b138,1);
  FUN_00453250(DAT_00647630,0);
  return local_90;
}


