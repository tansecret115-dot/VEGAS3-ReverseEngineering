/* Module: vfplugs.dll
   Function: FUN_004114f0
   Address: 004114f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004114f0(int param_1)

{
  int *lParam;
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  HWND hWnd;
  HDC hdc;
  WPARAM WVar5;
  LPSTR pCVar6;
  int *unaff_EBP;
  int iStack_28;
  int *local_24;
  int local_20;
  undefined4 auStack_1c [3];
  LPSTR pCStack_10;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_24 = (int *)0x0;
  local_20 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486aa0,&local_24);
  }
  FUN_00428f80(*(HWND *)(param_1 + 0x30),(HFONT)0x0);
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x490);
  uVar3 = SendMessageA(pHVar2,0x43b,0,0);
  SendMessageA(pHVar2,0x445,0,uVar3 | 2);
  SendMessageA(pHVar2,0xc,0,0);
  SendMessageA(pHVar2,0x459,1,0);
  lParam = (int *)(param_1 + 0x30c);
  iVar4 = FUN_0044c3d0(lParam,0x3c,-1,-1,0x40000004);
  if (iVar4 < 0) {
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))(local_24);
    }
    return 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4a8);
  if (hWnd != (HWND)0x0) {
    hdc = GetDC(pHVar2);
    EnumFontFamiliesA(hdc,(LPCSTR)0x0,(FONTENUMPROCA)&LAB_00411450,(LPARAM)lParam);
    ReleaseDC(*(HWND *)(local_20 + 0x30),hdc);
    iVar4 = 0;
    if ((int *)*lParam == (int *)0x0) {
      iStack_28 = 0;
    }
    else {
      iStack_28 = *(int *)*lParam;
    }
    if (0 < iStack_28) {
      do {
        SendMessageA(hWnd,0x143,0,*(int *)(*lParam + 4) * iVar4 + 0x1c + *(int *)(*lParam + 8));
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_28);
    }
    iVar4 = 0;
    if (0 < iStack_28) {
      do {
        WVar5 = SendMessageA(hWnd,0x14c,0xffffffff,
                             *(int *)(*lParam + 4) * iVar4 + 0x1c + *(int *)(*lParam + 8));
        if (WVar5 != 0xffffffff) {
          SendMessageA(hWnd,0x151,WVar5,iVar4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_28);
    }
  }
  iVar4 = local_20;
  pHVar2 = GetDlgItem(*(HWND *)(local_20 + 0x30),0x4b6);
  if (pHVar2 != (HWND)0x0) {
    WVar5 = SendMessageA(pHVar2,0x143,0,0x48810c);
    SendMessageA(pHVar2,0x151,WVar5,4);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x488108);
    SendMessageA(pHVar2,0x151,WVar5,8);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x488104);
    SendMessageA(pHVar2,0x151,WVar5,10);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x488100);
    SendMessageA(pHVar2,0x151,WVar5,0xf);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880fc);
    SendMessageA(pHVar2,0x151,WVar5,0x14);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880f8);
    SendMessageA(pHVar2,0x151,WVar5,0x19);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880f4);
    SendMessageA(pHVar2,0x151,WVar5,0x1e);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880f0);
    SendMessageA(pHVar2,0x151,WVar5,0x23);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880ec);
    SendMessageA(pHVar2,0x151,WVar5,0x28);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880e8);
    SendMessageA(pHVar2,0x151,WVar5,0x2d);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880e4);
    SendMessageA(pHVar2,0x151,WVar5,0x32);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880e0);
    SendMessageA(pHVar2,0x151,WVar5,0x3c);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880dc);
    SendMessageA(pHVar2,0x151,WVar5,0x46);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880d8);
    SendMessageA(pHVar2,0x151,WVar5,0x50);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880d4);
    SendMessageA(pHVar2,0x151,WVar5,0x5a);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880d0);
    SendMessageA(pHVar2,0x151,WVar5,100);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880cc);
    SendMessageA(pHVar2,0x151,WVar5,0x7d);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880c8);
    SendMessageA(pHVar2,0x151,WVar5,0x96);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880c4);
    SendMessageA(pHVar2,0x151,WVar5,0xaf);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880c0);
    SendMessageA(pHVar2,0x151,WVar5,200);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880bc);
    SendMessageA(pHVar2,0x151,WVar5,0xe1);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880b8);
    SendMessageA(pHVar2,0x151,WVar5,0xfa);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880b4);
    SendMessageA(pHVar2,0x151,WVar5,0x113);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880b0);
    SendMessageA(pHVar2,0x151,WVar5,300);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880ac);
    SendMessageA(pHVar2,0x151,WVar5,0x15e);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x4880a8);
    SendMessageA(pHVar2,0x151,WVar5,400);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x4a9);
  if (pHVar2 != (HWND)0x0) {
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x34);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,0);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x35);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,1);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x36);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,2);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x37);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,3);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x4be);
  if (pHVar2 != (HWND)0x0) {
    auStack_1c[0] = 3;
    uStack_8 = 0xffffffff;
    pCStack_10 = FUN_0042ccd0(DAT_00494520,0x38);
    SendMessageA(pHVar2,0x1307,0,(LPARAM)auStack_1c);
    pCStack_10 = FUN_0042ccd0(DAT_00494520,0x39);
    SendMessageA(pHVar2,0x1307,1,(LPARAM)auStack_1c);
    pCStack_10 = FUN_0042ccd0(DAT_00494520,0x3a);
    SendMessageA(pHVar2,0x1307,2,(LPARAM)auStack_1c);
    pCStack_10 = FUN_0042ccd0(DAT_00494520,0x3b);
    SendMessageA(pHVar2,0x1307,3,(LPARAM)auStack_1c);
    SendMessageA(pHVar2,0x130c,0,0);
    FUN_004112f0(iVar4);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x519);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x518);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x51c);
  if (pHVar2 != (HWND)0x0) {
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x3c);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,0);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x3d);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,1);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x3e);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,2);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x51b);
  if (pHVar2 != (HWND)0x0) {
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x3f);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,0);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x3d);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,1);
    pCVar6 = FUN_0042ccd0(DAT_00494520,0x40);
    WVar5 = SendMessageA(pHVar2,0x143,0,(LPARAM)pCVar6);
    SendMessageA(pHVar2,0x151,WVar5,2);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x5e1);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x5e3);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x5e4);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x642);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  pHVar2 = GetDlgItem(*(HWND *)(iVar4 + 0x30),0x643);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x60e,0,0);
    SendMessageA(pHVar2,0x60f,0,200);
  }
  FUN_00411d10(iVar4);
  (**(code **)(*local_24 + 0x28))(local_24,*(undefined4 *)(iVar4 + 0x30),0x700);
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return 1;
}


