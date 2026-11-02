/* Module: sfppack1.dll
   Function: FUN_5cde2a00
   Address: 5cde2a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde2a00(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cde27e0(dwNewLong,param_1,param_2,0x5cddf5f0);
  return;
}


