/* Module: encn3260.dll
   Function: FUN_6648d700
   Address: 6648d700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6648d700(void *this,int *param_1,uint param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_18 [2];
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  pvVar1 = (void *)FUN_6648dfd0(this,param_2);
  if (pvVar1 == (void *)0x0) {
    return -0x7fffbffb;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
  if (*(int *)((int)this + 0x60) != 0) {
    if (*(int *)((int)this + 100) == 0) {
      puVar3 = operator_new(0x14);
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_664ba900(puVar3);
      }
      *(undefined4 *)((int)this + 100) = uVar4;
      (**(code **)(**(int **)((int)this + 0x60) + 0x10))(this);
    }
    puVar3 = operator_new(0x34);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      piVar5 = FUN_66495f50(pvVar1,local_18);
      local_10 = *piVar5;
      local_c = piVar5[1];
      uVar4 = (**(code **)(*piVar2 + 0x18))(piVar2);
      uVar6 = (**(code **)(*param_1 + 0x14))(param_1);
      puVar3[8] = uVar6;
      *(undefined2 *)(puVar3 + 1) = param_3;
      puVar3[9] = uVar4;
      *(undefined2 *)((int)puVar3 + 6) = param_4;
      puVar3[3] = param_5;
      puVar3[10] = local_10;
      puVar3[6] = 0;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = &PTR_FUN_664de298;
      puVar3[7] = 0;
      puVar3[0xb] = local_c;
      puVar3[0xc] = 0;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    pvVar1 = local_8;
    *(undefined4 *)((int)local_8 + 0x50) = 1;
    FUN_664baa70(*(void **)((int)local_8 + 100),puVar3);
    (**(code **)(**(int **)((int)pvVar1 + 0x60) + 0xc))(param_1);
    return 0;
  }
  piVar5 = operator_new(0x34);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar7 = FUN_66495f50(pvVar1,local_18);
    local_10 = *piVar7;
    local_c = piVar7[1];
    iVar8 = (**(code **)(*piVar2 + 0x18))(piVar2);
    iVar9 = (**(code **)(*param_1 + 0x14))(param_1);
    *(undefined2 *)(piVar5 + 1) = param_3;
    *(undefined2 *)((int)piVar5 + 6) = param_4;
    piVar5[8] = iVar9;
    piVar5[6] = 0;
    piVar5[2] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    *piVar5 = (int)&PTR_FUN_664de298;
    piVar5[9] = iVar8;
    piVar5[3] = param_5;
    piVar5[7] = (int)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    piVar5[10] = local_10;
    piVar5[0xb] = local_c;
    piVar5[0xc] = 0;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  *(undefined4 *)((int)local_8 + 0x50) = 1;
  iVar8 = FUN_66494cd0(pvVar1,piVar5);
  return iVar8;
}


