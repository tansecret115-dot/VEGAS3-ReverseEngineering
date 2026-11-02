/* Module: sfnetmedia.dll
   Function: FUN_0042c510
   Address: 0042c510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c510(HGDIOBJ param_1,LPSIZE param_2)

{
  HDC hdc;
  HGDIOBJ h;
  
  hdc = GetDC((HWND)0x0);
  h = SelectObject(hdc,param_1);
  GetTextExtentPoint32A(hdc,"0",1,param_2);
  SelectObject(hdc,h);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


