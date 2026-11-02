/* Module: sfppack3.dll
   Function: FUN_5cc5ea90
   Address: 5cc5ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc5ea90(HWND param_1)

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
    DAT_5cc98610 = DAT_5cc98610 + -1;
    if (DAT_5cc98610 == 0) {
      DeleteDC(DAT_5cc98644);
    }
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


