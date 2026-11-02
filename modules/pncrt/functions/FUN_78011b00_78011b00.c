/* Module: pncrt.dll
   Function: FUN_78011b00
   Address: 78011b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78011b00(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&__pioinfo)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    _lock(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    _unlock(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&__pioinfo)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


