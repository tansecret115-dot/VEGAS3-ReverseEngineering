/* Module: vegas30.exe
   Function: FUN_005433c0
   Address: 005433c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005433c0(int param_1)

{
  int iVar1;
  void *_Memory;
  
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  iVar1 = **(int **)(param_1 + 4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    _Memory = *(void **)(*(int *)(*(int *)(param_1 + 4) + 8) + iVar1 * 4);
    if (_Memory != (void *)0x0) {
      _SfList_DeleteList_16(*(int *)(param_1 + 4),iVar1,1,0);
      free(_Memory);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  return 0;
}


