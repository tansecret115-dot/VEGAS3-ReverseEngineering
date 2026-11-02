/* Module: vegas30.exe
   Function: FUN_00527fa0
   Address: 00527fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527fa0(int param_1,int param_2,LPSIZE param_3)

{
  HWND hWnd;
  HDC hdc;
  HGDIOBJ pvVar1;
  int c;
  CHAR local_104 [260];
  
  param_3->cx = 0;
  param_3->cy = 0;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x8c),param_2);
  if (hWnd != (HWND)0x0) {
    hdc = GetDC(hWnd);
    pvVar1 = (HGDIOBJ)SendMessageA(hWnd,0x31,0,0);
    pvVar1 = SelectObject(hdc,pvVar1);
    c = GetWindowTextA(hWnd,local_104,0x103);
    GetTextExtentPoint32A(hdc,local_104,c,param_3);
    SelectObject(hdc,pvVar1);
    ReleaseDC(hWnd,hdc);
  }
  return;
}


