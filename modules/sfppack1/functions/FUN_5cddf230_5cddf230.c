/* Module: sfppack1.dll
   Function: FUN_5cddf230
   Address: 5cddf230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cddf230(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,4);
  if (hMem != (HLOCAL)0x0) {
    if (*(HGDIOBJ *)((int)hMem + 4) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)hMem + 4));
    }
    if (*(HLOCAL *)((int)hMem + 0x10) != (HLOCAL)0x0) {
      LocalFree(*(HLOCAL *)((int)hMem + 0x10));
    }
    if (*(int *)((int)hMem + 0xc) != 0) {
      DrawDibEnd(*(int *)((int)hMem + 0xc));
      DrawDibClose(*(undefined4 *)((int)hMem + 0xc));
    }
    if (*(HGDIOBJ *)((int)hMem + 0x14) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)hMem + 0x14));
    }
    if ((*(HGDIOBJ *)((int)hMem + 8) != (HGDIOBJ)0x0) && (*(int *)((int)hMem + 0x20) != 0)) {
      DeleteObject(*(HGDIOBJ *)((int)hMem + 8));
    }
    LocalFree(hMem);
  }
  return;
}


