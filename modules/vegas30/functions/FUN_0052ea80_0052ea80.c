/* Module: vegas30.exe
   Function: FUN_0052ea80
   Address: 0052ea80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ea80(HWND param_1,int param_2,undefined4 param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  LPCSTR lpString;
  BOOL bEnable;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  iVar4 = 0x470;
  pHVar1 = GetParent(param_1);
  pHVar1 = GetDlgItem(pHVar1,iVar4);
  LVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  if (LVar2 == -1) {
    lpString = "";
    pHVar1 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar1,lpString);
    bEnable = 0;
    pHVar1 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar1,bEnable);
    return 0x8000ffff;
  }
  iVar4 = *(int *)(param_2 + 0x147c + LVar2 * 4);
  if (iVar4 == -2) {
    *(undefined4 *)(param_2 + 0xb3c) = 0x20;
  }
  else if (iVar4 == -1) {
    *(undefined4 *)(param_2 + 0xb3c) = 0x10;
  }
  else {
    *(undefined4 *)(param_2 + 0xb3c) = 3;
  }
  uVar3 = (**(code **)(*DAT_0064b510 + 0x34))(DAT_0064b510,param_3,iVar4);
  return uVar3;
}


