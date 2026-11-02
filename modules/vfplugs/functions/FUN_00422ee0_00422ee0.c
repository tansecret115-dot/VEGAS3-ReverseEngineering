/* Module: vfplugs.dll
   Function: FUN_00422ee0
   Address: 00422ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422ee0(HWND param_1)

{
  uint *_Memory;
  
  _Memory = (uint *)GetWindowLongA(param_1,0);
  if (_Memory != (uint *)0x0) {
    FUN_00422f20(_Memory,0x624,(HWND)0x0,(HWND)0x0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


