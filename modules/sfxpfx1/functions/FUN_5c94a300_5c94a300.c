/* Module: sfxpfx1.dll
   Function: FUN_5c94a300
   Address: 5c94a300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c94a300(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int local_4;
  
  if (*(LPCVOID *)(param_1 + 0x494) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x494));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x494));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    puVar2 = (undefined4 *)(param_1 + 0xa8);
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
    } while (local_4 < *(int *)(param_1 + 0x80));
  }
  puVar2 = (undefined4 *)(param_1 + 0x238);
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
  if (*(LPCVOID *)(param_1 + 0x3d0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3d0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3d0));
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x3d0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x3dc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3dc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3dc));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x3dc) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x410) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x410));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x410));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x410) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x424) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x424));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x424));
    (*pcVar3)(pvVar1);
    *(undefined4 *)(param_1 + 0x424) = 0;
  }
  return 0;
}


