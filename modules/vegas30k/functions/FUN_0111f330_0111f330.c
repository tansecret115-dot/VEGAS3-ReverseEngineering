/* Module: vegas30k.dll
   Function: FUN_0111f330
   Address: 0111f330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111f330(HWND param_1,undefined4 param_2)

{
  HLOCAL dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (HLOCAL)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_0111f110(dwNewLong,param_1,param_2,FUN_0111bf20);
  return;
}


