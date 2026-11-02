/* Module: vegas30.exe
   Function: FUN_005b9fc0
   Address: 005b9fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCRITICAL_SECTION FUN_005b9fc0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(param_1 + 0xc34);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(piVar1[2] + param_2 * 4);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if ((param_3 == 0) && (DVar2 = GetCurrentThreadId(), DAT_00647208 == DVar2)) {
      return lpCriticalSection;
    }
    EnterCriticalSection(lpCriticalSection);
    if (param_3 == 1) {
      lpCriticalSection[1].LockCount = lpCriticalSection[1].LockCount + 1;
      lpCriticalSection[1].RecursionCount = lpCriticalSection[1].RecursionCount + 1;
    }
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)0x0;
}


