/* Module: rmbe3260.dll
   Function: FUN_66021dc0
   Address: 66021dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021dc0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x192) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x192) + 0x10);
    return 0;
  }
  return 0x80004005;
}


