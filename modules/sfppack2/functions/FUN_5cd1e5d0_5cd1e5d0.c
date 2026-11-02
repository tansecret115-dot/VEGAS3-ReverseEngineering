/* Module: sfppack2.dll
   Function: FUN_5cd1e5d0
   Address: 5cd1e5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1e5d0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cd1e740(dwNewLong,param_1,param_2,0x5cd1e610);
  return;
}


