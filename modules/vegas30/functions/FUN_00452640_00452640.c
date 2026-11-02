/* Module: vegas30.exe
   Function: FUN_00452640
   Address: 00452640
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00452640(undefined4 param_1,LPCSTR param_2,LPARAM param_3,undefined4 param_4)

{
  HWND hDlg;
  undefined4 *dwNewLong;
  HWND hWnd;
  
  hDlg = (HWND)_SfCreateDialogParam_20(DAT_00647204,0xff,param_1,&LAB_00452590,param_4);
  if (hDlg == (HWND)0x0) {
    return (HWND)0x0;
  }
  dwNewLong = LocalAlloc(0x40,0x14);
  if (dwNewLong != (undefined4 *)0x0) {
    *dwNewLong = hDlg;
    dwNewLong[2] = param_3;
    dwNewLong[1] = 0;
    dwNewLong[3] = 0;
    dwNewLong[4] = 0;
    SetWindowLongA(hDlg,8,(LONG)dwNewLong);
    SetDlgItemTextA(hDlg,0x49d,param_2);
    hWnd = GetDlgItem(hDlg,0x49f);
    SetWindowTextA(hWnd,"");
    SendMessageA(hWnd,0x60d,1,param_3);
    return hDlg;
  }
  EndDialog(hDlg,0);
  return (HWND)0x0;
}


