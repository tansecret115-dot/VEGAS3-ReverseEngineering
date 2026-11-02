/* Module: vegas30k.dll
   Function: cdrtoc_AllocIndexList
   Address: 0109a2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_AllocIndexList(struct _indexlist *) */

long cdrtoc_AllocIndexList(_indexlist *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
                    /* 0x9a2e0  608  ?cdrtoc_AllocIndexList@@YGJPAU_indexlist@@@Z */
  if (param_1 == (_indexlist *)0x0) {
    return -0x7fffbffd;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)param_1 == 0) {
    return 0;
  }
  hMem = GlobalAlloc(0x42,*(int *)param_1 << 2);
  pvVar1 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 4) = pvVar1;
  return (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
}


