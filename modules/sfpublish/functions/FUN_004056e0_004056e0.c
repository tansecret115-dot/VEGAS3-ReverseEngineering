/* Module: sfpublish.dll
   Function: FUN_004056e0
   Address: 004056e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004056e0(int param_1)

{
  if (*(short *)(param_1 + 2) == -1) {
    return param_1 + 0x10;
  }
  return param_1 + 8;
}


