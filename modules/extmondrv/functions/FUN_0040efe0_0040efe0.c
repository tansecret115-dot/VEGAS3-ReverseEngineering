/* Module: extmondrv.dll
   Function: FUN_0040efe0
   Address: 0040efe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040efe0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_0040edc0(dwNewLong,param_1,param_2,0x40bbd0);
  return;
}


