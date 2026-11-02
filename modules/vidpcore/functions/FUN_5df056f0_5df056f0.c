/* Module: vidpcore.dll
   Function: FUN_5df056f0
   Address: 5df056f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df056f0(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_5df055d0(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


