/* Module: Setup.exe
   Function: _SfGetTextExtent@16
   Address: 00414400
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetTextExtent_16(HGDIOBJ param_1,LPCSTR param_2,int param_3,LPSIZE param_4)

{
  HDC hdc;
  HGDIOBJ h;
  
                    /* 0x14400  176  _SfGetTextExtent@16 */
  hdc = GetDC((HWND)0x0);
  h = SelectObject(hdc,param_1);
  if (param_3 < 1) {
    param_3 = lstrlenA(param_2);
  }
  GetTextExtentPoint32A(hdc,param_2,param_3,param_4);
  SelectObject(hdc,h);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


