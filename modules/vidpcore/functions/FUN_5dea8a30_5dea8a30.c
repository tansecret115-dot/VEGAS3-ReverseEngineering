/* Module: vidpcore.dll
   Function: FUN_5dea8a30
   Address: 5dea8a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dea8a30(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_5dea8910(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


