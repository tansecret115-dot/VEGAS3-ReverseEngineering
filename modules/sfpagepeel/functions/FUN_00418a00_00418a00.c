/* Module: sfpagepeel.dll
   Function: FUN_00418a00
   Address: 00418a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418a00(HWND param_1)

{
  HDC hDC;
  
  hDC = GetDC(param_1);
  FUN_004188e0(param_1,hDC);
  ReleaseDC(param_1,hDC);
  return;
}


