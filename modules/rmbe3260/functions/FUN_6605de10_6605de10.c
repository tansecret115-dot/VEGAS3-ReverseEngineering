/* Module: rmbe3260.dll
   Function: FUN_6605de10
   Address: 6605de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605de10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(undefined4 *)(param_1 + 8);
}


