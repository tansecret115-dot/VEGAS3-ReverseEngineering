/* Module: encn3260.dll
   Function: FUN_664c39d0
   Address: 664c39d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664c39d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(*(int **)(param_1 + 0x14));
      return iVar2 + *(int *)(param_1 + 0x18);
    }
  }
  return 0;
}


