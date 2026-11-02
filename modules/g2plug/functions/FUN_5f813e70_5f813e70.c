/* Module: g2plug.dll
   Function: FUN_5f813e70
   Address: 5f813e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813e70(void *this,HWND param_1)

{
  HWND pHVar1;
  UINT bEnable;
  BOOL BVar2;
  CHAR *pCVar3;
  int iVar4;
  SIZE_T SVar5;
  BOOL BVar6;
  CHAR local_400 [1024];
  
  iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar4 == 0) {
    return 0x80070057;
  }
  if (*(int *)(iVar4 + 0x678) != 0) {
    SfRealG2_RestoreTargetData(*(uchar **)(iVar4 + 0x674),*(int *)(iVar4 + 0x678));
  }
  pHVar1 = GetDlgItem(param_1,0x3ed);
  if (pHVar1 != (HWND)0x0) {
    FUN_5f80ac70(pHVar1);
    FUN_5f80aef0();
    pCVar3 = local_400;
    SVar5 = 0x400;
    pHVar1 = GetDlgItem(param_1,0x3ed);
    FUN_5f80b050(pHVar1,pCVar3,SVar5);
    SetDlgItemTextA(param_1,0x3ef,local_400);
  }
  if ((*(int *)(iVar4 + 0x663) == 0) && (*(int *)(iVar4 + 0x667) == 0)) {
    *(undefined4 *)(iVar4 + 0x667) = 10000;
    *(undefined4 *)(iVar4 + 0x663) = 0xf;
  }
  SetDlgItemInt(param_1,0x3f3,*(UINT *)(iVar4 + 0x663),0);
  SetDlgItemInt(param_1,0x3f4,*(UINT *)(iVar4 + 0x667),0);
  if ((*(int *)(iVar4 + 300) == 0) || (*(int *)(iVar4 + 0x148) == -1)) {
    BVar2 = 0;
  }
  else {
    BVar2 = 1;
  }
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3fa);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f3);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3fb);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f4);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f5);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3ed);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f0);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f1);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f2);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f6);
  EnableWindow(pHVar1,BVar6);
  BVar6 = BVar2;
  pHVar1 = GetDlgItem(param_1,0x3f8);
  EnableWindow(pHVar1,BVar6);
  pHVar1 = GetDlgItem(param_1,0x3f7);
  EnableWindow(pHVar1,BVar2);
  CheckDlgButton(param_1,0x3f0,*(uint *)(iVar4 + 0x66b) & 1);
  CheckDlgButton(param_1,0x3f1,*(uint *)(iVar4 + 0x66b) & 2);
  CheckDlgButton(param_1,0x3f2,*(uint *)(iVar4 + 0x66b) & 4);
  CheckDlgButton(param_1,0x3f6,*(uint *)(iVar4 + 0x66b) & 0x18);
  if ((*(byte *)(iVar4 + 0x66b) & 0x10) == 0) {
    CheckDlgButton(param_1,0x3f8,0);
    iVar4 = 0x3f7;
  }
  else {
    CheckDlgButton(param_1,0x3f7,0);
    iVar4 = 0x3f8;
  }
  CheckDlgButton(param_1,iVar4,1);
  bEnable = IsDlgButtonChecked(param_1,0x3f6);
  if (bEnable == 0) {
    pHVar1 = GetDlgItem(param_1,0x3f7);
    EnableWindow(pHVar1,bEnable);
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x3f8);
    EnableWindow(pHVar1,BVar2);
  }
  return 0;
}


