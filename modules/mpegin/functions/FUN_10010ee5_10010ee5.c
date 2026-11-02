/* Module: mpegin.dll
   Function: FUN_10010ee5
   Address: 10010ee5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010ee5(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1001b340 + param_1;
  if ((&DAT_1001b340)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10010ee5(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000e22b((undefined *)lpCriticalSection);
    }
    FUN_10010f46(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


