/* Module: pncrt.dll
   Function: _beginthread
   Address: 78009920
   Source: Ghidra pseudocode (Stage 10 batch) */


uintptr_t __cdecl _beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList)

{
  void *lpThreadId;
  HANDLE hThread;
  DWORD DVar1;
  
                    /* 0x9920  176  _beginthread */
  DVar1 = 0;
  lpThreadId = calloc(1,0x74);
  if (lpThreadId != (void *)0x0) {
    FUN_78009ca0((int)lpThreadId);
    *(_StartAddress **)((int)lpThreadId + 0x48) = _StartAddress;
    *(void **)((int)lpThreadId + 0x4c) = _ArgList;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,_StackSize,FUN_780099a0,lpThreadId,4,
                           lpThreadId);
    *(HANDLE *)((int)lpThreadId + 4) = hThread;
    if (hThread != (HANDLE)0x0) {
      DVar1 = ResumeThread(hThread);
      if (DVar1 != 0xffffffff) {
        return (uintptr_t)hThread;
      }
    }
    DVar1 = GetLastError();
  }
  free(lpThreadId);
  if (DVar1 != 0) {
    FUN_7800a870(DVar1);
  }
  return 0xffffffff;
}


