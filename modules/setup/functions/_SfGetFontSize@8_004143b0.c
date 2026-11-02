/* Module: Setup.exe
   Function: _SfGetFontSize@8
   Address: 004143b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetFontSize_8(HGDIOBJ param_1,LPSIZE param_2)

{
  HDC hdc;
  HGDIOBJ h;
  
                    /* 0x143b0  149  _SfGetFontSize@8 */
  hdc = GetDC((HWND)0x0);
  h = SelectObject(hdc,param_1);
  GetTextExtentPoint32A(hdc,"0",1,param_2);
  SelectObject(hdc,h);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


