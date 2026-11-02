/* Module: vfplugs.dll
   Function: FUN_00472870
   Address: 00472870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472870(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_00472750(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


