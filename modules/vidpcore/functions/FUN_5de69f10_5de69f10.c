/* Module: vidpcore.dll
   Function: FUN_5de69f10
   Address: 5de69f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5de69f10(int param_1,int param_2)

{
  HWND pHVar1;
  HWND hWnd;
  LPCSTR lpString;
  int iVar2;
  undefined4 uVar3;
  
  if (2 < param_2) {
    if (param_2 < 5) {
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd7);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xc9);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xca);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcb);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcd);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x569);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd2);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd3);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd4);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd5);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd6);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd8);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd1);
      ShowWindow(pHVar1,iVar2);
      if (param_2 != 3) {
        lpString = (LPCSTR)FUN_5deb7ce0(DAT_5df42778,0x506);
        pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd1);
        SetWindowTextA(pHVar1,lpString);
        return;
      }
      uVar3 = 0x505;
    }
    else {
      if (param_2 != 8) goto LAB_5de6a1b1;
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd7);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xc9);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xca);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcb);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcd);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x569);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd2);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd3);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd4);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd5);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd6);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 0;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd8);
      ShowWindow(pHVar1,iVar2);
      iVar2 = 1;
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd1);
      ShowWindow(pHVar1,iVar2);
      uVar3 = 0x507;
    }
    FUN_5deb7ce0(DAT_5df42778,uVar3);
    pHVar1 = *(HWND *)(param_1 + 0x30);
    hWnd = GetDlgItem(pHVar1,0xd1);
    SetWindowTextA(hWnd,(LPCSTR)pHVar1);
    return;
  }
LAB_5de6a1b1:
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd7);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xc9);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xca);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcb);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcd);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x569);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd1);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd2);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd3);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd4);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd5);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd6);
  ShowWindow(pHVar1,iVar2);
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd8);
  ShowWindow(pHVar1,iVar2);
  return;
}


