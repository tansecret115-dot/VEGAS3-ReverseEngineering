/* Module: sfpagepeel.dll
   Function: FUN_004139b0
   Address: 004139b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004139b0(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


