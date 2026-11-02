/* Module: vidcap30.exe
   Function: FUN_00519810
   Address: 00519810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00519810(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_00519840(_Memory);
    free(_Memory);
  }
  return;
}


