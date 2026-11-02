/* Module: vegas30k.dll
   Function: FUN_011bac90
   Address: 011bac90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bac90(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  int *local_4;
  
  iVar4 = 0;
  if (param_3 != (int *)0x0) {
    param_3 = (int *)0x0;
    local_4 = (int *)0x0;
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x114);
        iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,&param_3);
        goto LAB_011bad8a;
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x108);
      iVar2 = (**(code **)(*piVar1 + 100))(piVar1,&param_3);
LAB_011bad8a:
      if (iVar2 < 0) {
        return 1;
      }
    }
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
      if (iVar2 != 0) goto LAB_011bade5;
    }
    iVar3 = (**(code **)(*param_3 + 0xc))(param_3,1,&local_4,0);
    iVar4 = param_2;
    if (iVar3 == 0) {
      (**(code **)(*local_4 + 0x1c))(local_4,param_4,param_5);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      iVar4 = param_2 + 1;
    }
    goto LAB_011bade5;
  }
  param_3 = (int *)0x0;
  local_4 = (int *)0x0;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x114);
      iVar2 = (**(code **)(*piVar1 + 100))(piVar1,&param_3);
      goto LAB_011bace2;
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x108);
    iVar2 = (**(code **)(*piVar1 + 0x68))(piVar1,&param_3);
LAB_011bace2:
    if (iVar2 < 0) {
      return 1;
    }
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
    if (iVar2 != 0) goto LAB_011bade5;
  }
  iVar3 = (**(code **)(*param_3 + 0xc))(param_3,1,&local_4,0);
  iVar4 = param_2;
  if (iVar3 == 0) {
    iVar4 = param_2 + 1;
    (**(code **)(*local_4 + 0x1c))(local_4,param_4,param_5);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
LAB_011bade5:
  (**(code **)(*param_3 + 8))(param_3);
  if (iVar4 == 0) {
    return 1;
  }
  return iVar2;
}


