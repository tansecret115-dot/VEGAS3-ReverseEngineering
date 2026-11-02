/* Module: sftrans1.dll
   Function: FUN_004beb20
   Address: 004beb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004beb20(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004bec20(dwNewLong,param_1,param_2,FUN_004beb60);
  return;
}


