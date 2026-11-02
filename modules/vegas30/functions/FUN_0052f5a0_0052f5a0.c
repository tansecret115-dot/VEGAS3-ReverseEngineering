/* Module: vegas30.exe
   Function: FUN_0052f5a0
   Address: 0052f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f5a0(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT Msg;
  uint wParam;
  int nCmdShow;
  BOOL BVar2;
  LPARAM lParam;
  
  if (*(int *)(param_2 + 0x1468) != 0) {
    nCmdShow = 0;
    pHVar1 = GetDlgItem(param_1,0x47c);
    ShowWindow(pHVar1,nCmdShow);
    return;
  }
  if ((*(byte *)(param_2 + 0xb3c) & 2) == 0) {
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x47c);
    EnableWindow(pHVar1,BVar2);
    wParam = 0;
  }
  else {
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x47c);
    EnableWindow(pHVar1,BVar2);
    wParam = (uint)(*(int *)(param_2 + 0xb4c) != 0);
  }
  lParam = 0;
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x47c);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  return;
}


