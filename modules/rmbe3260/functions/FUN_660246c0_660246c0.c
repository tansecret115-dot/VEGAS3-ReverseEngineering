/* Module: rmbe3260.dll
   Function: FUN_660246c0
   Address: 660246c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660246c0(int param_1,uint param_2)

{
  if (param_2 < 9) {
    *(uint *)(param_1 + 0x26) = param_2;
    return 0;
  }
  return 0x80070057;
}


