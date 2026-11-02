/* Module: encn3260.dll
   Function: FUN_664a4d90
   Address: 664a4d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a4d90(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_664a4bf0(*(int *)(param_1 + 4));
  }
  return 0;
}


