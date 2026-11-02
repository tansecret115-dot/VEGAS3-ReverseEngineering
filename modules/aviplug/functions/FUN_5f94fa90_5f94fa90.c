/* Module: aviplug.dll
   Function: FUN_5f94fa90
   Address: 5f94fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94fa90(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5f94fa50((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


