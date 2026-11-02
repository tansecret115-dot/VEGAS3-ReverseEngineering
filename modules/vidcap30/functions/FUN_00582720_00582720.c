/* Module: vidcap30.exe
   Function: FUN_00582720
   Address: 00582720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00582720(LPVOID param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  LPVOID local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x18);
  local_4 = param_1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)param_1 + 0x14) != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_005826f0,param_1,0
                        ,(LPDWORD)&local_4);
  *(HANDLE *)((int)param_1 + 0x14) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}


