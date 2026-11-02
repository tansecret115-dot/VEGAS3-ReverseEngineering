/* Module: vegas30.exe
   Function: FUN_005e3950
   Address: 005e3950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e3950(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  char *pcVar2;
  LPARAM lParam;
  char local_40 [64];
  
  SetWindowLongA(param_1,8,param_2);
  _SfSetEditCtrlFont_8(param_1,0);
  _SfWndCenter_16(param_1,0,0,0x8001);
  pcVar2 = (char *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0x445);
  SfSetWindowText(pHVar1,pcVar2);
  SfFormatDiskFreeSpace((char *)(param_2 + 4),local_40);
  pcVar2 = local_40;
  pHVar1 = GetDlgItem(param_1,0x482);
  SfSetWindowText(pHVar1,pcVar2);
  wParam = *(WPARAM *)(param_2 + 0x108);
  lParam = 0;
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x642);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  return;
}


