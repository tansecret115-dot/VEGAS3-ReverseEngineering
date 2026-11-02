/* Module: rmbe3260.dll
   Function: FUN_66021e40
   Address: 66021e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021e40(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x192) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x192) + 0x18);
    return 0;
  }
  return 0x80004005;
}


