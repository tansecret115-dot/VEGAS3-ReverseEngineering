/* Module: vegas30k.dll
   Function: _SfEq_Close@4
   Address: 010f5920
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfEq_Close_4(LPCVOID param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  int iVar3;
  code *pcVar4;
  
                    /* 0xf5920  910  _SfEq_Close@4 */
  if (*(LPCVOID *)((int)param_1 + 0x24) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x24));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x24));
    GlobalFree(pvVar2);
  }
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x10)) {
      do {
        pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x1c) + iVar3 * 4);
        if (pvVar1 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pvVar1);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x1c) + iVar3 * 4));
          GlobalFree(pvVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0x10));
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c));
    GlobalFree(pvVar2);
  }
  if (*(int *)((int)param_1 + 0x20) != 0) {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x10)) {
      do {
        pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x20) + iVar3 * 4);
        if (pvVar1 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pvVar1);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x20) + iVar3 * 4));
          GlobalFree(pvVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0x10));
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x20));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x20));
    GlobalFree(pvVar2);
  }
  pcVar4 = GlobalFree_exref;
  if (*(LPCVOID *)((int)param_1 + 0x18) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x18));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x18));
    pcVar4 = GlobalFree_exref;
    GlobalFree(pvVar2);
  }
  if (*(LPCVOID *)((int)param_1 + 0x28) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x28));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x28));
    (*pcVar4)(pvVar2);
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  (*pcVar4)(pvVar2);
  return;
}


