/* Module: rmbe3260.dll
   Function: FUN_66061470
   Address: 66061470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66061470(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *this;
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piStack_68;
  int *piVar6;
  int local_18 [3];
  int local_c;
  int *local_8;
  
  this = (int *)(param_1 + 8);
  local_c = 0;
  (**(code **)(*(int *)(param_1 + 8) + 0x24))();
  (**(code **)(*this + 0x1c))();
  local_8 = (int *)0x0;
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_66066da0;
    piVar1[1] = 0;
    FUN_6605c7f0(piVar1 + 2,10);
    FUN_6605c7f0(piVar1 + 9,10);
    FUN_6605c7f0(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_66066d60;
  }
  (**(code **)(*piVar1 + 4))();
  FUN_660349d0(this,local_18);
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_6605c060(puVar2);
  }
  (**(code **)(*local_8 + 4))();
  (**(code **)(*local_8 + 0x10))();
  (**(code **)(*piVar1 + 0x2c))();
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
    local_8 = (int *)0x0;
  }
  FUN_66034a30((int)this);
  (**(code **)(*piVar1 + 0xc))();
  uVar3 = FUN_660348d0((int)this);
  if (uVar3 != 0) {
    param_2 = 0;
    param_3 = operator_new(uVar3);
    if (param_3 == (undefined4 *)0x0) {
      local_c = -0x7ff8fff2;
    }
    if (-1 < local_c) {
      piStack_68 = (int *)0x660615ae;
      local_c = FUN_660348e0(this,param_3,uVar3,&param_2);
      if (-1 < local_c) {
        puVar2 = operator_new(0x28);
        if (puVar2 == (undefined4 *)0x0) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = (int *)FUN_6605c060(puVar2);
        }
        (**(code **)(*local_8 + 4))();
        piStack_68 = local_8;
        (**(code **)(*local_8 + 0x10))();
        (**(code **)(*piVar1 + 0x1c))(piVar1,s_RM_MEDIA_PROP_TYPE_SPECIFIC_DATA_66074f70,local_8);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))();
          local_8 = (int *)0x0;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      operator_delete(param_3);
    }
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    local_c = (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (-1 < local_c) {
    local_8 = (int *)0x0;
    piStack_68 = (int *)0x66061656;
    local_c = (**(code **)(*piVar1 + 0x30))();
    if (-1 < local_c) {
      pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))();
      FUN_6605b970(local_18,pcVar4);
      iVar5 = *this;
      FUN_6605b670(&piStack_68,local_18);
      local_c = (**(code **)(iVar5 + 0x30))();
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))();
      local_8 = (int *)0x0;
    }
    if (-1 < local_c) {
      local_8 = (int *)0x0;
      piStack_68 = (int *)0x660616b8;
      iVar5 = (**(code **)(*piVar1 + 0x20))();
      if (-1 < iVar5) {
        piVar6 = local_8;
        (**(code **)(*local_8 + 0x1c))();
        piStack_68 = (int *)0x660616cf;
        uVar3 = (**(code **)(*local_8 + 0x18))();
        local_c = FUN_66034830(this,uVar3,piVar6);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
        local_8 = (int *)0x0;
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  FUN_6605b770(local_18);
  return local_c;
}


