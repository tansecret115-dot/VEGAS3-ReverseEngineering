/* Module: sfxpfx1.dll
   Function: FUN_5c95c350
   Address: 5c95c350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c95c350(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5c95c130(dwNewLong,param_1,param_2,0x5c958f40);
  return;
}


