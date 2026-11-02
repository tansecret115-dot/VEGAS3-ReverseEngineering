/* Module: mpegin.dll
   Function: FUN_10012e66
   Address: 10012e66
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10012e66(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10010f46(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


