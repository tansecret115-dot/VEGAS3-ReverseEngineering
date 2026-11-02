/* Module: vidcap30.exe
   Function: FUN_0045ee10
   Address: 0045ee10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ee10(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  HWND hWnd;
  uint uVar5;
  UINT UVar6;
  LPARAM LVar7;
  CHAR local_40 [64];
  
  iVar1 = *param_4;
  uVar5 = param_2 & 0xffff;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  if (iVar2 == 0x4d3) {
    uVar4 = *(undefined4 *)(iVar1 + 0xbc0);
    if ((uVar5 == 9) || (uVar5 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      uVar4 = _SfTextToDWordToken_8(local_40,0);
    }
    uVar5 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,1,uVar4);
    if (uVar5 < 5) {
      uVar5 = 5;
    }
    else if (0x400 < uVar5) {
      uVar5 = 0x400;
    }
    if (uVar5 != *(uint *)(iVar1 + 0xbc0)) {
      *(uint *)(iVar1 + 0xbc0) = uVar5;
      SfSetWindowText(pHVar3,&DAT_0058c34c,uVar5);
      LVar7 = 0;
      UVar6 = 0x468;
      pHVar3 = param_1;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,UVar6,(WPARAM)pHVar3,LVar7);
      param_4[4] = 1;
    }
    pHVar3 = GetDlgItem(param_1,0x4d1);
    FUN_0045d450(param_1,pHVar3,uVar5);
  }
  else if (iVar2 == 0x4d4) {
    uVar4 = *(undefined4 *)(iVar1 + 0xbc8);
    if ((uVar5 == 9) || (uVar5 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      uVar4 = _SfTextToDWordToken_8(local_40,0);
    }
    uVar5 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,1,uVar4);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    else if (0xfffffff < uVar5) {
      uVar5 = 0xfffffff;
    }
    if (uVar5 != *(uint *)(iVar1 + 0xbc8)) {
      *(uint *)(iVar1 + 0xbc8) = uVar5;
      SfSetWindowText(pHVar3,&DAT_0058c34c,uVar5);
      LVar7 = 0;
      UVar6 = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,UVar6,(WPARAM)param_1,LVar7);
      param_4[4] = 1;
      return;
    }
  }
  return;
}


