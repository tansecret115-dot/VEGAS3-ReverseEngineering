/* Module: extmondrv.dll
   Function: FUN_00404e30
   Address: 00404e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404e30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return 0x80040209;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


