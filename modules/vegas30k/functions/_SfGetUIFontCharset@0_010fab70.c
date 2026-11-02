/* Module: vegas30k.dll
   Function: _SfGetUIFontCharset@0
   Address: 010fab70
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetUIFontCharset_0(void)

{
  HDC hdc;
  int iVar1;
  
                    /* 0xfab70  993  _SfGetUIFontCharset@0 */
  hdc = GetDC((HWND)0x0);
  iVar1 = GetTextCharset(hdc);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1;
}


