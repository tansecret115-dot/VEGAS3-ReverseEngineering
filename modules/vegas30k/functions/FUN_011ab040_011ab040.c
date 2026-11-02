/* Module: vegas30k.dll
   Function: FUN_011ab040
   Address: 011ab040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ab040(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  uVar1 = 0x80004002;
  piVar3 = param_2;
  piVar4 = &DAT_011d9a40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (*(int *)(param_1 + 0x664) != 0)) {
    *param_3 = *(int *)(param_1 + 0x664);
    (**(code **)(**(int **)(param_1 + 0x664) + 4))(*(int **)(param_1 + 0x664));
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_2;
  piVar4 = &DAT_011d9a50;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (*(int *)(param_1 + 0x668) != 0)) {
    *param_3 = *(int *)(param_1 + 0x668);
    (**(code **)(**(int **)(param_1 + 0x668) + 4))(*(int **)(param_1 + 0x668));
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_2;
  piVar4 = &DAT_011d9a60;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (*(int *)(param_1 + 0x66c) != 0)) {
    *param_3 = *(int *)(param_1 + 0x66c);
    (**(code **)(**(int **)(param_1 + 0x66c) + 4))(*(int **)(param_1 + 0x66c));
    return 0;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2,param_3);
  }
  return uVar1;
}


