/* Module: rmbe3260.dll
   Function: FUN_6600a370
   Address: 6600a370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600a370(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x118);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))(piVar1,*(undefined4 *)(param_1 + 0x10c));
  }
  return 1;
}


