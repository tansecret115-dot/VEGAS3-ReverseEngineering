/* Module: vegas30.exe
   Function: FUN_0052f3b0
   Address: 0052f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f3b0(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT Msg;
  uint wParam;
  int nCmdShow;
  BOOL BVar2;
  LPARAM lParam;
  
  if (*(int *)(param_2 + 0x1464) != 0) {
    nCmdShow = 0;
    pHVar1 = GetDlgItem(param_1,0x472);
    ShowWindow(pHVar1,nCmdShow);
    return;
  }
  if ((*(byte *)(param_2 + 0xb3c) & 0x10) == 0) {
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x472);
    EnableWindow(pHVar1,BVar2);
    wParam = 0;
  }
  else {
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x472);
    EnableWindow(pHVar1,BVar2);
    wParam = (uint)(*(int *)(param_2 + 0x144c) != 0);
  }
  lParam = 0;
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x472);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  return;
}


