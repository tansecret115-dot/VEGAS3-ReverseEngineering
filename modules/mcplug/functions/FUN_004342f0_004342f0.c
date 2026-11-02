/* Module: mcplug.dll
   Function: FUN_004342f0
   Address: 004342f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004342f0(uint *param_1,HDC param_2,RECT *param_3)

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
  FUN_00433970(param_1,param_2);
  FUN_00433050(param_1,param_2);
  FUN_004328c0((int)param_1,param_2);
  FUN_00433e60((int)param_1,param_2);
  return;
}


