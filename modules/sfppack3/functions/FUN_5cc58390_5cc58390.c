/* Module: sfppack3.dll
   Function: FUN_5cc58390
   Address: 5cc58390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc58390(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_5cc58170(dwNewLong,param_1,param_2,0x5cc54f80);
  return;
}


