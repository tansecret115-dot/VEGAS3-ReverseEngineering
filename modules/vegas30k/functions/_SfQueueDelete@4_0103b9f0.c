/* Module: vegas30k.dll
   Function: _SfQueueDelete@4
   Address: 0103b9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfQueueDelete_4(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE hEvent;
  
                    /* 0x3b9f0  1168  _SfQueueDelete@4 */
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


