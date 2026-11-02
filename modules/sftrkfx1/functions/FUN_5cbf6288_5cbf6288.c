/* Module: sftrkfx1.dll
   Function: FUN_5cbf6288
   Address: 5cbf6288
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbf6288(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5cbf631c((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


