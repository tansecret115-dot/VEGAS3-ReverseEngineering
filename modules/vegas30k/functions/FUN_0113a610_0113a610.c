/* Module: vegas30k.dll
   Function: FUN_0113a610
   Address: 0113a610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a610(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,8);
  if (_Memory != (void *)0x0) {
    FUN_0113a4f0(param_1);
    free(_Memory);
    SetWindowLongA(param_1,8,0);
  }
  return;
}


