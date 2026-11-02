/* Module: mpgmux.dll
   Function: FUN_1000eaab
   Address: 1000eaab
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000eaab(uint param_1)

{
  if ((0x10019bd7 < param_1) && (param_1 < 0x10019e39)) {
    FUN_1000e78d(((int)(param_1 + 0xeffe6428) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


