/* Module: vidcap30.exe
   Function: FUN_00415f40
   Address: 00415f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415f40(HWND param_1)

{
  void *_Memory;
  
  if (param_1 != (HWND)0x0) {
    _Memory = (void *)GetWindowLongA(param_1,8);
    DestroyWindow(param_1);
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
  }
  return;
}


