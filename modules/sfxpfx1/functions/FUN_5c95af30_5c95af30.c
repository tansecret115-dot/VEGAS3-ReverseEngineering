/* Module: sfxpfx1.dll
   Function: FUN_5c95af30
   Address: 5c95af30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c95af30(uint *param_1,HDC param_2,RECT *param_3)

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
  FUN_5c95a5b0(param_1,param_2);
  FUN_5c959c90(param_1,param_2);
  FUN_5c959500((int)param_1,param_2);
  FUN_5c95aaa0((int)param_1,param_2);
  return;
}


