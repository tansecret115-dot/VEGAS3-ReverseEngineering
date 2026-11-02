/* Module: vegas30.exe
   Function: FUN_0052ff20
   Address: 0052ff20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ff20(HWND param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  *(undefined4 *)(param_2 + 0xb50) = 0;
  hWnd = GetDlgItem(param_1,0x470);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 1) {
    *(undefined4 *)(param_2 + 0xb50) = 1;
  }
  return 1;
}


