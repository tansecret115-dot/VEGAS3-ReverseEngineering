/* Module: vidpcore.dll
   Function: FUN_5deadef0
   Address: 5deadef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deadef0(HWND param_1)

{
  void *_Memory;
  
  _Memory = (void *)GetWindowLongA(param_1,0);
  if (_Memory != (void *)0x0) {
    FUN_5deadf30(_Memory,0x624,0,0);
    free(_Memory);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


