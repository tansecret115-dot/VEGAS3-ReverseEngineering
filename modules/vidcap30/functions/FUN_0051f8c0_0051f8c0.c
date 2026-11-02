/* Module: vidcap30.exe
   Function: FUN_0051f8c0
   Address: 0051f8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051f8c0(HWND param_1)

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
    DAT_00662408 = DAT_00662408 + -1;
    if (DAT_00662408 == 0) {
      DeleteDC(DAT_0066243c);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


