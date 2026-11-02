/* Module: sftrkfx1.dll
   Function: FUN_5cbcbed0
   Address: 5cbcbed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcbed0(uint *param_1,HDC param_2,RECT *param_3)

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
  FUN_5cbcb550(param_1,param_2);
  FUN_5cbcac30(param_1,param_2);
  FUN_5cbca4a0((int)param_1,param_2);
  FUN_5cbcba40((int)param_1,param_2);
  return;
}


