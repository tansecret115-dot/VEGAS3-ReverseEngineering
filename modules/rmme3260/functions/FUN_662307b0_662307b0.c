/* Module: rmme3260.dll
   Function: FUN_662307b0
   Address: 662307b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662307b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  if (*(int *)(param_1 + 0x81) == 0) {
    pvVar3 = operator_new(0x1d);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else if (param_1 == 0) {
      piVar4 = (int *)FUN_6622f0a0(pvVar3,0,1);
    }
    else {
      piVar4 = (int *)FUN_6622f0a0(pvVar3,param_1 + 8,1);
    }
    *(int **)(param_1 + 0x81) = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    pvVar3 = operator_new(0x1d);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else if (param_1 == 0) {
      piVar4 = (int *)FUN_6622f0a0(pvVar3,0,1);
    }
    else {
      piVar4 = (int *)FUN_6622f0a0(pvVar3,param_1 + 8,1);
    }
    *(int **)(param_1 + 0x85) = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)**(undefined4 **)(param_1 + 0x14))
            (*(undefined4 **)(param_1 + 0x14),&DAT_6626a708,param_1 + 0x8d);
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 == (int *)0x0) {
    return 0x80004005;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  iVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,puVar1);
  if (iVar5 != 0) {
    return 0x80004005;
  }
  puVar2 = (undefined4 *)(param_1 + 0x20);
  iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18),puVar2);
  if (iVar5 != 0) {
    return 0x80004005;
  }
  pvVar3 = operator_new(0x14);
  if (pvVar3 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_66232260(pvVar3,param_1,1);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  pvVar3 = operator_new(0x14);
  if (pvVar3 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_66232260(pvVar3,param_1,0);
  }
  piVar4 = *(int **)(param_1 + 0x24);
  *(int *)(param_1 + 0x28) = iVar5;
  if ((piVar4 == (int *)0x0) || (iVar5 == 0)) {
    return 0x8007000e;
  }
  (**(code **)(*piVar4 + 4))(piVar4);
  (**(code **)(**(int **)(param_1 + 0x28) + 4))(*(int **)(param_1 + 0x28));
  iVar5 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,*(undefined4 *)(param_1 + 0x24));
  if ((iVar5 != 0) ||
     (((iVar5 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,*(undefined4 *)(param_1 + 0x28))
       , iVar5 != 0 ||
       (iVar5 = (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,0,0), iVar5 != 0)) ||
      (iVar5 = (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2,0,0), iVar5 != 0)))) {
    return 0x80004005;
  }
  piVar4 = operator_new(0x1a);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_66254da0(piVar4,0x200,1);
    *piVar4 = (int)&PTR_LAB_6626be88;
  }
  *(int **)(param_1 + 0x38) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  iVar5 = (**(code **)(*piVar4 + 8))();
  if (iVar5 == 0) {
    return 0x8007000e;
  }
  FUN_66254f90(*(void **)(param_1 + 0x38),0x7fa6);
  piVar4 = operator_new(0x1a);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_66254da0(piVar4,0x200,1);
    *piVar4 = (int)&PTR_LAB_6626be88;
  }
  *(int **)(param_1 + 0x3c) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  iVar5 = (**(code **)(*piVar4 + 8))();
  if (iVar5 == 0) {
    return 0x8007000e;
  }
  FUN_66254f90(*(void **)(param_1 + 0x3c),0x7fa6);
  piVar4 = operator_new(0x1a);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_66254da0(piVar4,0x200,1);
    *piVar4 = (int)&PTR_LAB_6626be88;
  }
  *(int **)(param_1 + 0x40) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  iVar5 = (**(code **)(*piVar4 + 8))();
  if (iVar5 == 0) {
    return 0x8007000e;
  }
  FUN_66254f90(*(void **)(param_1 + 0x40),0x341a);
  piVar4 = operator_new(0x1a);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_66254da0(piVar4,0x200,1);
    *piVar4 = (int)&PTR_LAB_6626be88;
  }
  *(int **)(param_1 + 0x44) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  iVar5 = (**(code **)(*piVar4 + 8))();
  if (iVar5 == 0) {
    return 0x8007000e;
  }
  FUN_66254f90(*(void **)(param_1 + 0x44),0x7fa6);
  pvVar3 = operator_new(0x7fa6);
  *(void **)(param_1 + 100) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0x8007000e;
  }
  pvVar3 = operator_new(0x3fd2);
  *(void **)(param_1 + 0x5c) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0x8007000e;
  }
  pvVar3 = operator_new(0x7fa6);
  *(void **)(param_1 + 0x60) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0x8007000e;
  }
  FUN_66231fd0(param_1);
  return 0;
}


