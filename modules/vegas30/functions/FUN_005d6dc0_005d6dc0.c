/* Module: vegas30.exe
   Function: FUN_005d6dc0
   Address: 005d6dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d6dc0(HWND param_1,HWND param_2,int param_3,int param_4)

{
  HWND pHVar1;
  int iVar2;
  UINT Msg;
  LPARAM lParam;
  CHAR local_28 [40];
  
  if (param_4 == 0x300) {
    if (*(int *)(param_3 + 0xd58) != 0) {
      return 1;
    }
    if (*(int *)(param_3 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,Msg,(WPARAM)param_1,lParam);
    }
    *(undefined4 *)(param_3 + 0xd4c) = 1;
    return 1;
  }
  if (param_4 == 0x100) {
    pHVar1 = GetDlgItem(param_1,0x4a8);
    if (param_2 == pHVar1) {
      DAT_0065ae2c = 0;
      GetWindowTextA(param_2,&DAT_0065ae2c,0x28);
      return 1;
    }
    pHVar1 = GetDlgItem(param_1,0x4aa);
    if (param_2 != pHVar1) {
      return 1;
    }
    DAT_0065ae04 = 0;
    GetWindowTextA(param_2,&DAT_0065ae04,0x28);
    return 1;
  }
  if (param_4 != 0x200) {
    return 1;
  }
  local_28[0] = '\0';
  GetWindowTextA(param_2,local_28,0x28);
  pHVar1 = GetDlgItem(param_1,0x4a8);
  if ((param_2 == pHVar1) && (iVar2 = lstrcmpA(&DAT_0065ae2c,local_28), iVar2 != 0)) {
    iVar2 = _SfTextToLongTokenEx_20(local_28,*(undefined4 *)(param_3 + 0xd74),8,800,0);
    if (iVar2 != *(int *)(param_3 + 0xd74)) {
      *(int *)(param_3 + 0xd74) = iVar2;
    }
  }
  else {
    pHVar1 = GetDlgItem(param_1,0x4aa);
    if (param_2 != pHVar1) {
      return 1;
    }
    iVar2 = lstrcmpA(&DAT_0065ae04,local_28);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = _SfTextToLongTokenEx_20(local_28,*(undefined4 *)(param_3 + 0xd78),8,800,0);
    if (iVar2 != *(int *)(param_3 + 0xd78)) {
      *(int *)(param_3 + 0xd78) = iVar2;
    }
  }
  SfSetWindowText(param_2,&DAT_0061052c,iVar2);
  return 1;
}


