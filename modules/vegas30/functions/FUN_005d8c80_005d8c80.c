/* Module: vegas30.exe
   Function: FUN_005d8c80
   Address: 005d8c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d8c80(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND hWnd;
  uint uVar2;
  UINT Msg;
  CHAR *lpString;
  LPARAM lParam;
  int iVar3;
  undefined1 *puVar4;
  CHAR local_200 [256];
  undefined1 local_100 [256];
  
  lpString = local_200;
  iVar3 = 0x100;
  uVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0x438);
  iVar3 = GetWindowTextA(pHVar1,lpString,iVar3);
  if (iVar3 != 0) {
    uVar2 = _SfTextToLongToken_8(local_200,0);
  }
  if (uVar2 != *(ushort *)(param_2 + 0xd2a)) {
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    else if (0x40 < (int)uVar2) {
      uVar2 = 0x40;
    }
    *(short *)(param_2 + 0xd2a) = (short)uVar2;
    if (*(int *)(param_2 + 0xd58) == 0) {
      if (*(int *)(param_2 + 0xd30) == 0) {
        lParam = 0;
        Msg = 0x468;
        pHVar1 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,Msg,(WPARAM)pHVar1,lParam);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
  }
  if (param_3 == 0x200) {
    SfPrintF(local_100,&DAT_00619b24,uVar2);
    puVar4 = local_100;
    pHVar1 = GetDlgItem(param_1,0x438);
    SfSetWindowText(pHVar1,puVar4);
  }
  return 1;
}


