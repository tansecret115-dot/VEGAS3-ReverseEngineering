/* Module: vidcap30.exe
   Function: _SfQueueFlush@4
   Address: 004aa080
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfQueueFlush_4(int param_1)

{
                    /* 0xaa080  590  _SfQueueFlush@4 */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  SetEvent(*(HANDLE *)(param_1 + 0x20));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


