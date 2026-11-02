/* Module: mpgmux.dll
   Function: FUN_1000eafd
   Address: 1000eafd
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000eafd(uint param_1)

{
  if ((0x10019bd7 < param_1) && (param_1 < 0x10019e39)) {
    FUN_1000e7ee(((int)(param_1 + 0xeffe6428) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


