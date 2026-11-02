/* Module: sfxpfx2.dll
   Function: FUN_5c8a9450
   Address: 5c8a9450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8a9450(HWND param_1)

{
  undefined4 *hMem;
  HGLOBAL pvVar1;
  
  hMem = (undefined4 *)GetWindowLongA(param_1,0);
  if (hMem != (undefined4 *)0x0) {
    FUN_5c8a9200(param_1);
    if (hMem[0xe] != 0) {
      KillTimer((HWND)*hMem,hMem[0xe]);
      hMem[0xe] = 0;
    }
    if (hMem[5] != 0) {
      DrawDibClose(hMem[5]);
    }
    if ((LPCVOID)hMem[3] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)hMem[3]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)hMem[3]);
      GlobalFree(pvVar1);
    }
    if ((LPCVOID)hMem[4] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)hMem[4]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)hMem[4]);
      GlobalFree(pvVar1);
    }
    LocalFree(hMem);
  }
  return;
}


