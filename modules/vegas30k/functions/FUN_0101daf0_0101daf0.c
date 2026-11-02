/* Module: vegas30k.dll
   Function: FUN_0101daf0
   Address: 0101daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101daf0(HWND param_1)

{
  HWND hDlg;
  HWND hWnd;
  HWND hWnd_00;
  uint uVar1;
  tagPOINT local_18;
  tagRECT local_10;
  
  hDlg = GetParent(param_1);
  hWnd = GetDlgItem(hDlg,1);
  hWnd_00 = GetDlgItem(hDlg,2);
  uVar1 = GetWindowLongA(hWnd_00,-0x10);
  if ((uVar1 & 0x10000000) != 0) {
    ShowWindow(hWnd_00,0);
    GetWindowRect(hWnd_00,&local_10);
    local_18.x = local_10.left;
    local_18.y = local_10.top;
    ScreenToClient(hDlg,&local_18);
    SetWindowPos(hWnd,(HWND)0x0,local_18.x,local_18.y,0,0,5);
    uVar1 = GetWindowLongA(hDlg,-0x14);
    SetWindowLongA(hDlg,-0x14,uVar1 & 0xfffffbff);
  }
  return;
}


