/* Module: sfppack1.dll
   Function: FUN_5cdf3620
   Address: 5cdf3620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdf3620(HGDIOBJ param_1,LPCSTR param_2,int param_3,LPSIZE param_4)

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


