/* Module: erv23260.dll
   Function: FUN_6380baa0
   Address: 6380baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6380baa0(int param_1)

{
  if (param_1 < 1) {
    return 1;
  }
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  return param_1;
}


