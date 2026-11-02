/* Module: sftrkfx1.dll
   Function: FUN_5cbcd2f0
   Address: 5cbcd2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcd2f0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cbcd0d0(dwNewLong,param_1,param_2,0x5cbc9ee0);
  return;
}


