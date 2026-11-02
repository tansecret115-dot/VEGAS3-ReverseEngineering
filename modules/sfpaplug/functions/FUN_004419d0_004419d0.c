/* Module: sfpaplug.dll
   Function: FUN_004419d0
   Address: 004419d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004419d0(HGDIOBJ param_1,LPSIZE param_2)

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


