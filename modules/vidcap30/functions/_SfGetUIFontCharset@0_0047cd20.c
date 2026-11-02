/* Module: vidcap30.exe
   Function: _SfGetUIFontCharset@0
   Address: 0047cd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetUIFontCharset_0(void)

{
  HDC hdc;
  int iVar1;
  
                    /* 0x7cd20  441  _SfGetUIFontCharset@0 */
  hdc = GetDC((HWND)0x0);
  iVar1 = GetTextCharset(hdc);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1;
}


