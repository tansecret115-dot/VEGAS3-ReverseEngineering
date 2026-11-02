/* Module: vegas30.exe
   Function: FUN_004f2b40
   Address: 004f2b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2b40(int *param_1,HWND param_2)

{
  HWND pHVar1;
  UINT UVar2;
  HWND wParam;
  int iVar3;
  LPARAM lParam;
  char *pcVar4;
  undefined4 local_68;
  undefined4 local_64;
  CHAR local_60 [32];
  char local_40 [64];
  
  pHVar1 = GetDlgItem(param_2,0x480);
  local_68 = 0x47f;
  local_64 = 0x480;
  CheckDlgButton(param_2,0x47e,*(UINT *)(*param_1 + 0x45c));
  UVar2 = IsDlgButtonChecked(param_2,0x47e);
  _SfDlgEnableControls_16(param_2,&local_68,2,UVar2);
  _SfLongToText_12(*(undefined4 *)(*param_1 + 0x464),local_60,0);
  SetDlgItemTextA(param_2,0x47f,local_60);
  lParam = 9;
  wParam = GetDlgItem(param_2,0x47f);
  SendMessageA(pHVar1,0x624,(WPARAM)wParam,lParam);
  SendMessageA(pHVar1,0x60e,0,1);
  SendMessageA(pHVar1,0x60f,0,9);
  iVar3 = *param_1 + 0x300;
  pHVar1 = GetDlgItem(param_2,0x445);
  SfSetWindowText(pHVar1,iVar3);
  SfFormatDiskFreeSpace((char *)(*param_1 + 0x300),local_40);
  pcVar4 = local_40;
  pHVar1 = GetDlgItem(param_2,0x482);
  SfSetWindowText(pHVar1,pcVar4);
  return;
}


