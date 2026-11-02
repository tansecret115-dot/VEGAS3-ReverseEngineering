/* Module: rmme3260.dll
   Function: FUN_66251330
   Address: 66251330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66251330(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(undefined4 *)(param_1 + 8);
}


