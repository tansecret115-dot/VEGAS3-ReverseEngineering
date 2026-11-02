/* Module: vegas30k.dll
   Function: FUN_010b3610
   Address: 010b3610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b3610(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_010b3640(_Memory);
    free(_Memory);
  }
  return;
}


