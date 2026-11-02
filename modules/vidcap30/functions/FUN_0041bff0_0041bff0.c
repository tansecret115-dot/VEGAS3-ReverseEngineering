/* Module: vidcap30.exe
   Function: FUN_0041bff0
   Address: 0041bff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041bff0(HWND param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  UINT UVar1;
  HWND pHVar2;
  int iVar3;
  LPARAM LVar4;
  CHAR local_20 [32];
  
  if (param_3 == 0x518) {
    GetDlgItemTextA(param_1,0x518,local_20,0x20);
    iVar3 = _SfTextToLongToken_8(local_20,0);
    iVar3 = iVar3 * 1000;
    if (param_4 == 0x200) {
      if (iVar3 < 1000) {
        iVar3 = 1000;
      }
      else if (600000 < iVar3) {
        iVar3 = 600000;
      }
      SfPrintF(local_20,&DAT_00589f30,iVar3 / 1000);
      SetDlgItemTextA(param_1,0x518,local_20);
    }
    else if ((param_4 == 0x300) && (iVar3 != *(int *)(*param_5 + 0x12bc))) {
      LVar4 = 0;
      UVar1 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar1,(WPARAM)param_1,LVar4);
      param_5[2] = 1;
      return 1;
    }
  }
  else {
    if (param_3 == 0x519) {
      UVar1 = IsDlgButtonChecked(param_1,0x519);
      pHVar2 = GetDlgItem(param_1,0x518);
      EnableWindow(pHVar2,UVar1);
      pHVar2 = GetDlgItem(param_1,0x517);
      EnableWindow(pHVar2,UVar1);
      LVar4 = 0;
      UVar1 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar1,(WPARAM)param_1,LVar4);
      param_5[2] = 1;
      return 1;
    }
    if (param_3 == 0x9c56) {
      FUN_0041c170(param_1,param_5);
      return 1;
    }
  }
  return 1;
}


