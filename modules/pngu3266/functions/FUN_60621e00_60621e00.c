/* Module: pngu3266.dll
   Function: FUN_60621e00
   Address: 60621e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_60621e00(int param_1)

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


