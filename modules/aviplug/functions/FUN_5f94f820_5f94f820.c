/* Module: aviplug.dll
   Function: FUN_5f94f820
   Address: 5f94f820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94f820(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (param_1 != (LPCVOID)0x0) {
    local_4 = 0;
    if (0 < *(int *)((int)param_1 + 0x60)) {
      puVar2 = (undefined4 *)((int)param_1 + 200);
      do {
        if ((LPCVOID)puVar2[-1] != (LPCVOID)0x0) {
          pvVar1 = GlobalHandle((LPCVOID)puVar2[-1]);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle((LPCVOID)puVar2[-1]);
          GlobalFree(pvVar1);
        }
        if ((LPCVOID)*puVar2 != (LPCVOID)0x0) {
          pvVar1 = GlobalHandle((LPCVOID)*puVar2);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle((LPCVOID)*puVar2);
          GlobalFree(pvVar1);
        }
        if ((LPCVOID)puVar2[4] != (LPCVOID)0x0) {
          pvVar1 = GlobalHandle((LPCVOID)puVar2[4]);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle((LPCVOID)puVar2[4]);
          GlobalFree(pvVar1);
        }
        local_4 = local_4 + 1;
        puVar2 = puVar2 + 0x20;
      } while (local_4 < *(int *)((int)param_1 + 0x60));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


