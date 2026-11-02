/* Module: rmbe3260.dll
   Function: FUN_660255f0
   Address: 660255f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660255f0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 0x80004003;
  }
  *(int *)(param_1 + 0x14) = param_2;
  return 0;
}


