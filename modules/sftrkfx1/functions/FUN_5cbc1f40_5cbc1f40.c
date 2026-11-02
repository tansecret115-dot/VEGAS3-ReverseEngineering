/* Module: sftrkfx1.dll
   Function: FUN_5cbc1f40
   Address: 5cbc1f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc1f40(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


