/* Module: sfppack2.dll
   Function: FUN_5cd08e70
   Address: 5cd08e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd08e70(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


