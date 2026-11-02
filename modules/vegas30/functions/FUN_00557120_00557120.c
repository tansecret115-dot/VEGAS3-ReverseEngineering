/* Module: vegas30.exe
   Function: FUN_00557120
   Address: 00557120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00557120(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  int nCmdShow;
  undefined4 local_8;
  undefined4 local_4;
  
  nCmdShow = 0;
  local_4 = 0;
  local_8 = 0;
  if (param_3 == 0) {
    if (param_2 == 2) {
      local_8 = 5;
    }
    else {
      if (param_2 != 3) goto LAB_0055715a;
      nCmdShow = 5;
      local_8 = 5;
    }
  }
  else {
LAB_0055715a:
    if ((param_2 != 2) && (param_2 != 3)) goto LAB_00557168;
  }
  local_4 = 5;
LAB_00557168:
  pHVar1 = GetDlgItem(param_1,0x4b9);
  ShowWindow(pHVar1,local_4);
  pHVar1 = GetDlgItem(param_1,0x4c8);
  ShowWindow(pHVar1,local_4);
  pHVar1 = GetDlgItem(param_1,0x60c);
  ShowWindow(pHVar1,local_8);
  pHVar1 = GetDlgItem(param_1,0x60d);
  ShowWindow(pHVar1,local_8);
  pHVar1 = GetDlgItem(param_1,0x4c9);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4ca);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x50a);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x508);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x509);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x634);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x633);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4cb);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4c3);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4d4);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4d5);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4cc);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4c4);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4cd);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4d1);
  ShowWindow(pHVar1,nCmdShow);
  pHVar1 = GetDlgItem(param_1,0x4d3);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


