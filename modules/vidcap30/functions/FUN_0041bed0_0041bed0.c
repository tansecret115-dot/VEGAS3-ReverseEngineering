/* Module: vidcap30.exe
   Function: FUN_0041bed0
   Address: 0041bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bed0(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  UINT Msg;
  LPARAM lParam;
  CHAR local_40 [64];
  
  iVar1 = *param_4;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  if (iVar2 == 0x517) {
    iVar2 = *(int *)(iVar1 + 0x12bc);
    if (((param_2 & 0xffff) == 9) || ((param_2 & 0xffff) == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      iVar2 = _SfTextToLongToken_8(local_40,0);
      iVar2 = iVar2 * 1000;
    }
    iVar2 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1000,1000,iVar2);
    if (iVar2 < 1000) {
      iVar2 = 1000;
    }
    else if (600000 < iVar2) {
      iVar2 = 600000;
    }
    if (iVar2 != *(int *)(iVar1 + 0x12bc)) {
      *(int *)(iVar1 + 0x12bc) = iVar2;
      SfSetWindowText(pHVar3,&DAT_00589f30,iVar2 / 1000);
      lParam = 0;
      Msg = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,Msg,(WPARAM)param_1,lParam);
      param_4[2] = 1;
    }
  }
  return;
}


