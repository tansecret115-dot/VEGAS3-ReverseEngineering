/* Module: vegas30k.dll
   Function: FUN_010b1ce0
   Address: 010b1ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b1ce0(int *param_1)

{
  if (param_1[1] < *param_1) {
    *param_1 = param_1[1];
    return;
  }
  param_1[1] = *param_1;
  return;
}


