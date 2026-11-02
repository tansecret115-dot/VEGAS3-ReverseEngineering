/* Module: sfppack2.dll
   Function: FUN_5cd2caa0
   Address: 5cd2caa0
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF FUN_5cd2caa0(int param_1)

{
  DWORD color;
  HDC hdc;
  COLORREF CVar1;
  
  color = FUN_5cd2ca20(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,color);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


