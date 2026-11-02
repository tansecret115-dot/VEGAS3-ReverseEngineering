/* Module: vidcap30.exe
   Function: _SfGetUIColor@4
   Address: 0047d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


COLORREF _SfGetUIColor_4(undefined4 param_1)

{
  COLORREF CVar1;
  HDC hdc;
  
                    /* 0x7d3b0  437  _SfGetUIColor@4 */
  CVar1 = _SfGetUIColorAbsolute_4(param_1);
  hdc = GetDC((HWND)0x0);
  CVar1 = GetNearestColor(hdc,CVar1);
  ReleaseDC((HWND)0x0,hdc);
  return CVar1;
}


