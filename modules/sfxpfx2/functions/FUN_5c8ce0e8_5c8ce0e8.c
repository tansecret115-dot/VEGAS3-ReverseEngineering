/* Module: sfxpfx2.dll
   Function: FUN_5c8ce0e8
   Address: 5c8ce0e8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8ce0e8(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5c8ce17c((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


