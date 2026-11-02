/* Module: vegas30.exe
   Function: FUN_00423b10
   Address: 00423b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423b10(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_0043c0e0(*(undefined4 *)((int)_Memory + 0x20));
    *(undefined4 *)((int)_Memory + 0x20) = 0;
    FUN_0043c0e0(*(undefined4 *)((int)_Memory + 0x58));
    *(undefined4 *)((int)_Memory + 0x58) = 0;
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


