/* Module: vidcap30.exe
   Function: FUN_0041c6f0
   Address: 0041c6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c6f0(HWND param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  bool bVar4;
  UINT Msg;
  undefined *puVar5;
  LPARAM lParam;
  undefined4 uVar6;
  CHAR local_20 [32];
  
  if (param_3 == 0x472) {
    if (param_4 != 0x300) {
      if (param_4 != 0x200) {
        return 1;
      }
      GetDlgItemTextA(param_1,0x472,local_20,0x20);
      _SfTextToDWordToken_8(local_20,0);
      uVar3 = _SfTextToDWordToken_8(local_20,0);
      if (uVar3 < 0x259) {
        uVar6 = _SfTextToDWordToken_8(local_20,0);
      }
      else {
        uVar6 = 600;
      }
      iVar1 = 0x472;
      goto LAB_0041c8a6;
    }
    GetDlgItemTextA(param_1,0x472,local_20,0x20);
    iVar1 = _SfTextToDWordToken_8(local_20,0);
    bVar4 = iVar1 == *(int *)(*param_5 + 0xf70);
  }
  else {
    if (param_3 != 0x494) {
      if (param_3 != 0x9c56) {
        return 1;
      }
      FUN_0041c8d0(param_1,param_5);
      return 1;
    }
    if (param_4 != 0x300) {
      if (param_4 != 0x200) {
        return 1;
      }
      GetDlgItemTextA(param_1,0x494,local_20,0x20);
      _SfTextToDWordToken_8(local_20,0);
      uVar3 = _SfTextToDWordToken_8(local_20,0);
      if (uVar3 < 0x4e21) {
        uVar6 = _SfTextToDWordToken_8(local_20,0);
        iVar1 = 0x494;
      }
      else {
        uVar6 = 20000;
        iVar1 = 0x494;
      }
LAB_0041c8a6:
      puVar5 = &DAT_00589f30;
      pHVar2 = GetDlgItem(param_1,iVar1);
      SfSetWindowText(pHVar2,puVar5,uVar6);
      return 1;
    }
    GetDlgItemTextA(param_1,0x494,local_20,0x20);
    iVar1 = _SfTextToDWordToken_8(local_20,0);
    bVar4 = iVar1 == *(int *)(*param_5 + 0xf6c);
  }
  if (bVar4) {
    return 1;
  }
  lParam = 0;
  Msg = 0x468;
  pHVar2 = GetParent(param_1);
  SendMessageA(pHVar2,Msg,(WPARAM)param_1,lParam);
  param_5[2] = 1;
  return 1;
}


