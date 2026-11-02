/* Module: vegas30k.dll
   Function: FUN_01135b60
   Address: 01135b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01135b60(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xe0)) {
    do {
      pMem = *(LPCVOID *)(*(int *)(param_1 + 0xdc) + iVar2 * 4);
      if (pMem != (LPCVOID)0x0) {
        FUN_0113afa0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xe0));
  }
  if (*(LPCVOID *)(param_1 + 0xdc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xdc));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_01136190();
  }
  _SfQueueDelete_4(param_1 + 0x24);
  return;
}


