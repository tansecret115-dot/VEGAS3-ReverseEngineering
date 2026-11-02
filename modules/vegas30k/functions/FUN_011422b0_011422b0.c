/* Module: vegas30k.dll
   Function: FUN_011422b0
   Address: 011422b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011422b0(HWND param_1)

{
  LRESULT LVar1;
  void *_Memory;
  int iVar2;
  
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  iVar2 = 0;
  if (0 < LVar1) {
    do {
      _Memory = (void *)FUN_011317a0(param_1,iVar2);
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < LVar1);
  }
  SendMessageA(param_1,0x1009,0,0);
  return;
}


