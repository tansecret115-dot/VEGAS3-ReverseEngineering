/* Module: vidcap30.exe
   Function: FUN_00452df0
   Address: 00452df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452df0(undefined4 param_1,undefined4 param_2,HWND param_3,int param_4)

{
  HWND hWnd;
  LPCSTR lpString;
  WPARAM wParam;
  
  hWnd = GetDlgItem(param_3,param_4);
  if (param_4 == 0x9c46) {
    wParam = 0x3ff;
  }
  else {
    wParam = 0x7f;
  }
  SendMessageA(hWnd,0xc5,wParam,0);
  lpString = (LPCSTR)_SfSummary_GetItemText_8(param_1,param_2);
  if (lpString == (LPCSTR)0x0) {
    lpString = &DAT_005bc3f8;
  }
  SetWindowTextA(hWnd,lpString);
  return;
}


