/* Module: vidcap30.exe
   Function: FUN_005801f0
   Address: 005801f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005801f0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  *param_2 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x20);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


