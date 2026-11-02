/* Module: sfppack3.dll
   Function: FUN_5cc4f3b0
   Address: 5cc4f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc4f3b0(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


