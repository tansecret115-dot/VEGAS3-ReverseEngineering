/* Module: sftrkfx1.dll
   Function: FUN_5cbd35d0
   Address: 5cbd35d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd35d0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cbd3740(dwNewLong,param_1,param_2,0x5cbd3610);
  return;
}


