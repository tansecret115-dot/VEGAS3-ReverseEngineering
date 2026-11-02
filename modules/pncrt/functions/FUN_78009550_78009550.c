/* Module: pncrt.dll
   Function: FUN_78009550
   Address: 78009550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78009550(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    _unlock(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


