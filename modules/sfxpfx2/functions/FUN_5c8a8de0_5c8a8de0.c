/* Module: sfxpfx2.dll
   Function: FUN_5c8a8de0
   Address: 5c8a8de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8a8de0(HWND param_1)

{
  HWND pHVar1;
  
  GetWindowLongA(param_1,0);
  pHVar1 = GetCapture();
  if (param_1 != pHVar1) {
    SetCapture(param_1);
  }
  return;
}


