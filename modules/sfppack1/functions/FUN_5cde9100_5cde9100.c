/* Module: sfppack1.dll
   Function: FUN_5cde9100
   Address: 5cde9100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde9100(HWND param_1)

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
    DAT_5ce23b38 = DAT_5ce23b38 + -1;
    if (DAT_5ce23b38 == 0) {
      DeleteDC(DAT_5ce23b6c);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


