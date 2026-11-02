/* Module: rmbe3260.dll
   Function: FUN_6601bcf0
   Address: 6601bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bcf0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc0) != 0) {
    return 0x80040258;
  }
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return 0;
}


