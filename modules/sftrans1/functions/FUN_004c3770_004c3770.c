/* Module: sftrans1.dll
   Function: FUN_004c3770
   Address: 004c3770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3770(HWND param_1,undefined4 param_2)

{
  HLOCAL dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (HLOCAL)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004c3550(dwNewLong,param_1,param_2,FUN_004c0360);
  return;
}


