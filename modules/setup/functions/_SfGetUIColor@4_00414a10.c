/* Module: Setup.exe
   Function: _SfGetUIColor@4
   Address: 00414a10
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF _SfGetUIColor_4(int param_1)

{
  undefined *color;
  HDC hdc;
  COLORREF CVar1;
  
                    /* 0x14a10  179  _SfGetUIColor@4 */
  color = _SfGetUIColorAbsolute_4(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,(COLORREF)color);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


