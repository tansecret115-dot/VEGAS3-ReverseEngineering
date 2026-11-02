/* Module: vegas30k.dll
   Function: FUN_01198260
   Address: 01198260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01198260(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == *(int *)(param_1 + 0x480)) {
    return 1;
  }
  if ((param_2 != 0) && (*(int *)(param_1 + 0x480) == 0)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x484));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x484);
  EnterCriticalSection(lpCriticalSection);
  *(int *)(param_1 + 0x480) = param_2;
  FUN_01197e60();
  LeaveCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x480) == 0) {
    DeleteCriticalSection(lpCriticalSection);
  }
  return 0;
}


