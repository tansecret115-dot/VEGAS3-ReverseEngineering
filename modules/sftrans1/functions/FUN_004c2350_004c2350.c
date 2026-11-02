/* Module: sftrans1.dll
   Function: FUN_004c2350
   Address: 004c2350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2350(int param_1,HDC param_2,RECT *param_3)

{
  DWORD color;
  HWND hWnd;
  HBRUSH hbr;
  
  color = GetSysColor(5);
  SetBkColor(param_2,color);
  if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
    hWnd = *(HWND *)(param_1 + 0x30);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    hbr = (HBRUSH)SendMessageA(hWnd,0x136,(WPARAM)param_2,*(LPARAM *)(param_1 + 0x28));
    FillRect(param_2,param_3,hbr);
  }
  FUN_004c19d0(param_1,param_2);
  FUN_004c10b0(param_1,param_2);
  FUN_004c0920(param_1,param_2);
  FUN_004c1ec0(param_1,param_2);
  return;
}


