/* Module: sfppack2.dll
   Function: FUN_5cd13300
   Address: 5cd13300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd13300(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0x1a8);
  if (dwNewLong == (undefined4 *)0x0) {
    return;
  }
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  FUN_5cd13150(dwNewLong,param_1,param_2);
  return;
}


