/* Module: vegas30.exe
   Function: FUN_004f3170
   Address: 004f3170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3170(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  UINT Msg;
  LPARAM lParam;
  CHAR local_40 [64];
  
  iVar1 = *param_4;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  if (iVar2 == 0x480) {
    uVar4 = *(undefined4 *)(iVar1 + 0x464);
    if (((param_2 & 0xffff) == 9) || ((param_2 & 0xffff) == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      uVar4 = _SfTextToLongToken_8(local_40,0);
    }
    iVar2 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,2,uVar4);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (9 < iVar2) {
      iVar2 = 9;
    }
    if (iVar2 != *(int *)(iVar1 + 0x464)) {
      *(int *)(iVar1 + 0x464) = iVar2;
      SfSetWindowText(pHVar3,&DAT_00619b24,iVar2);
      lParam = 0;
      Msg = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,Msg,(WPARAM)param_1,lParam);
      param_4[2] = 1;
    }
  }
  return;
}


