/* Module: vegas30k.dll
   Function: cdrtoc_FreeIndexList
   Address: 0109a3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_FreeIndexList(struct _indexlist *) */

long cdrtoc_FreeIndexList(_indexlist *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0x9a3d0  613  ?cdrtoc_FreeIndexList@@YGJPAU_indexlist@@@Z */
  if (param_1 == (_indexlist *)0x0) {
    return -0x7fffbffd;
  }
  if (*(LPCVOID *)(param_1 + 4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}


