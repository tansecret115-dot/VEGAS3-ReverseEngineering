/* Module: vidcap30.exe
   Function: FUN_00517ee0
   Address: 00517ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00517ee0(int *param_1)

{
  if (param_1[1] < *param_1) {
    *param_1 = param_1[1];
    return;
  }
  param_1[1] = *param_1;
  return;
}


