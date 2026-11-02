/* Module: sfppack2.dll
   Function: FUN_5cd18360
   Address: 5cd18360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd18360(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cd18140(dwNewLong,param_1,param_2,0x5cd14f50);
  return;
}


