/* Module: rmbe3260.dll
   Function: FUN_66024b70
   Address: 66024b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024b70(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0x80040252;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  return 0;
}


