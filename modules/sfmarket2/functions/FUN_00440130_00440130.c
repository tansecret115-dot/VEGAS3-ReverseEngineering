/* Module: sfmarket2.dll
   Function: FUN_00440130
   Address: 00440130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440130(HGDIOBJ param_1,LPSIZE param_2)

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


