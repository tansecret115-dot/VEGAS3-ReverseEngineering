/* Module: vidcap30.exe
   Function: FUN_00459080
   Address: 00459080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459080(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  LPARAM lParam;
  uint bEnable;
  WPARAM wParam;
  int iVar4;
  LPARAM *pLVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CHAR *pCVar9;
  undefined4 uVar10;
  CHAR local_104 [260];
  
  uVar8 = DAT_005bb838;
  iVar1 = FUN_0042e510(DAT_005bb838);
  SfSetDlgItemText(param_1,0x9c77,param_2 + 0x30);
  SfSetDlgItemText(param_1,0x46d,param_2 + 0x194);
  pHVar2 = GetDlgItem(param_1,0x9c73);
  FUN_0044e240(pHVar2);
  SetWindowTextA(pHVar2,(LPCSTR)(param_2 + 0x130));
  pHVar2 = GetDlgItem(param_1,0x9c7f);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = FUN_00443740(uVar8,iVar4);
      SendMessageA(pHVar2,0x143,0,*(LPARAM *)(iVar3 + 0xc));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  SendMessageA(pHVar2,0x14d,0xffffffff,param_2 + 0xb0);
  pHVar2 = GetDlgItem(param_1,0x9c74);
  wParam = 0;
  pLVar5 = &DAT_005b6074;
  do {
    lParam = _SfGetString_8(DAT_005ba2a0,pLVar5[-1]);
    SendMessageA(pHVar2,0x14a,wParam,lParam);
    SendMessageA(pHVar2,0x151,wParam,*pLVar5);
    if ((*pLVar5 == *(int *)(param_2 + 0x490)) && (*pLVar5 >> 0x1f == *(int *)(param_2 + 0x494))) {
      SendMessageA(pHVar2,0x14e,wParam,0);
    }
    pLVar5 = pLVar5 + 2;
    wParam = wParam + 1;
  } while ((int)pLVar5 < 0x5b60a4);
  SfSetDlgItemText(param_1,0x48a,param_2 + 0x388);
  bEnable = ~*(uint *)(*(int *)(param_2 + 0x2c) + 0x38) >> 1 & 1;
  pHVar2 = GetDlgItem(param_1,0x9c6f);
  EnableWindow(pHVar2,bEnable);
  iVar1 = *(int *)(param_2 + 0x2c);
  pCVar9 = local_104;
  uVar10 = 0x104;
  uVar8 = *(undefined4 *)(iVar1 + 0x44);
  uVar7 = *(undefined4 *)(iVar1 + 0x40);
  uVar6 = FUN_004443a0(iVar1);
  FUN_0045aec0(uVar6,uVar7,uVar8,pCVar9,uVar10);
  SetDlgItemTextA(param_1,0x9d5c,local_104);
  FUN_0045b130(*(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x14),local_104,0x104);
  SetDlgItemTextA(param_1,0x9d5d,local_104);
  return;
}


