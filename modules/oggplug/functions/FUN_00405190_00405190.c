/* Module: oggplug.dll
   Function: FUN_00405190
   Address: 00405190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405190(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  return 0;
}


