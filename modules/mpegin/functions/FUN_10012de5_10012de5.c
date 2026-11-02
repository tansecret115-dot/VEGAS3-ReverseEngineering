/* Module: mpegin.dll
   Function: FUN_10012de5
   Address: 10012de5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10012de5(uint param_1)

{
  if ((0x1001b88f < param_1) && (param_1 < 0x1001baf1)) {
    FUN_10010ee5(((int)(param_1 + 0xeffe4770) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


