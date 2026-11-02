/* Module: rmbe3260.dll
   Function: FUN_66011a70
   Address: 66011a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66011a70(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + -0x68) == 0) {
    return 0x80040258;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  return 0;
}


