/* Module: mcplug.dll
   Function: FUN_004113b0
   Address: 004113b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004113b0(void *this,HWND param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  int iVar5;
  int iVar6;
  HWND hWnd_00;
  int iVar7;
  int iVar8;
  HWND pHVar9;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND pHVar10;
  HWND pHVar11;
  HWND hWnd_04;
  HWND hWnd_05;
  HWND hWnd_06;
  LPSTR pCVar12;
  int unaff_EBX;
  HWND unaff_EBP;
  code *pcVar13;
  WPARAM WVar14;
  uint uVar15;
  BOOL BVar16;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (piVar1 == (int *)0x0) {
    return 0x80070057;
  }
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  hWnd = (HWND)piVar1[1];
  iVar4 = piVar1[3];
  iVar5 = piVar1[4];
  iVar6 = piVar1[0x103];
  hWnd_00 = (HWND)piVar1[0x100];
  iVar7 = piVar1[6];
  iVar8 = piVar1[7];
  pHVar9 = GetDlgItem(param_1,0x422);
  hWnd_01 = GetDlgItem(param_1,0x414);
  hWnd_02 = GetDlgItem(param_1,0x41e);
  hWnd_03 = GetDlgItem(param_1,0x415);
  pHVar10 = GetDlgItem(param_1,0x416);
  pHVar11 = GetDlgItem(param_1,0x417);
  GetDlgItem(param_1,0x420);
  hWnd_04 = GetDlgItem(param_1,0x418);
  hWnd_05 = GetDlgItem(param_1,0x419);
  hWnd_06 = GetDlgItem(param_1,0x41a);
  if (iVar6 != 0) {
    SendMessageA(pHVar9,0xf1,1,0);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x414);
    pcVar13 = EnableWindow_exref;
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x41e);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x415);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x416);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x417);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x420);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x418);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 1;
    pHVar9 = GetDlgItem(param_1,0x419);
    EnableWindow(pHVar9,BVar16);
  }
  else {
    SendMessageA(pHVar9,0xf1,0,0);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x414);
    pcVar13 = EnableWindow_exref;
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x41e);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x415);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x416);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x417);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x420);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x418);
    EnableWindow(pHVar9,BVar16);
    BVar16 = 0;
    pHVar9 = GetDlgItem(param_1,0x419);
    EnableWindow(pHVar9,BVar16);
  }
  uVar15 = (uint)(iVar6 != 0);
  pHVar9 = GetDlgItem(param_1,0x41a);
  (*pcVar13)(pHVar9,uVar15);
  SendMessageA(hWnd,0x14b,0,0);
  pCVar12 = FUN_00419470(DAT_00487a6c,4000);
  SendMessageA(hWnd,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0xfa1);
  SendMessageA(hWnd,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0xfa2);
  SendMessageA(hWnd,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0xfa3);
  SendMessageA(hWnd,0x143,0,(LPARAM)pCVar12);
  SendMessageA(unaff_EBP,0x14b,0,0);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x1004);
  SendMessageA(unaff_EBP,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x1005);
  SendMessageA(unaff_EBP,0x143,0,(LPARAM)pCVar12);
  SendMessageA(hWnd_02,0x14b,0,0);
  pCVar12 = FUN_00419470(DAT_00487a6c,0xfd2);
  SendMessageA(hWnd_02,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0xfd3);
  SendMessageA(hWnd_02,0x143,0,(LPARAM)pCVar12);
  SendMessageA(hWnd_03,0x14b,0,0);
  if (unaff_EBX == 1) {
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1036);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1037);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1038);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1039);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103a);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103b);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103c);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103d);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103e);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x103f);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1040);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1041);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1042);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    uVar15 = 0x1043;
  }
  else {
    if (unaff_EBX != 2) {
      return 0x80004005;
    }
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1068);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1069);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106a);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106b);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106c);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106d);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106e);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x106f);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1070);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1071);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1072);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1073);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    pCVar12 = FUN_00419470(DAT_00487a6c,0x1074);
    SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
    uVar15 = 0x1075;
  }
  pCVar12 = FUN_00419470(DAT_00487a6c,uVar15);
  SendMessageA(hWnd_03,0x143,0,(LPARAM)pCVar12);
  SendMessageA(hWnd_01,0x14b,0,0);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x109a);
  SendMessageA(hWnd_01,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x109b);
  SendMessageA(hWnd_01,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x109c);
  SendMessageA(hWnd_01,0x143,0,(LPARAM)pCVar12);
  SendMessageA(hWnd_06,0x14b,0,0);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x10b3);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x10b4);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar12);
  pCVar12 = FUN_00419470(DAT_00487a6c,0x10b5);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar12);
  switch(pHVar10) {
  case (HWND)0x0:
    WVar14 = 0;
    break;
  case (HWND)0x1:
    WVar14 = 1;
    break;
  case (HWND)0x2:
    WVar14 = 2;
    break;
  case (HWND)0x3:
    WVar14 = 3;
    break;
  default:
    goto switchD_00411ac5_default;
  }
  SendMessageA(hWnd,0x14e,WVar14,0);
  SendMessageA(unaff_EBP,0x14e,(WPARAM)((int)&pHVar11[-1].unused + 3),0);
  SendMessageA(hWnd_02,0x14e,unaff_EBX - 1,0);
  SendMessageA(hWnd_03,0x14e,iVar2 - 1,0);
  if (iVar3 == 0) {
    WVar14 = 0;
  }
  else if (iVar3 == 1) {
    WVar14 = 1;
  }
  else {
    if (iVar3 != 3) {
      return 0x80004005;
    }
    WVar14 = 2;
  }
  SendMessageA(hWnd_01,0x14e,WVar14,0);
  if (iVar4 == 32000) {
    WVar14 = 0;
  }
  else if (iVar4 == 0xac44) {
    WVar14 = 1;
  }
  else {
    if (iVar4 != 48000) {
switchD_00411ac5_default:
      return 0x80004005;
    }
    WVar14 = 2;
  }
  SendMessageA(hWnd_06,0x14e,WVar14,0);
  SendMessageA(hWnd_00,0xf1,(uint)(iVar5 != 0),0);
  SendMessageA(hWnd_04,0xf1,(uint)(iVar7 != 0),0);
  SendMessageA(hWnd_05,0xf1,(uint)(iVar8 != 0),0);
  return 0;
}


