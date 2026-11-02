/* Module: wmfplug2.dll
   Function: SfWMF_FreeTemplateList
   Address: 0041e180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_FreeTemplateList(struct tSFLIST *) */

long SfWMF_FreeTemplateList(tSFLIST *param_1)

{
  int iVar1;
  void *_Memory;
  HGLOBAL pvVar2;
  int local_8;
  
                    /* 0x1e180  16  ?SfWMF_FreeTemplateList@@YGJPAUtSFLIST@@@Z */
  iVar1 = *(int *)param_1;
  local_8 = 0;
  if (0 < iVar1) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 8) + local_8 * 4);
      if (_Memory != (void *)0x0) {
        if (*(LPCVOID *)((int)_Memory + 0x1c) != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x1c));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x1c));
          GlobalFree(pvVar2);
        }
        if (*(LPCVOID *)((int)_Memory + 0x20) != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x20));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x20));
          GlobalFree(pvVar2);
        }
        if (*(LPCVOID *)((int)_Memory + 0x24) != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x24));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)_Memory + 0x24));
          GlobalFree(pvVar2);
        }
        free(_Memory);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  FUN_0042ad40((int *)param_1,0,iVar1,0);
  return 0;
}


