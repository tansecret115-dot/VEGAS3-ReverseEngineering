/* Module: vidpcore.dll
   Function: FUN_5deb2610
   Address: 5deb2610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb2610(HWND param_1,undefined4 param_2)

{
  HLOCAL dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (HLOCAL)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5deb23f0(dwNewLong,param_1,param_2,FUN_5deaf200);
  return;
}


