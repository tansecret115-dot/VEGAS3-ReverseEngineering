/* Module: vidpcore.dll
   Function: FUN_5de06c50
   Address: 5de06c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de06c50(HWND param_1)

{
  BOOL bEnable;
  HWND pHVar1;
  int nCmdShow;
  char *lpString;
  CHAR local_380 [244];
  undefined1 auStack_28c [128];
  CHAR aCStack_20c [116];
  CHAR aCStack_198 [116];
  CHAR aCStack_124 [292];
  
  if (DAT_5df42e9c == -1) {
    SetDlgItemTextA(param_1,0x4b9,"");
    lpString = (LPCSTR)0x0;
  }
  else if (DAT_5df42e9c < 1) {
    SetDlgItemTextA(param_1,0x4b9,"Expired");
    lpString = "Demo Mode";
  }
  else {
    SetDlgItemTextA(param_1,0x4b9,"Expires in:");
    FUN_5deb5050(local_380,"%d days",DAT_5df42e9c);
    lpString = local_380;
  }
  SetDlgItemTextA(param_1,0x4ba,lpString);
  if (DAT_5df42e9c != 0) {
    FUN_5dea13e0(auStack_28c);
    SetDlgItemTextA(param_1,0x4b4,aCStack_20c);
    SetDlgItemTextA(param_1,0x4b5,aCStack_198);
    SetDlgItemTextA(param_1,0x4b6,aCStack_124);
  }
  if ((DAT_5df42e9c == -1) || (*(int *)(DAT_5df42ea0 + 0x680) != 0)) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  pHVar1 = GetDlgItem(param_1,0x4b8);
  EnableWindow(pHVar1,bEnable);
  if ((DAT_5df42e9c == -1) || (*(int *)(DAT_5df42ea0 + 0x680) != 0)) {
    nCmdShow = 0;
  }
  else {
    nCmdShow = 5;
  }
  pHVar1 = GetDlgItem(param_1,0x4b8);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


