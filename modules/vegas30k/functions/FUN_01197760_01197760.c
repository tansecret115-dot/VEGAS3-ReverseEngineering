/* Module: vegas30k.dll
   Function: FUN_01197760
   Address: 01197760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01197760(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == *(int *)(param_1 + 0x430)) {
    return 1;
  }
  if ((param_2 != 0) && (*(int *)(param_1 + 0x430) == 0)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x434));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x434);
  EnterCriticalSection(lpCriticalSection);
  *(int *)(param_1 + 0x430) = param_2;
  FUN_01197350();
  LeaveCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x430) == 0) {
    DeleteCriticalSection(lpCriticalSection);
  }
  return 0;
}


