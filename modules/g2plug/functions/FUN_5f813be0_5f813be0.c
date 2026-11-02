/* Module: g2plug.dll
   Function: FUN_5f813be0
   Address: 5f813be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813be0(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL bEnable;
  BOOL BVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  CheckDlgButton(param_1,0x3ef,*(UINT *)(iVar1 + 0x657));
  CheckDlgButton(param_1,0x3f1,*(UINT *)(iVar1 + 0x65b));
  CheckDlgButton(param_1,0x3f2,*(UINT *)(iVar1 + 0x65f));
  CheckDlgButton(param_1,1000,*(UINT *)(iVar1 + 0x150));
  if ((*(int *)(iVar1 + 300) == 0) || (*(int *)(iVar1 + 0x148) == -1)) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3ef);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3e9);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3f1);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3ea);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3f2);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x3eb);
  EnableWindow(pHVar2,BVar3);
  BVar3 = bEnable;
  pHVar2 = GetDlgItem(param_1,1000);
  EnableWindow(pHVar2,BVar3);
  pHVar2 = GetDlgItem(param_1,0x3ec);
  EnableWindow(pHVar2,bEnable);
  return 0;
}


