/* Module: rmme3260.dll
   Function: FUN_66212300
   Address: 66212300
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66212300(int param_1,undefined4 param_2,undefined4 *param_3)

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
    *piVar1 = (int)&PTR_LAB_6626b730;
    piVar1[1] = 0;
    FUN_66252680(piVar1 + 2,10);
    FUN_66252680(piVar1 + 9,10);
    FUN_66252680(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_6626b6f0;
  }
  (**(code **)(*piVar1 + 4))();
  FUN_66218240(this,local_18);
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_662522d0(puVar2);
  }
  (**(code **)(*local_8 + 4))();
  (**(code **)(*local_8 + 0x10))();
  (**(code **)(*piVar1 + 0x2c))();
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
    local_8 = (int *)0x0;
  }
  FUN_662182a0((int)this);
  (**(code **)(*piVar1 + 0xc))();
  uVar3 = FUN_66218140((int)this);
  if (uVar3 != 0) {
    param_2 = 0;
    param_3 = operator_new(uVar3);
    if (param_3 == (undefined4 *)0x0) {
      local_c = -0x7ff8fff2;
    }
    if (-1 < local_c) {
      piStack_68 = (int *)0x6621243e;
      local_c = FUN_66218150(this,param_3,uVar3,&param_2);
      if (-1 < local_c) {
        puVar2 = operator_new(0x28);
        if (puVar2 == (undefined4 *)0x0) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = (int *)FUN_662522d0(puVar2);
        }
        (**(code **)(*local_8 + 4))();
        piStack_68 = local_8;
        (**(code **)(*local_8 + 0x10))();
        (**(code **)(*piVar1 + 0x1c))(piVar1,s_RM_MEDIA_PROP_TYPE_SPECIFIC_DATA_6626f588,local_8);
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
    piStack_68 = (int *)0x662124e6;
    local_c = (**(code **)(*piVar1 + 0x30))();
    if (-1 < local_c) {
      pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))();
      FUN_66250410(local_18,pcVar4);
      iVar5 = *this;
      FUN_66250110(&piStack_68,local_18);
      local_c = (**(code **)(iVar5 + 0x30))();
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))();
      local_8 = (int *)0x0;
    }
    if (-1 < local_c) {
      local_8 = (int *)0x0;
      piStack_68 = (int *)0x66212548;
      iVar5 = (**(code **)(*piVar1 + 0x20))();
      if (-1 < iVar5) {
        piVar6 = local_8;
        (**(code **)(*local_8 + 0x1c))();
        piStack_68 = (int *)0x6621255f;
        uVar3 = (**(code **)(*local_8 + 0x18))();
        local_c = FUN_662180a0(this,uVar3,piVar6);
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
  FUN_66250210(local_18);
  return local_c;
}


