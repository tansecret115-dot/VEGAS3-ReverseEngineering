/* Module: vidpcore.dll
   Function: FUN_5dead9c0
   Address: 5dead9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead9c0(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5deadac0(dwNewLong,param_1,param_2,FUN_5deada00);
  return;
}


