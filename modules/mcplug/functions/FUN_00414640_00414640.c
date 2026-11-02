/* Module: mcplug.dll
   Function: FUN_00414640
   Address: 00414640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00414640(void *this,HWND param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
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
  LPSTR pCVar21;
  WPARAM WVar22;
  uchar local_40 [64];
  
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar2 == 0) {
    return 0x80070057;
  }
  iVar3 = *(int *)(iVar2 + 0x90);
  iVar4 = *(int *)(iVar2 + 0x408);
  uVar5 = *(uint *)(iVar2 + 0xa8);
  iVar6 = *(int *)(iVar2 + 0x94);
  iVar7 = *(int *)(iVar2 + 0x288);
  iVar8 = *(int *)(iVar2 + 0x2b0);
  uVar9 = *(uint *)(iVar2 + 0x228);
  iVar10 = *(int *)(iVar2 + 0x3e9);
  uVar11 = *(uint *)(iVar2 + 0x2b4);
  uVar12 = *(uint *)(iVar2 + 0x22c);
  cVar1 = *(char *)(iVar2 + 0x3bc);
  uVar13 = *(uint *)(iVar2 + 0x2b8);
  uVar14 = *(uint *)(iVar2 + 0x78);
  iVar15 = *(int *)(iVar2 + 0x3dd);
  iVar16 = *(int *)(iVar2 + 0x58);
  iVar17 = *(int *)(iVar2 + 0x70);
  iVar18 = *(int *)(iVar2 + 0x74);
  iVar19 = *(int *)(iVar2 + 0x48);
  iVar20 = *(int *)(iVar2 + 0x84);
  iVar2 = *(int *)(iVar2 + 0x8c);
  hWnd = GetDlgItem(param_1,0x42e);
  hWnd_00 = GetDlgItem(param_1,0x425);
  hWnd_01 = GetDlgItem(param_1,0x423);
  hWnd_02 = GetDlgItem(param_1,0x424);
  hWnd_03 = GetDlgItem(param_1,0x426);
  hWnd_04 = GetDlgItem(param_1,0x431);
  hWnd_05 = GetDlgItem(param_1,0x432);
  hWnd_06 = GetDlgItem(param_1,0x415);
  hWnd_07 = GetDlgItem(param_1,0x416);
  hWnd_08 = GetDlgItem(param_1,0x417);
  hWnd_09 = GetDlgItem(param_1,0x42f);
  hWnd_10 = GetDlgItem(param_1,0x418);
  hWnd_11 = GetDlgItem(param_1,0x42b);
  if (iVar4 == 0) {
    EnableWindow(hWnd,0);
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
    hWnd_03 = hWnd_10;
LAB_00414917:
    EnableWindow(hWnd_03,0);
  }
  else {
    EnableWindow(hWnd,1);
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
    if ((*(int *)((int)this + 0x5c) == 0) && ((iVar3 == 0 || (iVar3 == 1)))) {
      EnableWindow(hWnd,0);
      EnableWindow(hWnd_04,0);
      EnableWindow(hWnd_05,0);
      EnableWindow(hWnd_01,0);
      EnableWindow(hWnd_02,0);
      goto LAB_00414917;
    }
  }
  if (*(int *)((int)this + 0x5c) != 1) {
    SendMessageA(hWnd,0x14b,0,0);
    pCVar21 = FUN_00419470(DAT_00487a6c,0x1194);
    SendMessageA(hWnd,0x143,0,(LPARAM)pCVar21);
    pCVar21 = FUN_00419470(DAT_00487a6c,0x1195);
    SendMessageA(hWnd,0x143,0,(LPARAM)pCVar21);
    pCVar21 = FUN_00419470(DAT_00487a6c,0x1196);
    SendMessageA(hWnd,0x143,0,(LPARAM)pCVar21);
  }
  SendMessageA(hWnd_06,0x14b,0,0);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x1518);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x1519);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x151a);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x151b);
  SendMessageA(hWnd_06,0x143,0,(LPARAM)pCVar21);
  SendMessageA(hWnd_07,0x14b,0,0);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x154a);
  SendMessageA(hWnd_07,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x154b);
  SendMessageA(hWnd_07,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x154c);
  SendMessageA(hWnd_07,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x154d);
  SendMessageA(hWnd_07,0x143,0,(LPARAM)pCVar21);
  SendMessageA(hWnd_08,0x14b,0,0);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x157c);
  SendMessageA(hWnd_08,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x157d);
  SendMessageA(hWnd_08,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x157e);
  SendMessageA(hWnd_08,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x157f);
  SendMessageA(hWnd_08,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x1580);
  SendMessageA(hWnd_08,0x143,0,(LPARAM)pCVar21);
  SendMessageA(hWnd_10,0x14b,0,0);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x14e6);
  SendMessageA(hWnd_10,0x143,0,(LPARAM)pCVar21);
  pCVar21 = FUN_00419470(DAT_00487a6c,0x14e7);
  SendMessageA(hWnd_10,0x143,0,(LPARAM)pCVar21);
  if (*(int *)((int)this + 0x5c) != 1) {
    if (iVar6 == 0) {
      WVar22 = 0;
    }
    else if (iVar6 == 1) {
      WVar22 = 1;
    }
    else {
      if (iVar6 != 2) {
        return 0x80004005;
      }
      WVar22 = 2;
    }
    SendMessageA(hWnd,0x14e,WVar22,0);
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((int)cVar1 & 0xfffffffe) {
  case 0:
    WVar22 = 0;
    break;
  default:
    goto switchD_00414bd5_caseD_1;
  case 2:
    WVar22 = 1;
    break;
  case 4:
    WVar22 = 2;
    break;
  case 8:
    WVar22 = 3;
    break;
  case 0x10:
    WVar22 = 4;
  }
  SendMessageA(hWnd_08,0x14e,WVar22,0);
  if (iVar15 == 0) {
    WVar22 = 0;
  }
  else {
    if (iVar15 != 1) {
switchD_00414bd5_caseD_1:
                    /* WARNING: This code block may not be properly labeled as switch case */
      return 0x80004005;
    }
    WVar22 = 1;
  }
  SendMessageA(hWnd_10,0x14e,WVar22,0);
  if (*(int *)((int)this + 0x5c) != 1) {
    CheckDlgButton(param_1,0x423,(uint)(iVar8 != 0));
    CheckDlgButton(param_1,0x424,(uint)(iVar7 != 0));
    CheckDlgButton(param_1,0x426,(uint)(iVar10 != 0));
  }
  CheckDlgButton(param_1,0x42f,(uint)(((int)cVar1 & 1U) != 0));
  CheckDlgButton(param_1,0x430,(uint)(iVar16 != 0));
  CheckDlgButton(param_1,0x42a,(uint)(iVar17 != 0));
  CheckDlgButton(param_1,0x428,(uint)(iVar18 != 0));
  CheckDlgButton(param_1,0x429,(uint)(iVar19 != 0));
  CheckDlgButton(param_1,0x42c,(uint)(iVar20 != 0));
  CheckDlgButton(param_1,0x42d,(uint)(iVar2 != 0));
  FUN_0042f8b0(uVar5,local_40,0);
  SetWindowTextA(hWnd_00,(LPCSTR)local_40);
  if (*(int *)((int)this + 0x5c) != 1) {
    FUN_0042f8b0(uVar9,local_40,0);
    SetWindowTextA(hWnd_04,(LPCSTR)local_40);
    FUN_0042f8b0(uVar12,local_40,0);
    SetWindowTextA(hWnd_05,(LPCSTR)local_40);
  }
  FUN_0042f8b0(uVar11,local_40,0);
  SetWindowTextA(hWnd_06,(LPCSTR)local_40);
  FUN_0042f8b0(uVar13,local_40,0);
  SetWindowTextA(hWnd_07,(LPCSTR)local_40);
  FUN_0042f8b0(uVar14,local_40,0);
  SetWindowTextA(hWnd_11,(LPCSTR)local_40);
  return 0;
}


