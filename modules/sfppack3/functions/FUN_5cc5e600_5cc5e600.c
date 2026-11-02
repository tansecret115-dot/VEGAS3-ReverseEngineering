/* Module: sfppack3.dll
   Function: FUN_5cc5e600
   Address: 5cc5e600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc5e600(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cc5e770(dwNewLong,param_1,param_2,0x5cc5e640);
  return;
}


