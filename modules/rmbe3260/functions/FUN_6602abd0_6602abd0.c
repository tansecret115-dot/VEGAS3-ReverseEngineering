/* Module: rmbe3260.dll
   Function: FUN_6602abd0
   Address: 6602abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602abd0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  return 0;
}


