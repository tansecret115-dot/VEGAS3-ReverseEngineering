/* Module: encn3260.dll
   Function: FUN_66493290
   Address: 66493290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66493290(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x9a) = 0;
    FUN_66490be0(*(void **)(param_1 + 4));
  }
  return 0;
}


