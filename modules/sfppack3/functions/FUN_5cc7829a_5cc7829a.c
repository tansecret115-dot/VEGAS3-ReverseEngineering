/* Module: sfppack3.dll
   Function: FUN_5cc7829a
   Address: 5cc7829a
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc7829a(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5cc7832e((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


