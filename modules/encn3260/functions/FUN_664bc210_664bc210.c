/* Module: encn3260.dll
   Function: FUN_664bc210
   Address: 664bc210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bc210(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)(param_1 + 0x15) = 1;
  return 0;
}


