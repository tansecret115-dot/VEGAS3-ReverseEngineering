/* Module: vidcap30.exe
   Function: FUN_0045aa80
   Address: 0045aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045aa80(HWND param_1,LPCSTR param_2)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  HWND pHVar5;
  HANDLE h;
  HFONT wParam;
  int iVar6;
  code *pcVar7;
  
  pHVar1 = GetDlgItem(param_1,0x9c43);
  iVar2 = FUN_0042e510(*(undefined4 *)(param_2 + 0x104));
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00443740(*(undefined4 *)(param_2 + 0x104),iVar6);
      SendMessageA(pHVar1,0x143,0,*(LPARAM *)(iVar3 + 0xc));
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  SetWindowTextA(pHVar1,param_2);
  pHVar4 = GetForegroundWindow();
  pHVar4 = GetParent(pHVar4);
  pHVar5 = GetParent(pHVar4);
  if ((pHVar4 == DAT_005ba4bc) || (pHVar5 == DAT_005ba4bc)) {
    CheckRadioButton(param_1,0x4f1,0x4f3,0x4f1);
    pcVar7 = GetDlgItem_exref;
    pHVar1 = GetDlgItem(param_1,0x4f1);
    EnableWindow(pHVar1,0);
    pHVar1 = GetDlgItem(param_1,0x4f2);
    EnableWindow(pHVar1,0);
    pHVar1 = GetDlgItem(param_1,0x4f3);
    EnableWindow(pHVar1,0);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x108);
    if (iVar2 == 0) {
      pHVar1 = (HWND)0x4f1;
    }
    else if (iVar2 == 1) {
      pHVar1 = (HWND)0x4f2;
    }
    else if (iVar2 == 2) {
      pHVar1 = (HWND)0x4f3;
    }
    CheckRadioButton(param_1,0x4f1,0x4f3,(int)pHVar1);
    pcVar7 = GetDlgItem_exref;
  }
  pHVar1 = (HWND)(*pcVar7)(param_1,0x506);
  h = (HANDLE)SendMessageA(pHVar1,0x31,0,0);
  GetObjectA(h,0x3c,&stack0xffffffbc);
  wParam = CreateFontIndirectA((LOGFONTA *)&stack0xffffffbc);
  *(HFONT *)(param_2 + 0x10c) = wParam;
  SendMessageA(pHVar1,0x30,(WPARAM)wParam,0);
  _SfWndCenter_16(param_1,0,0,0x8001);
  SetWindowLongA(param_1,8,(LONG)param_2);
  return;
}


