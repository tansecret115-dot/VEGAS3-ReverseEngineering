/* Module: aifplug.dll
   Function: FUN_5fbd5a20
   Address: 5fbd5a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd5a20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x220);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  return 0;
}


