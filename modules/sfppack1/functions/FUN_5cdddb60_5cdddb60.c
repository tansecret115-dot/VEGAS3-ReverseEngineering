/* Module: sfppack1.dll
   Function: FUN_5cdddb60
   Address: 5cdddb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdddb60(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


