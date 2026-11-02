/* Module: vegas30k.dll
   Function: FUN_0108ffa0
   Address: 0108ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0108ffa0(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_0108fe80(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


