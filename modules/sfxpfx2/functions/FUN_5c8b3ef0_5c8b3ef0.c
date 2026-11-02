/* Module: sfxpfx2.dll
   Function: FUN_5c8b3ef0
   Address: 5c8b3ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b3ef0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5c8b4060(dwNewLong,param_1,param_2,0x5c8b3f30);
  return;
}


