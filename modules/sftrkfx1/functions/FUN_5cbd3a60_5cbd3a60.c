/* Module: sftrkfx1.dll
   Function: FUN_5cbd3a60
   Address: 5cbd3a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd3a60(HWND param_1)

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
    DAT_5cc117c8 = DAT_5cc117c8 + -1;
    if (DAT_5cc117c8 == 0) {
      DeleteDC(DAT_5cc117fc);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


