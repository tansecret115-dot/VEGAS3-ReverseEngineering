/* Module: vegas30k.dll
   Function: FUN_010b3310
   Address: 010b3310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b3310(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0x2a0);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_010b33c0(dwNewLong,param_1,param_2,FUN_010b3350);
  return;
}


