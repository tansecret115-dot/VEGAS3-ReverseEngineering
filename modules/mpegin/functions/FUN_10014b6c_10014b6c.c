/* Module: mpegin.dll
   Function: FUN_10014b6c
   Address: 10014b6c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10014b6c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1001d960)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10010ee5(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10010f46(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1001d960)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


