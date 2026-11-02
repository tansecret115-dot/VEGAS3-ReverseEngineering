/* Module: mpgvout.003
   Function: FUN_1002204c
   Address: 1002204c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1002204c(int *param_1)

{
  if ((*param_1 < 5) && (0 < *param_1)) {
    if (param_1[10] < 2) {
      param_1[0x13d] = (int)&LAB_10021b2c;
      return;
    }
    param_1[0x13d] = (int)&LAB_10021d94;
  }
  return;
}


