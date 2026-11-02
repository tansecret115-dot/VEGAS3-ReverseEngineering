/* Module: sfppack3.dll
   Function: FUN_5cc68f60
   Address: 5cc68f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc68f60(HGDIOBJ param_1,LPSIZE param_2)

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


