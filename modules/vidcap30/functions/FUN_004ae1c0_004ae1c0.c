/* Module: vidcap30.exe
   Function: FUN_004ae1c0
   Address: 004ae1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ae1c0(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_004ae200(_Memory,0x624,0,0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


