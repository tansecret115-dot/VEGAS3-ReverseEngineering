/* Module: mpgvout.001
   Function: FUN_10022170
   Address: 10022170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10022170(int *param_1)

{
  if ((*param_1 < 5) && (0 < *param_1)) {
    if (param_1[10] < 2) {
      param_1[0x13d] = (int)&LAB_10021cac;
      return;
    }
    param_1[0x13d] = (int)&LAB_10021ee4;
  }
  return;
}


