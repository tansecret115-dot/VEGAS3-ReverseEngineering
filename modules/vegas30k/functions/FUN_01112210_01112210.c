/* Module: vegas30k.dll
   Function: FUN_01112210
   Address: 01112210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01112210(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_01112310(dwNewLong,param_1,param_2,FUN_01112250);
  return;
}


