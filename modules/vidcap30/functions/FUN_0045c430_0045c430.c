/* Module: vidcap30.exe
   Function: FUN_0045c430
   Address: 0045c430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045c430(int param_1,LPSTR param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x20) == -1) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x8004e002;
  }
  lstrcpynA(param_2,(LPCSTR)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) +
                                     *(int *)(param_1 + 0x20) * 4) + 4),param_3);
  param_2[param_3 + -1] = '\0';
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


