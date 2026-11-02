/* Module: sfppack1.dll
   Function: FUN_5cde8c70
   Address: 5cde8c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde8c70(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cde8de0(dwNewLong,param_1,param_2,0x5cde8cb0);
  return;
}


