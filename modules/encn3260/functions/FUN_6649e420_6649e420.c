/* Module: encn3260.dll
   Function: FUN_6649e420
   Address: 6649e420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e420(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


