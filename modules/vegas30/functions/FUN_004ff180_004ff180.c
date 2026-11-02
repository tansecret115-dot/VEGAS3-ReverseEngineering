/* Module: vegas30.exe
   Function: FUN_004ff180
   Address: 004ff180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ff180(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  free(_Memory);
  SetWindowLongA(param_1,0,0);
  return;
}


