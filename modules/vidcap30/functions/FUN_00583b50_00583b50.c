/* Module: vidcap30.exe
   Function: FUN_00583b50
   Address: 00583b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00583b50(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x54) + param_2 * 4);
    if (iVar1 != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar1 + 0x48;
    }
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


