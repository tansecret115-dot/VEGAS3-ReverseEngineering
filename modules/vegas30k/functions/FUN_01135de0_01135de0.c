/* Module: vegas30k.dll
   Function: FUN_01135de0
   Address: 01135de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01135de0(int param_1,undefined4 param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  
  if ((*(int *)(param_1 + 0xe0) < 1) || (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0xe4))) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0x20;
      pvVar2 = GlobalAlloc(0x42,0x80);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(param_1 + 0xdc) = pvVar3;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe4) + 0x20;
    *(int *)(param_1 + 0xe4) = iVar1;
    pvVar2 = GlobalAlloc(0x42,iVar1 * 4);
    pvVar3 = GlobalLock(pvVar2);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      do {
        iVar1 = iVar1 + 1;
        *(undefined4 *)((int)pvVar3 + iVar1 * 4 + -4) =
             *(undefined4 *)(*(int *)(param_1 + 0xdc) + -4 + iVar1 * 4);
      } while (iVar1 < *(int *)(param_1 + 0xe0));
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
    GlobalFree(pvVar2);
    *(LPVOID *)(param_1 + 0xdc) = pvVar3;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xe0) * 4) = param_2;
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  return;
}


