/* Module: sdpp3260.dll
   Function: FUN_100070c0
   Address: 100070c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_100070c0(int *param_1)

{
  if (param_1[3] != 0) {
    return param_1[4];
  }
  if ((uint)param_1[2] < (uint)param_1[1]) {
    return (int)*(char *)(*param_1 + param_1[2]);
  }
  return -1;
}


