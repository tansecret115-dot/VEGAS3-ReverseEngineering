/* Module: rmto3260.dll
   Function: FUN_662c8980
   Address: 662c8980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c8980(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 local_38 [6];
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_1c = (int *)0x0;
  FUN_662f2c60(local_38);
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  iVar1 = FUN_662f56a0(local_38,1,s_RMACreateRM1Merge_6630a2c8,(int)&local_8);
  if ((((-1 < iVar1) && (iVar1 = (**(code **)*local_8)(local_8,&DAT_66306a98,&local_c), -1 < iVar1))
      && (iVar1 = (**(code **)*local_8)(local_8,&DAT_66306988,&local_1c), -1 < iVar1)) &&
     ((*(int *)(param_1 + 0x28) != 0 && (local_1c != (int *)0x0)))) {
    iVar1 = (**(code **)(*local_1c + 0xc))(local_1c,*(int *)(param_1 + 0x28));
  }
  if ((-1 < iVar1) && (iVar2 = (**(code **)*local_8)(local_8,&DAT_66306ae8,&local_10), -1 < iVar2))
  {
    puVar3 = operator_new(0x30);
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = FUN_662dde00(puVar3);
    }
    piVar4 = local_18;
    (**(code **)(*local_18 + 4))(local_18);
    (**(code **)(*piVar4 + 0x18))(piVar4,param_1 + 0x94,0x32,100,0);
    (**(code **)(*local_10 + 0xc))(local_10,0,piVar4);
  }
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    uVar5 = (ushort)*(undefined4 *)(iVar2 + 0x10);
  }
  local_20 = *(int *)(iVar2 + 4);
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      if (iVar1 < 0) break;
      piVar4 = (int *)FUN_662ed930(&local_20);
      puVar3 = (undefined4 *)*piVar4;
      if (((puVar3 != (undefined4 *)0x0) && (*(int *)((int)puVar3 + 0xe) == 0)) &&
         (*(int *)((int)puVar3 + 10) != 0)) {
        iVar1 = (**(code **)(*local_c + 0xc))(local_c,*puVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (-1 < iVar1) {
    local_14 = (int *)0x0;
    iVar2 = (**(code **)*local_c)(local_c,&DAT_66306a78,&local_14);
    if (-1 < iVar2) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0x10);
      }
      if (iVar2 < 2) {
        if (*(int *)(param_1 + 0x30) != 0) {
          iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x88);
      }
      iVar1 = (**(code **)(*local_14 + 0xc))(local_14,iVar1);
      if ((-1 < iVar1) && (*(int *)(param_1 + 0x7c) != 0)) {
        iVar1 = (**(code **)(*local_14 + 0x10))(local_14,*(int *)(param_1 + 0x7c));
      }
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))(local_14);
      }
    }
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_c + 0x10))(local_c,*(undefined4 *)(param_1 + 0x20));
  }
  piVar4 = local_18;
  if (local_18 != (int *)0x0) {
    iVar2 = (**(code **)(*local_10 + 0x10))(local_10,0,local_18);
    (**(code **)(*piVar4 + 8))(piVar4);
    if (-1 < iVar1) {
      iVar1 = iVar2;
    }
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
    local_1c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  FUN_662f2e40(local_38);
  FUN_662f2c80(local_38);
  return iVar1;
}


