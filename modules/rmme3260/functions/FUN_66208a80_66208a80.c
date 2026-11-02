/* Module: rmme3260.dll
   Function: FUN_66208a80
   Address: 66208a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66208a80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c;
  int local_8;
  
  piVar3 = param_2;
  iVar2 = param_1;
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    local_8 = -0x7fffbffd;
  }
  if ((-1 < local_8) && (*(int *)(param_1 + 0x4c) == 0)) {
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 == (int *)0x0) {
      local_8 = -0x7ffbfff9;
    }
    else {
      local_8 = (**(code **)(*piVar1 + 0xc))(piVar1,&DAT_6626a628,param_1 + 0x4c);
    }
  }
  if ((-1 < local_8) && (*(int *)(iVar2 + 0x4c) != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
    local_c = 0;
    param_1 = 0;
    param_2 = (int *)0x0;
    iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,&param_1,&local_c);
    while (iVar4 == 0) {
      (**(code **)(**(int **)(iVar2 + 0x4c) + 0xc))(*(int **)(iVar2 + 0x4c),param_1,local_c);
      iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,&param_1,&local_c);
    }
    iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,&param_1,&param_2);
    while ((iVar4 == 0 && (param_2 != (int *)0x0))) {
      (**(code **)(**(int **)(iVar2 + 0x4c) + 0x1c))(*(int **)(iVar2 + 0x4c),param_1,param_2);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      iVar4 = (**(code **)(*piVar3 + 0x28))(piVar3,&param_1,&param_2);
    }
    iVar4 = (**(code **)(*piVar3 + 0x34))(piVar3,&param_1,&param_2);
    while ((iVar4 == 0 && (param_2 != (int *)0x0))) {
      (**(code **)(**(int **)(iVar2 + 0x4c) + 0x2c))(*(int **)(iVar2 + 0x4c),param_1,param_2);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,&param_1,&param_2);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return local_8;
}


