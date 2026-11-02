/* Module: mpgvout.004
   Function: FUN_10022514
   Address: 10022514
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10022514(int *param_1)

{
  if ((*param_1 < 5) && (0 < *param_1)) {
    if (param_1[10] < 2) {
      param_1[0x13d] = (int)&LAB_10021ff4;
      return;
    }
    param_1[0x13d] = (int)&LAB_1002225c;
  }
  return;
}


