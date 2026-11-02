/* Module: mp3plug.dll
   Function: FUN_5f6a39b0
   Address: 5f6a39b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6a39b0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(LPCVOID *)((int)param_1 + 0xbc) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xbc));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xbc));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)param_1 + 200) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 200));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 200));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)param_1 + 0x78) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x78));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x78));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)param_1 + 0x8c) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x8c));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x8c));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)param_1 + 0x90) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x90));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x90));
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


