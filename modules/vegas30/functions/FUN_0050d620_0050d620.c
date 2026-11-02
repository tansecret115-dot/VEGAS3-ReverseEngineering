/* Module: vegas30.exe
   Function: FUN_0050d620
   Address: 0050d620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050d620(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,-0x15);
  if (_Memory != (void *)0x0) {
    if (*(void **)((int)_Memory + 0x104) != (void *)0x0) {
      free(*(void **)((int)_Memory + 0x104));
    }
    if (*(void **)((int)_Memory + 0x11c) != (void *)0x0) {
      free(*(void **)((int)_Memory + 0x11c));
    }
    free(_Memory);
    SetWindowLongA(param_1,-0x15,0);
  }
  return;
}


