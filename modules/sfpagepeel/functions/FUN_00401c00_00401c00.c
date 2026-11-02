/* Module: sfpagepeel.dll
   Function: FUN_00401c00
   Address: 00401c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401c00(HWND param_1)

{
  BOOL bEnable;
  HWND pHVar1;
  int nCmdShow;
  char *lpString;
  uchar local_380 [244];
  undefined1 auStack_28c [128];
  CHAR aCStack_20c [116];
  CHAR aCStack_198 [116];
  CHAR aCStack_124 [292];
  
  if (DAT_0047d9b4 == -1) {
    SetDlgItemTextA(param_1,0x36,"");
    lpString = (char *)0x0;
  }
  else if (DAT_0047d9b4 < 1) {
    SetDlgItemTextA(param_1,0x36,"Expired");
    lpString = "Demo Mode";
  }
  else {
    SetDlgItemTextA(param_1,0x36,"Expires in:");
    FUN_00425020(local_380,(BYTE *)"%d days");
    lpString = (char *)local_380;
  }
  SetDlgItemTextA(param_1,0x37,lpString);
  if (DAT_0047d9b4 != 0) {
    FUN_004113b0((int)auStack_28c);
    SetDlgItemTextA(param_1,0x31,aCStack_20c);
    SetDlgItemTextA(param_1,0x32,aCStack_198);
    SetDlgItemTextA(param_1,0x33,aCStack_124);
  }
  if ((DAT_0047d9b4 == -1) || (*(int *)(DAT_0047d9b8 + 0x680) != 0)) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  pHVar1 = GetDlgItem(param_1,0x35);
  EnableWindow(pHVar1,bEnable);
  if ((DAT_0047d9b4 == -1) || (*(int *)(DAT_0047d9b8 + 0x680) != 0)) {
    nCmdShow = 0;
  }
  else {
    nCmdShow = 5;
  }
  pHVar1 = GetDlgItem(param_1,0x35);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


