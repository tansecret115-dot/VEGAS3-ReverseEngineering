/* Module: vegas30.exe
   Function: FUN_005d8930
   Address: 005d8930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d8930(uint param_1,undefined4 param_2,HWND param_3,int param_4)

{
  HWND pHVar1;
  UINT Msg;
  CHAR *pCVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  LPARAM lParam;
  CHAR local_200 [256];
  undefined1 local_100 [256];
  
  pCVar2 = local_200;
  iVar3 = 0x100;
  pHVar1 = GetDlgItem(param_3,0x438);
  iVar3 = GetWindowTextA(pHVar1,pCVar2,iVar3);
  if (iVar3 != 0) {
    iVar3 = _SfTextToLongToken_8(local_200,0);
    if (0 < iVar3) {
      if (0x40 < iVar3) {
        iVar3 = 0x40;
      }
      goto LAB_005d8995;
    }
  }
  iVar3 = 1;
LAB_005d8995:
  if (((param_1 & 0xffff) == 9) || ((param_1 & 0xffff) == 8)) {
    pCVar2 = local_200;
    iVar4 = 0x100;
    pHVar1 = GetDlgItem(param_3,0x438);
    iVar4 = GetWindowTextA(pHVar1,pCVar2,iVar4);
    if (iVar4 != 0) {
      iVar3 = _SfTextToLongToken_8(local_200,0);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      else if (0x40 < iVar3) {
        iVar3 = 0x40;
      }
      SfPrintF(local_100,&DAT_0061052c,iVar3);
      puVar5 = local_100;
      pHVar1 = GetDlgItem(param_3,0x438);
      SfSetWindowText(pHVar1,puVar5);
    }
  }
  iVar4 = _Spinner_DefScrollProc_24(0x115,param_1,param_2,1,2,iVar3);
  if (iVar3 != iVar4) {
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else if (0x40 < iVar4) {
      iVar4 = 0x40;
    }
    SfPrintF(local_100,&DAT_00619b24,iVar4);
    puVar5 = local_100;
    pHVar1 = GetDlgItem(param_3,0x438);
    SfSetWindowText(pHVar1,puVar5);
    *(short *)(param_4 + 0xd2a) = (short)iVar4;
    if (*(int *)(param_4 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      pHVar1 = GetParent(param_3);
      SendMessageA(pHVar1,Msg,(WPARAM)param_3,lParam);
    }
    *(undefined4 *)(param_4 + 0xd4c) = 1;
  }
  return 1;
}


