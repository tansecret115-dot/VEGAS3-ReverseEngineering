/* Module: stl2plg.dll
   Function: FUN_004096e0
   Address: 004096e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004096e0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004096d0();
    FUN_00417730(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004096d0();
    FUN_00417730(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


