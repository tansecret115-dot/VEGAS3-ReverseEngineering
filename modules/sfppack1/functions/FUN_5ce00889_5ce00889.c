/* Module: sfppack1.dll
   Function: FUN_5ce00889
   Address: 5ce00889
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce00889(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5ce0091d((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


