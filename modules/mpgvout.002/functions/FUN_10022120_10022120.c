/* Module: mpgvout.002
   Function: FUN_10022120
   Address: 10022120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10022120(int *param_1)

{
  if ((*param_1 < 5) && (0 < *param_1)) {
    if (param_1[10] < 2) {
      param_1[0x13d] = (int)&LAB_10021c60;
      return;
    }
    param_1[0x13d] = (int)&LAB_10021e98;
  }
  return;
}


