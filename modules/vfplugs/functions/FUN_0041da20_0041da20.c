/* Module: vfplugs.dll
   Function: FUN_0041da20
   Address: 0041da20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041da20(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_0041d900(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


