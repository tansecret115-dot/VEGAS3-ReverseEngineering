/* Module: vidcap30.exe
   Function: FUN_0041c450
   Address: 0041c450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c450(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  uint uVar5;
  UINT Msg;
  LPARAM lParam;
  CHAR local_40 [64];
  
  iVar1 = *param_4;
  uVar5 = param_2 & 0xffff;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  if (iVar2 == 0x484) {
    uVar4 = *(undefined4 *)(iVar1 + 0xf70);
    if ((uVar5 == 9) || (uVar5 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      uVar4 = _SfTextToDWordToken_8(local_40,0);
    }
    uVar5 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,2,uVar4);
    if (600 < uVar5) {
      uVar5 = 600;
    }
    if (uVar5 == *(uint *)(iVar1 + 0xf70)) {
      return;
    }
    *(uint *)(iVar1 + 0xf70) = uVar5;
  }
  else {
    if (iVar2 != 0x4cb) {
      return;
    }
    uVar4 = *(undefined4 *)(iVar1 + 0xf6c);
    if ((uVar5 == 9) || (uVar5 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      uVar4 = _SfTextToDWordToken_8(local_40,0);
    }
    uVar5 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,2,uVar4);
    if (20000 < uVar5) {
      uVar5 = 20000;
    }
    if (uVar5 == *(uint *)(iVar1 + 0xf6c)) {
      return;
    }
    *(uint *)(iVar1 + 0xf6c) = uVar5;
  }
  SfSetWindowText(pHVar3,&DAT_00589f30,uVar5);
  lParam = 0;
  Msg = 0x468;
  pHVar3 = GetParent(param_1);
  SendMessageA(pHVar3,Msg,(WPARAM)param_1,lParam);
  param_4[2] = 1;
  return;
}


