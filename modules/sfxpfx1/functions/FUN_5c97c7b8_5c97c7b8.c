/* Module: sfxpfx1.dll
   Function: FUN_5c97c7b8
   Address: 5c97c7b8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c97c7b8(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5c97c84c((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


