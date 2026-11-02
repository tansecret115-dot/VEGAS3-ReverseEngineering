/* Module: vegas30k.dll
   Function: FUN_011c4f20
   Address: 011c4f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c4f20(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x118) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x118);
  }
  iVar2 = 0;
  if (iVar3 < 1) {
    return 1;
  }
  do {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x118) + 8) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x68))(piVar1,param_2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar3);
  return 1;
}


