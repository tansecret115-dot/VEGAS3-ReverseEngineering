/* Module: vidcap30.exe
   Function: FUN_00456b20
   Address: 00456b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00456b20(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4,LPCSTR param_5)

{
  LPSTR lpString;
  undefined4 uVar1;
  int iVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  char *pcVar3;
  LPARAM lParam;
  
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    lstrcpynA(param_5 + 0x104,param_5,0x104);
    param_5[0x207] = '\0';
    EndDialog(param_1,2);
    return 0;
  }
  lpString = param_5 + 0x104;
  GetDlgItemTextA(param_1,0x4f3,lpString,0x104);
  if (*lpString == '\0') {
    uVar1 = _SfGetString_8(DAT_005ba2a0,0xc526);
    SfMsgBox(param_1,0x10,uVar1);
  }
  else {
    iVar2 = FUN_0045b320(lpString);
    if (iVar2 != 0) {
      EndDialog(param_1,1);
      return 0;
    }
    pcVar3 = "\\ / : * ? < > | \"";
    uVar1 = _SfGetString_8(DAT_005ba2a0,0xc517);
    SfMsgBox(param_1,0x10,uVar1,pcVar3);
  }
  SetDlgItemTextA(param_1,0x4f3,param_5);
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = GetDlgItem(param_1,0x4f3);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return 0;
}


