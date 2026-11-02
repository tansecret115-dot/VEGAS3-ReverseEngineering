/* Module: pncrt.dll
   Function: FUN_78009510
   Address: 78009510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78009510(uint param_1)

{
  if ((0x7803f7f7 < param_1) && (param_1 < 0x7803fa59)) {
    _unlock(((int)(param_1 + 0x87fc0808) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


