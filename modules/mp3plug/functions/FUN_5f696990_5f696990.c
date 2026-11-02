/* Module: mp3plug.dll
   Function: FUN_5f696990
   Address: 5f696990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f696990(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT UVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x417);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3ea);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x418);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3eb);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x41a);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x406);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x41b);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x407);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x41c);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x3ed);
  EnableWindow(pHVar1,iVar4);
  if (param_2 == 0) {
LAB_5f696a3b:
    BVar3 = 0;
  }
  else {
    UVar2 = IsDlgButtonChecked(param_1,0x448);
    if (UVar2 != 0) goto LAB_5f696a3b;
    BVar3 = 1;
  }
  pHVar1 = GetDlgItem(param_1,0x419);
  EnableWindow(pHVar1,BVar3);
  if (param_2 != 0) {
    UVar2 = IsDlgButtonChecked(param_1,0x448);
    if (UVar2 == 0) {
      BVar3 = 1;
      goto LAB_5f696a66;
    }
  }
  BVar3 = 0;
LAB_5f696a66:
  pHVar1 = GetDlgItem(param_1,0x3ec);
  EnableWindow(pHVar1,BVar3);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x432);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x433);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x448);
  EnableWindow(pHVar1,iVar4);
  iVar4 = param_2;
  pHVar1 = GetDlgItem(param_1,0x44a);
  EnableWindow(pHVar1,iVar4);
  pHVar1 = GetDlgItem(param_1,0x449);
  EnableWindow(pHVar1,param_2);
  return;
}


