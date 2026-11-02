/* Module: sfpagepeel.dll
   Function: FUN_004225e0
   Address: 004225e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004225e0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004223c0(dwNewLong,param_1,param_2,0x41f1d0);
  return;
}


