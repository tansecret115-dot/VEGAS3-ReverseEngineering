/* Module: pncrt.dll
   Function: FUN_780094a0
   Address: 780094a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780094a0(uint param_1)

{
  if ((0x7803f7f7 < param_1) && (param_1 < 0x7803fa59)) {
    _lock(((int)(param_1 + 0x87fc0808) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


