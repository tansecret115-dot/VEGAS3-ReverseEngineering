/* Module: mpgvout.001
   Function: FUN_100012d0
   Address: 100012d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100012d0(int *param_1)

{
  if ((*param_1 < 5) && (0 < *param_1)) {
    if (param_1[10] < 2) {
      param_1[0x140] = (int)&LAB_10001440;
      param_1[0x13f] = (int)&LAB_100013a0;
      return;
    }
    param_1[0x140] = (int)&LAB_1000172c;
    param_1[0x13f] = (int)&LAB_1000168c;
  }
  return;
}


