/* Module: sfcdi.dll
   Function: FUN_5bf0d090
   Address: 5bf0d090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d090(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0x80004003;
  }
  *(undefined4 *)(param_1 + 0x2d2) = param_2;
  return 0;
}


