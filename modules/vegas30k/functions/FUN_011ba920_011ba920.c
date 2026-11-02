/* Module: vegas30k.dll
   Function: FUN_011ba920
   Address: 011ba920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ba920(int param_1,int *param_2,int *param_3)

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
  piVar4 = &DAT_011d9c70;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (*(int *)(param_1 + 8) != 0)) {
    *param_3 = *(int *)(param_1 + 8);
    (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
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
  if (((bVar5) && (*(int *)(param_1 + 0xc) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x114), iVar2 != 0)) {
    *param_3 = iVar2;
    piVar3 = *(int **)(*(int *)(param_1 + 0xc) + 0x114);
    (**(code **)(*piVar3 + 4))(piVar3);
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
  if (((bVar5) && (*(int *)(param_1 + 0x10) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x108), iVar2 != 0)) {
    *param_3 = iVar2;
    piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x108);
    (**(code **)(*piVar3 + 4))(piVar3);
    return 0;
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2,param_3);
  }
  return uVar1;
}


