/* Module: vegas30k.dll
   Function: cdrtoc_ReAllocIndexList
   Address: 0109a330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_ReAllocIndexList(struct _indexlist *) */

long cdrtoc_ReAllocIndexList(_indexlist *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  UINT uFlags;
  
                    /* 0x9a330  620  ?cdrtoc_ReAllocIndexList@@YGJPAU_indexlist@@@Z */
  if (param_1 == (_indexlist *)0x0) {
    return -0x7fffbffd;
  }
  pMem = *(LPCVOID *)(param_1 + 4);
  if (*(int *)param_1 == 0) {
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (pMem == (LPCVOID)0x0) {
      pvVar1 = GlobalAlloc(0x42,*(int *)param_1 * 4);
    }
    else {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      dwBytes = *(int *)param_1 << 2;
      uFlags = 0x42;
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
      pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
    }
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)(param_1 + 4) = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
  }
  return 0;
}


