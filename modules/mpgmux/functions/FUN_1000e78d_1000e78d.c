/* Module: mpgmux.dll
   Function: FUN_1000e78d
   Address: 1000e78d
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000e78d(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10019b08 + param_1;
  if ((&DAT_10019b08)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000e78d(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000c3f0((undefined *)lpCriticalSection);
    }
    FUN_1000e7ee(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


