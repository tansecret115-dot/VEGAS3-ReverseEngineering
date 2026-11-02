/* Module: extmondrv.dll
   Function: FUN_00404160
   Address: 00404160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404160(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x38);
  while (0 < iVar2) {
    iVar2 = iVar2 + -1;
    piVar1 = *(int **)((*(int **)(param_1 + 0x38))[2] + iVar2 * 4);
    FUN_00416200(*(int **)(param_1 + 0x38),iVar2,1,0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(1);
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}


