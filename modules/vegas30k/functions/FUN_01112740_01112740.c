/* Module: vegas30k.dll
   Function: FUN_01112740
   Address: 01112740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01112740(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_01112780(_Memory,0x624,0,0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


