/* Module: vegas30k.dll
   Function: FUN_010140b0
   Address: 010140b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010140b0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int *)((int)param_1 + 0x18) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 0x18));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      SfCdiFreeFileStream(*(void **)((int)param_1 + 0x3c));
      *(undefined4 *)((int)param_1 + 0x3c) = 0xffffffff;
    }
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 0x1c));
    }
    if (*(LPCVOID *)((int)param_1 + 0x30) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x30));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x30));
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


