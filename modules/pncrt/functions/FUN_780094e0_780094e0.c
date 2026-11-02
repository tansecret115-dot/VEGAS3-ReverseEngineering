/* Module: pncrt.dll
   Function: FUN_780094e0
   Address: 780094e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780094e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    _lock(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


