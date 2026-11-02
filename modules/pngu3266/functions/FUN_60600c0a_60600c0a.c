/* Module: pngu3266.dll
   Function: FUN_60600c0a
   Address: 60600c0a
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_60600c0a(int *param_1)

{
  *param_1 = param_1[1];
  if (param_1[1] != 0) {
    FUN_60619c50((void *)param_1[2],param_1 + 1,param_1 + 4,param_1 + 3);
  }
  return param_1;
}


