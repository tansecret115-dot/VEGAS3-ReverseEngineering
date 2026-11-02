/* Module: mpgmux.dll
   Function: FUN_1000eb2c
   Address: 1000eb2c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000eb2c(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000e7ee(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


