/* Module: sfcdi.dll
   Function: FUN_5bf370c0
   Address: 5bf370c0
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF FUN_5bf370c0(int param_1)

{
  DWORD color;
  HDC hdc;
  COLORREF CVar1;
  
  color = FUN_5bf37040(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,color);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


