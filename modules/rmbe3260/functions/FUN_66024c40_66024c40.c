/* Module: rmbe3260.dll
   Function: FUN_66024c40
   Address: 66024c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024c40(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0x80040252;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return 0;
}


