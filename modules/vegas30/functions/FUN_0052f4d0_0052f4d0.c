/* Module: vegas30.exe
   Function: FUN_0052f4d0
   Address: 0052f4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f4d0(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT Msg;
  uint wParam;
  int nCmdShow;
  BOOL BVar2;
  LPARAM lParam;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  FUN_004a45b0(DAT_00647630,local_8,&local_10);
  if (*(int *)(param_2 + 0x1468) != 0) {
    nCmdShow = 0;
    pHVar1 = GetDlgItem(param_1,0x471);
    ShowWindow(pHVar1,nCmdShow);
    return;
  }
  if ((local_10 == 0 && local_c == 0) || ((*(byte *)(param_2 + 0xb3c) & 3) == 0)) {
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x471);
    EnableWindow(pHVar1,BVar2);
    wParam = 0;
  }
  else {
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x471);
    EnableWindow(pHVar1,BVar2);
    wParam = (uint)(*(int *)(param_2 + 0xb48) != 0);
  }
  lParam = 0;
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x471);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  return;
}


