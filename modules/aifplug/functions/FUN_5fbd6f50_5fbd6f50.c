/* Module: aifplug.dll
   Function: FUN_5fbd6f50
   Address: 5fbd6f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd6f50(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 == (int *)0x0) {
    return -0x7fff0001;
  }
  puVar1 = (undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*piVar2 + 0x68))(piVar2,*(int *)(param_1 + 0x30));
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x60))(*(int **)(param_1 + 0x28),puVar1);
  if (iVar3 < 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x68))(*(int **)(param_1 + 0x28),*puVar1);
    *puVar1 = 0;
    return iVar3;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar4 = FUN_5fbd7210(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return iVar3;
}


