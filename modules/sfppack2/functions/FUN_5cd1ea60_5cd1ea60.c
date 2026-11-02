/* Module: sfppack2.dll
   Function: FUN_5cd1ea60
   Address: 5cd1ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1ea60(HWND param_1)

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
    DAT_5cd67d50 = DAT_5cd67d50 + -1;
    if (DAT_5cd67d50 == 0) {
      DeleteDC(DAT_5cd67d84);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


