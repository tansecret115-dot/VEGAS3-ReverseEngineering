/* Module: vegas30k.dll
   Function: FUN_010ac9b0
   Address: 010ac9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ac9b0(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_010acb20(dwNewLong,param_1,param_2,FUN_010ac9f0);
  return;
}


