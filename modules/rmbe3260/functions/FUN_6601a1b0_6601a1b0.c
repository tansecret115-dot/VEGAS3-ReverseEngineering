/* Module: rmbe3260.dll
   Function: FUN_6601a1b0
   Address: 6601a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a1b0(int param_1,uint param_2)

{
  if (10 < param_2) {
    return 0x80070057;
  }
  *(uint *)(param_1 + 0x18) = param_2;
  return 0;
}


