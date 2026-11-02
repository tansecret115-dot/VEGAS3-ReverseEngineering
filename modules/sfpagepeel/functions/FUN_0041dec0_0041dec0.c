/* Module: sfpagepeel.dll
   Function: FUN_0041dec0
   Address: 0041dec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041dec0(HWND param_1)

{
  uint *_Memory;
  
  _Memory = (uint *)GetWindowLongA(param_1,0);
  if (_Memory != (uint *)0x0) {
    FUN_0041df00(_Memory,0x624,(HWND)0x0,(HWND)0x0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


