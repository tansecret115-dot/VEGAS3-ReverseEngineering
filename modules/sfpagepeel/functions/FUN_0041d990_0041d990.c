/* Module: sfpagepeel.dll
   Function: FUN_0041d990
   Address: 0041d990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d990(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_0041da90(dwNewLong,param_1,param_2,0x41d9d0);
  return;
}


