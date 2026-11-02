/* Module: rmme3260.dll
   Function: FUN_662349e0
   Address: 662349e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662349e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + 8);
  (**(code **)(*piVar1 + 0x10))(piVar1,param_1);
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


