/* Module: sftrkfx1.dll
   Function: FUN_5cbdda20
   Address: 5cbdda20
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF FUN_5cbdda20(int param_1)

{
  DWORD color;
  HDC hdc;
  COLORREF CVar1;
  
  color = FUN_5cbdd9a0(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,color);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


