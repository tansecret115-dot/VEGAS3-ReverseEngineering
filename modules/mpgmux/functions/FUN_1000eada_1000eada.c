/* Module: mpgmux.dll
   Function: FUN_1000eada
   Address: 1000eada
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000eada(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000e78d(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


