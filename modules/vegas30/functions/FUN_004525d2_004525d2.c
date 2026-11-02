/* Module: vegas30.exe
   Function: FUN_004525d2
   Address: 004525d2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004525d2(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  WPARAM wParam;
  HWND pHVar1;
  uint nCmdShow;
  UINT Msg;
  LPARAM lParam;
  
  wParam = _SfGetUIFont_4(100);
  SendMessageA(param_1,0x30,wParam,1);
  lParam = 1;
  Msg = 0x30;
  pHVar1 = GetDlgItem(param_1,0x49f);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  FUN_00452530(param_1,0);
  nCmdShow = -(uint)(param_4 != 0) & 5;
  pHVar1 = GetDlgItem(param_1,2);
  ShowWindow(pHVar1,nCmdShow);
  _SfWndCenter_16(param_1,0,0,0x8001);
  return 1;
}


