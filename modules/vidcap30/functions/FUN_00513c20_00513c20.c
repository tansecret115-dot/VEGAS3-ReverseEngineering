/* Module: vidcap30.exe
   Function: FUN_00513c20
   Address: 00513c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00513c20(HWND param_1)

{
  HLOCAL hMem;
  HGLOBAL pvVar1;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    if (*(LPCVOID *)((int)hMem + 0xb4) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xb4));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xb4));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)hMem + 0xb8) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xb8));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xb8));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)((int)hMem + 0xbc) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xbc));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0xbc));
      GlobalFree(pvVar1);
    }
    if (*(HGDIOBJ *)((int)hMem + 0x30) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)hMem + 0x30));
    }
    if (*(LPCVOID *)((int)hMem + 0x28) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0x28));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)hMem + 0x28));
      GlobalFree(pvVar1);
    }
    LocalFree(hMem);
  }
  return;
}


