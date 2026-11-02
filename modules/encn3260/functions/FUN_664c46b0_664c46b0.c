/* Module: encn3260.dll
   Function: FUN_664c46b0
   Address: 664c46b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664c46b0(int *param_1)

{
  if (param_1[3] != 0) {
    return param_1[4];
  }
  if ((uint)param_1[2] < (uint)param_1[1]) {
    return (int)*(char *)(*param_1 + param_1[2]);
  }
  return -1;
}


