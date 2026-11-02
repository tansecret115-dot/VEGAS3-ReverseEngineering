/* Module: rmme3260.dll
   Function: FUN_6623a930
   Address: 6623a930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623a930(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_6623a820(*(int *)(param_1 + 4));
  }
  return 0;
}


