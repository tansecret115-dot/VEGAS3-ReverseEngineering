/* Module: mp3rw.dll
   Function: FUN_00428670
   Address: 00428670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428670(HGDIOBJ param_1,LPCSTR param_2,int param_3,LPSIZE param_4)

{
  HDC hdc;
  HGDIOBJ h;
  
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


