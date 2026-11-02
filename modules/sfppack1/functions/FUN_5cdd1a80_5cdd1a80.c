/* Module: sfppack1.dll
   Function: FUN_5cdd1a80
   Address: 5cdd1a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd1a80(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int local_4;
  
  if (*(LPCVOID *)(param_1 + 0x49c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x49c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x49c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar2 = (undefined4 *)(param_1 + 0xb0);
    do {
      if ((LPCVOID)*puVar2 != (LPCVOID)0x0) {
        pvVar1 = GlobalHandle((LPCVOID)*puVar2);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle((LPCVOID)*puVar2);
        GlobalFree(pvVar1);
        *puVar2 = 0;
      }
      local_4 = local_4 + 1;
      puVar2 = puVar2 + 10;
    } while (local_4 < *(int *)(param_1 + 0x88));
  }
  puVar2 = (undefined4 *)(param_1 + 0x240);
  local_4 = 2;
  do {
    if ((LPCVOID)*puVar2 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)*puVar2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*puVar2);
      GlobalFree(pvVar1);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 10;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pcVar3 = GlobalFree_exref;
  if (*(LPCVOID *)(param_1 + 0x3d8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3d8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3d8));
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x3e4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3e4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3e4));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x418) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x418));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x418));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x42c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x42c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x42c));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  return 0;
}


