/* Module: sfcdi.dll
   Function: FUN_5bf381a0
   Address: 5bf381a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf381a0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE hEvent;
  
  hEvent = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x20),0);
  if (hEvent != (HANDLE)0x0) {
    SetEvent(hEvent);
    CloseHandle(hEvent);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
    *(int *)param_1 = param_1;
    *(int *)(param_1 + 4) = param_1;
    DeleteCriticalSection(lpCriticalSection);
  }
  return;
}


