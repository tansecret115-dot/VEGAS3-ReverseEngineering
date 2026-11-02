/* Module: sfxpfx2.dll
   Function: FUN_5c8b4380
   Address: 5c8b4380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b4380(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    if (*(HGDIOBJ *)((int)_Memory + 0x10c) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)_Memory + 0x10c));
    }
    if (*(HGDIOBJ *)((int)_Memory + 0x110) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)_Memory + 0x110));
    }
    DAT_5c8e9708 = DAT_5c8e9708 + -1;
    if (DAT_5c8e9708 == 0) {
      DeleteDC(DAT_5c8e973c);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


