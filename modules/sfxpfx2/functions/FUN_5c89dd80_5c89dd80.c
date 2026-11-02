/* Module: sfxpfx2.dll
   Function: FUN_5c89dd80
   Address: 5c89dd80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c89dd80(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(LPCVOID *)(param_1 + 0x2f8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2f8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2f8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2f8) = 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x128);
  local_4 = 0x10;
  do {
    if ((LPCVOID)*puVar2 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)*puVar2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*puVar2);
      GlobalFree(pvVar1);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return 0;
}


