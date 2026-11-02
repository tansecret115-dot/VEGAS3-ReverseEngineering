/* Module: sfppack3.dll
   Function: FUN_5cc695c0
   Address: 5cc695c0
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF FUN_5cc695c0(int param_1)

{
  DWORD color;
  HDC hdc;
  COLORREF CVar1;
  
  color = FUN_5cc69540(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,color);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


