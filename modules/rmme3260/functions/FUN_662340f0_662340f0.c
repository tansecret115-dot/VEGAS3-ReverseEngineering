/* Module: rmme3260.dll
   Function: FUN_662340f0
   Address: 662340f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662340f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


