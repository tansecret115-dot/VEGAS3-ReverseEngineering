/* Module: vegas30k.dll
   Function: FUN_011af3c0
   Address: 011af3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011af3c0(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x6b0);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x6b0) = iVar1 + 1;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x6b0) = iVar1 + -1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


