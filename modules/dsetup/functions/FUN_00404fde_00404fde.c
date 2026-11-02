/* Module: dsetup.dll
   Function: FUN_00404fde
   Address: 00404fde
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00404fde(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_0040a358 + param_1;
  if ((&DAT_0040a358)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_00404fde(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_0040310c((undefined *)lpCriticalSection);
    }
    FUN_0040503f(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


