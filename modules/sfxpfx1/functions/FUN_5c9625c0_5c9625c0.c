/* Module: sfxpfx1.dll
   Function: FUN_5c9625c0
   Address: 5c9625c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9625c0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5c962730(dwNewLong,param_1,param_2,0x5c962600);
  return;
}


