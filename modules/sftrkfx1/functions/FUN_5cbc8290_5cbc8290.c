/* Module: sftrkfx1.dll
   Function: FUN_5cbc8290
   Address: 5cbc8290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc8290(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0x1a8);
  if (dwNewLong == (undefined4 *)0x0) {
    return;
  }
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  FUN_5cbc80e0(dwNewLong,param_1,param_2);
  return;
}


