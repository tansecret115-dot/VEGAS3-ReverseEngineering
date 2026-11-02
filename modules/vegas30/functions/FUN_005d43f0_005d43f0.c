/* Module: vegas30.exe
   Function: FUN_005d43f0
   Address: 005d43f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d43f0(undefined4 param_1,undefined4 param_2,HWND param_3,int param_4)

{
  HWND hWnd;
  LPCSTR lpString;
  WPARAM wParam;
  
  hWnd = GetDlgItem(param_3,param_4);
  if (param_4 == 0x450) {
    wParam = 0x400;
  }
  else {
    wParam = 0x104;
  }
  SendMessageA(hWnd,0xc5,wParam,0);
  lpString = (LPCSTR)_SfSummary_GetItemText_8(param_1,param_2);
  if (lpString == (LPCSTR)0x0) {
    lpString = &DAT_0065b3c0;
  }
  SetWindowTextA(hWnd,lpString);
  return;
}


