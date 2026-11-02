/* Module: stl2plg.dll
   Function: FUN_0040c530
   Address: 0040c530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c530(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0040c520();
    FUN_00417730(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0040c520();
    FUN_00417730(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


