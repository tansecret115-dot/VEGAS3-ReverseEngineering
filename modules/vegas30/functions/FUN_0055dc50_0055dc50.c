/* Module: vegas30.exe
   Function: FUN_0055dc50
   Address: 0055dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055dc50(undefined4 param_1,HWND param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  SendMessageA(param_2,0x14b,0,0);
  iVar1 = FUN_0055d970(param_1);
  if (0 < iVar1) {
    pvVar2 = GlobalAlloc(0x42,iVar1 * 4);
    local_4 = GlobalLock(pvVar2);
    if (local_4 == (undefined4 *)0x0) {
      return;
    }
    iVar1 = FUN_0055d9c0(param_1,local_4,iVar1);
  }
  puVar3 = local_4;
  if (0 < iVar1) {
    do {
      if (*(char *)*puVar3 != '\0') {
        SendMessageA(param_2,0x143,0,(LPARAM)*puVar3);
        pvVar2 = GlobalHandle((LPCVOID)*puVar3);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle((LPCVOID)*puVar3);
        GlobalFree(pvVar2);
      }
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_4 != (undefined4 *)0x0) {
    pvVar2 = GlobalHandle(local_4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_4);
    GlobalFree(pvVar2);
  }
  return;
}


