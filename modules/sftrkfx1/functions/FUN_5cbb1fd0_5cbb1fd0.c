/* Module: sftrkfx1.dll
   Function: FUN_5cbb1fd0
   Address: 5cbb1fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb1fd0(HWND param_1,int param_2)

{
  HWND hWnd;
  LPARAM lParam;
  
  if (param_2 == 0) {
    lParam = 100;
  }
  else if (param_2 == 1) {
    lParam = 300;
  }
  else if (param_2 == 3) {
    lParam = 5000;
  }
  else {
    lParam = 1000;
  }
  hWnd = GetDlgItem(param_1,0xfa3);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x611,0,lParam);
  }
  return;
}


