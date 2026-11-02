/* Module: vfplugs.dll
   Function: FUN_004261e0
   Address: 004261e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004261e0(uint *param_1,HDC param_2,RECT *param_3)

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
  FUN_00425860(param_1,param_2);
  FUN_00424f40(param_1,param_2);
  FUN_004247b0((int)param_1,param_2);
  FUN_00425d50((int)param_1,param_2);
  return;
}


