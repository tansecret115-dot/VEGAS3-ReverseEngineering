/* Module: sfppack3.dll
   Function: FUN_5cc56f70
   Address: 5cc56f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc56f70(uint *param_1,HDC param_2,RECT *param_3)

{
  DWORD color;
  HWND hWnd;
  HBRUSH hbr;
  
  color = GetSysColor(5);
  SetBkColor(param_2,color);
  if ((param_1[3] & 0x80) == 0) {
    hWnd = (HWND)param_1[0xc];
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent((HWND)param_1[10]);
    }
    hbr = (HBRUSH)SendMessageA(hWnd,0x136,(WPARAM)param_2,param_1[10]);
    FillRect(param_2,param_3,hbr);
  }
  FUN_5cc565f0(param_1,param_2);
  FUN_5cc55cd0(param_1,param_2);
  FUN_5cc55540((int)param_1,param_2);
  FUN_5cc56ae0((int)param_1,param_2);
  return;
}


