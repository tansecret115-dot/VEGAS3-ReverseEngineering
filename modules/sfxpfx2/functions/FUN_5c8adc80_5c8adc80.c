/* Module: sfxpfx2.dll
   Function: FUN_5c8adc80
   Address: 5c8adc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8adc80(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5c8ada60(dwNewLong,param_1,param_2,0x5c8aa870);
  return;
}


