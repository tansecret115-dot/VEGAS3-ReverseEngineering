/* Module: mpegin.dll
   Function: FUN_10012e14
   Address: 10012e14
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10012e14(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10010ee5(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


