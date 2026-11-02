/* Module: sfppack1.dll
   Function: FUN_5cdd7090
   Address: 5cdd7090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd7090(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(LPCVOID *)(param_1 + 0x26c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x26c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x26c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1bc);
  local_4 = 3;
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


