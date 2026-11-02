/* Module: vfplugs.dll
   Function: FUN_004029d0
   Address: 004029d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004029d0(HWND param_1)

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
  
  if (DAT_00494a3c == -1) {
    SetDlgItemTextA(param_1,0x4a5,"");
    lpString = (char *)0x0;
  }
  else if (DAT_00494a3c < 1) {
    SetDlgItemTextA(param_1,0x4a5,"Expired");
    lpString = "Demo Mode";
  }
  else {
    SetDlgItemTextA(param_1,0x4a5,"Expires in:");
    FUN_0042a040(local_380,(BYTE *)"%d days");
    lpString = (char *)local_380;
  }
  SetDlgItemTextA(param_1,0x4a6,lpString);
  if (DAT_00494a3c != 0) {
    FUN_004163d0((int)auStack_28c);
    SetDlgItemTextA(param_1,0x4a0,aCStack_20c);
    SetDlgItemTextA(param_1,0x4a1,aCStack_198);
    SetDlgItemTextA(param_1,0x4a2,aCStack_124);
  }
  if ((DAT_00494a3c == -1) || (*(int *)(DAT_00494a40 + 0x680) != 0)) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  pHVar1 = GetDlgItem(param_1,0x4a4);
  EnableWindow(pHVar1,bEnable);
  if ((DAT_00494a3c == -1) || (*(int *)(DAT_00494a40 + 0x680) != 0)) {
    nCmdShow = 0;
  }
  else {
    nCmdShow = 5;
  }
  pHVar1 = GetDlgItem(param_1,0x4a4);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


