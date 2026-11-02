/* Module: rmbe3260.dll
   Function: FUN_66021290
   Address: 66021290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021290(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  return 0;
}


