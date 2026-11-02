/* Module: extmondrv.dll
   Function: FUN_004053f0
   Address: 004053f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004053f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00404e30(param_1);
  return;
}


