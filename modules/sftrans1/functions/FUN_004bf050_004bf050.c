/* Module: sftrans1.dll
   Function: FUN_004bf050
   Address: 004bf050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bf050(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_004bf090(_Memory,0x624,0,0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


