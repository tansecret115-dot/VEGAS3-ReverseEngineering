/* Module: qt4plug.dll
   Function: FUN_5f539b00
   Address: 5f539b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f539b00(uint *param_1,HDC param_2,RECT *param_3)

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
  FUN_5f539180(param_1,param_2);
  FUN_5f538860(param_1,param_2);
  FUN_5f5380d0((int)param_1,param_2);
  FUN_5f539670((int)param_1,param_2);
  return;
}


