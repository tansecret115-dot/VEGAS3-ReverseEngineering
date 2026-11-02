/* Module: mcplug.dll
   Function: FUN_004137c0
   Address: 004137c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004137c0(void *this,HWND param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  WPARAM wParam;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND hWnd_04;
  HWND hWnd_05;
  HWND hWnd_06;
  HWND hWnd_07;
  HWND hWnd_08;
  HWND hWnd_09;
  HWND hWnd_10;
  HWND hWnd_11;
  HWND hWnd_12;
  HWND hWnd_13;
  HWND hWnd_14;
  HWND hWnd_15;
  HWND hWnd_16;
  LPSTR pCVar11;
  WPARAM WVar12;
  BOOL bEnable;
  uint uVar13;
  uchar local_40 [64];
  
  if (*(int *)((int)this + 0x5c) == 1) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  iVar2 = *(int *)(iVar1 + 0x90);
  iVar3 = *(int *)(iVar1 + 0x408);
  iVar4 = *(int *)(iVar1 + 0xf4);
  iVar5 = *(int *)(iVar1 + 0x24c);
  iVar6 = *(int *)(iVar1 + 0x230);
  WVar12 = *(WPARAM *)(iVar1 + 0x244);
  wParam = *(WPARAM *)(iVar1 + 0x218);
  iVar7 = *(int *)(iVar1 + 0x21c);
  iVar8 = *(int *)(iVar1 + 0x220);
  iVar9 = *(int *)(iVar1 + 0x224);
  iVar10 = *(int *)(iVar1 + 0xe4);
  hWnd = GetDlgItem(param_1,0x42e);
  hWnd_00 = GetDlgItem(param_1,1099);
  hWnd_01 = GetDlgItem(param_1,0x46f);
  hWnd_02 = GetDlgItem(param_1,0x451);
  hWnd_03 = GetDlgItem(param_1,0x425);
  hWnd_04 = GetDlgItem(param_1,0x452);
  hWnd_05 = GetDlgItem(param_1,0x453);
  hWnd_06 = GetDlgItem(param_1,0x428);
  hWnd_07 = GetDlgItem(param_1,0x45a);
  hWnd_08 = GetDlgItem(param_1,0x454);
  hWnd_09 = GetDlgItem(param_1,0x429);
  hWnd_10 = GetDlgItem(param_1,0x45c);
  hWnd_11 = GetDlgItem(param_1,0x44a);
  hWnd_12 = GetDlgItem(param_1,0x418);
  hWnd_13 = GetDlgItem(param_1,0x41b);
  hWnd_14 = GetDlgItem(param_1,0x41c);
  hWnd_15 = GetDlgItem(param_1,0x41e);
  hWnd_16 = GetDlgItem(param_1,0x471);
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar3 == 0)) {
    EnableWindow(hWnd_00,0);
    EnableWindow(hWnd_01,0);
    EnableWindow(hWnd_02,0);
    EnableWindow(hWnd_03,0);
    EnableWindow(hWnd_04,0);
    EnableWindow(hWnd_05,0);
    EnableWindow(hWnd_06,0);
    EnableWindow(hWnd_07,0);
    EnableWindow(hWnd_08,0);
    EnableWindow(hWnd_09,0);
    EnableWindow(hWnd_10,0);
    EnableWindow(hWnd_11,0);
    EnableWindow(hWnd_12,0);
    EnableWindow(hWnd_13,0);
    EnableWindow(hWnd_14,0);
    if (iVar3 == 0) {
      EnableWindow(hWnd,0);
      EnableWindow(hWnd_15,0);
      bEnable = 0;
      goto LAB_00413ac9;
    }
  }
  else {
    EnableWindow(hWnd_00,1);
    EnableWindow(hWnd_01,1);
    EnableWindow(hWnd_02,1);
    EnableWindow(hWnd_03,1);
    EnableWindow(hWnd_04,1);
    EnableWindow(hWnd_05,1);
    EnableWindow(hWnd_06,1);
    EnableWindow(hWnd_07,1);
    EnableWindow(hWnd_08,1);
    EnableWindow(hWnd_09,1);
    EnableWindow(hWnd_10,1);
    EnableWindow(hWnd_11,1);
    EnableWindow(hWnd_12,1);
    EnableWindow(hWnd_13,1);
    EnableWindow(hWnd_14,1);
    EnableWindow(hWnd,1);
    EnableWindow(hWnd_15,1);
    bEnable = 1;
LAB_00413ac9:
    EnableWindow(hWnd_16,bEnable);
  }
  SendMessageA(hWnd_11,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x14b4);
  SendMessageA(hWnd_11,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x14b5);
  SendMessageA(hWnd_11,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x14b6);
  SendMessageA(hWnd_11,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x14b7);
  SendMessageA(hWnd_11,0x143,0,(LPARAM)pCVar11);
  SendMessageA(hWnd_12,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13ec);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13ed);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13ee);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13ef);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13f0);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x13f1);
  SendMessageA(hWnd_12,0x143,0,(LPARAM)pCVar11);
  SendMessageA(hWnd_13,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x141e);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x141f);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1420);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1421);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1422);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1423);
  SendMessageA(hWnd_13,0x143,0,(LPARAM)pCVar11);
  SendMessageA(hWnd_14,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1450);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1451);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1452);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1453);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1454);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1455);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1456);
  SendMessageA(hWnd_14,0x143,0,(LPARAM)pCVar11);
  SendMessageA(hWnd_15,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1482);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1483);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1484);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1485);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1486);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1487);
  SendMessageA(hWnd_15,0x143,0,(LPARAM)pCVar11);
  SendMessageA(hWnd_16,0x14b,0,0);
  pCVar11 = FUN_00419470(DAT_00487a6c,0x1356);
  SendMessageA(hWnd_16,0x143,0,(LPARAM)pCVar11);
  if ((*(int *)(iVar1 + 0x90) == 0) || (*(int *)(iVar1 + 0x90) == 1)) {
    uVar13 = 0x1357;
LAB_00413f3d:
    pCVar11 = FUN_00419470(DAT_00487a6c,uVar13);
  }
  else {
    switch(*(undefined4 *)(iVar1 + 0xfc)) {
    case 4:
      uVar13 = 0x1358;
      break;
    default:
      goto switchD_00413ee4_caseD_5;
    case 6:
      uVar13 = 0x1359;
      goto LAB_00413f3d;
    case 8:
      pCVar11 = FUN_00419470(DAT_00487a6c,0x135a);
      goto LAB_00413f56;
    case 10:
      uVar13 = 0x135b;
    }
    pCVar11 = FUN_00419470(DAT_00487a6c,uVar13);
  }
LAB_00413f56:
  SendMessageA(hWnd_16,0x143,0,(LPARAM)pCVar11);
switchD_00413ee4_caseD_5:
  if ((((int)WVar12 < 4) && (-1 < (int)WVar12)) &&
     ((SendMessageA(hWnd_11,0x14e,WVar12,0), (int)wParam < 6 && (-1 < (int)wParam)))) {
    SendMessageA(hWnd_12,0x14e,wParam,0);
    switch(iVar7) {
    case 1:
    case 2:
      WVar12 = iVar7 - 1;
      break;
    default:
      goto switchD_00413fb8_caseD_3;
    case 4:
    case 5:
    case 6:
    case 7:
      WVar12 = iVar7 - 2;
    }
    SendMessageA(hWnd_13,0x14e,WVar12,0);
    switch(iVar8) {
    case 1:
    case 2:
      WVar12 = iVar8 - 1;
      break;
    default:
      goto switchD_00413fb8_caseD_3;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      WVar12 = iVar8 - 2;
    }
    SendMessageA(hWnd_14,0x14e,WVar12,0);
    switch(iVar9) {
    case 1:
    case 2:
      WVar12 = iVar9 - 1;
      break;
    default:
      goto switchD_00413fb8_caseD_3;
    case 4:
    case 5:
    case 6:
    case 7:
      WVar12 = iVar9 - 2;
    }
    SendMessageA(hWnd_15,0x14e,WVar12,0);
    CheckDlgButton(param_1,0x42e,(uint)(iVar4 != 0));
    CheckDlgButton(param_1,1099,(uint)(iVar5 != 0));
    CheckDlgButton(param_1,0x46f,(uint)(iVar6 != 0));
    CheckDlgButton(param_1,0x451,(uint)(*(int *)(iVar1 + 0x264) != 0));
    CheckDlgButton(param_1,0x425,(uint)(*(int *)(iVar1 + 0x268) != 0));
    CheckDlgButton(param_1,0x452,(uint)(*(int *)(iVar1 + 0x26c) != 0));
    CheckDlgButton(param_1,0x453,(uint)(*(int *)(iVar1 + 0x270) != 0));
    CheckDlgButton(param_1,0x428,(uint)(*(int *)(iVar1 + 0x274) != 0));
    CheckDlgButton(param_1,0x45a,(uint)(*(int *)(iVar1 + 0x278) != 0));
    CheckDlgButton(param_1,0x454,(uint)(*(int *)(iVar1 + 0x27c) != 0));
    CheckDlgButton(param_1,0x429,(uint)(*(int *)(iVar1 + 0x280) != 0));
    CheckDlgButton(param_1,0x45c,(uint)(*(int *)(iVar1 + 0x284) != 0));
    FUN_0042f8b0(iVar10 * 2,local_40,0);
    SetWindowTextA(hWnd_16,(LPCSTR)local_40);
    return 0;
  }
switchD_00413fb8_caseD_3:
  return 0x80004005;
}


