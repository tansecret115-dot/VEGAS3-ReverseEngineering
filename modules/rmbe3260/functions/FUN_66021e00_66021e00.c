/* Module: rmbe3260.dll
   Function: FUN_66021e00
   Address: 66021e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021e00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    return 0x80040258;
  }
  if (*(int *)(param_1 + 0x192) == 0) {
    return 0x80004005;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x192) + 0x10) = param_2;
  return 0;
}


