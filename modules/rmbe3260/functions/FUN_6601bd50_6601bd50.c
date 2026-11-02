/* Module: rmbe3260.dll
   Function: FUN_6601bd50
   Address: 6601bd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bd50(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc0) != 0) {
    return 0x80040258;
  }
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return 0;
}


