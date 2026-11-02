/* Module: sfppack2.dll
   Function: FUN_5cd40366
   Address: 5cd40366
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd40366(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5cd403fa((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


