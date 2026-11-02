/* Module: vegas30.exe
   Function: FUN_00481840
   Address: 00481840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00481840(int param_1)

{
  HWND hDlg;
  int iVar1;
  HWND pHVar2;
  BOOL bEnable;
  UINT uCheck;
  uint uCheck_00;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  hDlg = *(HWND *)(param_1 + 4);
  FUN_004a45b0(DAT_00647630,local_8,&local_10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x21c);
  uCheck_00 = (uint)(iVar1 == 0);
  CheckDlgButton(hDlg,0x63d,uCheck_00);
  CheckDlgButton(hDlg,0x653,(uint)(iVar1 != 0));
  iVar3 = iVar1;
  pHVar2 = GetDlgItem(hDlg,0x647);
  EnableWindow(pHVar2,iVar3);
  iVar3 = iVar1;
  pHVar2 = GetDlgItem(hDlg,0x644);
  EnableWindow(pHVar2,iVar3);
  iVar3 = iVar1;
  pHVar2 = GetDlgItem(hDlg,0x638);
  EnableWindow(pHVar2,iVar3);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x640);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x435);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x641);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x63f);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x645);
  EnableWindow(pHVar2,uVar4);
  if ((iVar1 == 0) && ((local_10 != 0 || (local_c != 0)))) {
    bEnable = 1;
  }
  else {
    bEnable = 0;
  }
  pHVar2 = GetDlgItem(hDlg,0x636);
  EnableWindow(pHVar2,bEnable);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0xe8c);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x635);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x642);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x643);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x648);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x637);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x646);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x438);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x649);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x439);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x434);
  EnableWindow(pHVar2,uVar4);
  uVar4 = uCheck_00;
  pHVar2 = GetDlgItem(hDlg,0x43a);
  EnableWindow(pHVar2,uVar4);
  pHVar2 = GetDlgItem(hDlg,0x64a);
  EnableWindow(pHVar2,uCheck_00);
  if (iVar1 == 0) {
    CheckDlgButton(hDlg,0x645,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x484) != 0));
    if ((*(int *)(*(int *)(param_1 + 0x10) + 0x480) == 0) || ((local_10 == 0 && (local_c == 0)))) {
      uCheck = 0;
    }
    else {
      uCheck = 1;
    }
    CheckDlgButton(hDlg,0x636,uCheck);
    CheckDlgButton(hDlg,0xe8c,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x260) == 3));
  }
  return;
}


