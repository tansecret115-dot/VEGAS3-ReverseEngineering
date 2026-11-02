/* Module: vegas30k.dll
   Function: FUN_010ace40
   Address: 010ace40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ace40(HWND param_1)

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
    DAT_0128e8f8 = DAT_0128e8f8 + -1;
    if (DAT_0128e8f8 == 0) {
      DeleteDC(DAT_0128e92c);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


