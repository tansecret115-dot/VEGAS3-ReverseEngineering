/* Module: vidcap30.exe
   Function: FUN_0041aff0
   Address: 0041aff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041aff0(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  UINT Msg;
  LPARAM lParam;
  CHAR local_40 [64];
  
  iVar1 = *param_4;
  uVar4 = param_2 & 0xffff;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  if (iVar2 == 0x4cd) {
    iVar2 = *(int *)(iVar1 + 0xf78);
    if ((uVar4 == 9) || (uVar4 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      iVar2 = _SfTextToLongToken_8(local_40,0);
      iVar2 = iVar2 * 1000;
    }
    iVar2 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1000,1000,iVar2);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (10000 < iVar2) {
      iVar2 = 10000;
    }
    if (iVar2 == *(int *)(iVar1 + 0xf78)) {
      return;
    }
    *(int *)(iVar1 + 0xf78) = iVar2;
  }
  else {
    if (iVar2 != 0x4ce) {
      return;
    }
    iVar2 = *(int *)(iVar1 + 0xfbc);
    if ((uVar4 == 9) || (uVar4 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      iVar2 = _SfTextToLongToken_8(local_40,0);
      iVar2 = iVar2 * 1000;
    }
    iVar2 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1000,1000,iVar2);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (60000 < iVar2) {
      iVar2 = 60000;
    }
    if (iVar2 == *(int *)(iVar1 + 0xfbc)) {
      return;
    }
    *(int *)(iVar1 + 0xfbc) = iVar2;
  }
  SfSetWindowText(pHVar3,&DAT_00589f30,iVar2 / 1000);
  lParam = 0;
  Msg = 0x468;
  pHVar3 = GetParent(param_1);
  SendMessageA(pHVar3,Msg,(WPARAM)param_1,lParam);
  param_4[2] = 1;
  return;
}


