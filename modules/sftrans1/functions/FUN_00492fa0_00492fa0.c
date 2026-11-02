/* Module: sftrans1.dll
   Function: FUN_00492fa0
   Address: 00492fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00492fa0(int param_1)

{
  HWND pHVar1;
  WPARAM wParam;
  WPARAM WVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_38;
  undefined4 local_34;
  CHAR local_30 [20];
  CHAR local_1c [24];
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b5);
  if (pHVar1 != (HWND)0x0) {
    wParam = SendMessageA(pHVar1,0x14c,0xffffffff,
                          (LPARAM)(&PTR_s_Scrolling_Credits_005745f0)
                                  [*(int *)(*(int *)(param_1 + 0x30) + 8)]);
    WVar2 = SendMessageA(pHVar1,0x147,0,0);
    if (wParam != WVar2) {
      SendMessageA(pHVar1,0x14e,wParam,0);
    }
  }
  FUN_00486140(*(undefined4 *)(*(int *)(param_1 + 0x30) + 8));
  iVar3 = FUN_00485e60(*(undefined4 *)(param_1 + 0x2c));
  bVar5 = *(int *)(iVar3 + 0x10) != 0xe9;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b8);
  if (pHVar1 != (HWND)0x0) {
    if (bVar5) {
      local_38 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x28);
      local_34 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2c);
    }
    else {
      local_38 = 0;
      local_34 = 0x3fe00000;
    }
    iVar3 = *(int *)(param_1 + 0x30);
    FUN_00491e30(pHVar1,*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c),
                 *(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24),local_38,local_34);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b6);
  if (pHVar1 != (HWND)0x0) {
    FUN_004c6ae0(local_30,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18),
                 *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c));
    SendMessageA(pHVar1,0xd,0x14,(LPARAM)local_1c);
    iVar3 = lstrcmpA(local_30,local_1c);
    if (iVar3 != 0) {
      SendMessageA(pHVar1,0xc,0,(LPARAM)local_30);
    }
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d1);
  if (pHVar1 != (HWND)0x0) {
    FUN_004c6ae0(local_30,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24));
    SendMessageA(pHVar1,0xd,0x14,(LPARAM)local_1c);
    iVar3 = lstrcmpA(local_30,local_1c);
    if (iVar3 != 0) {
      SendMessageA(pHVar1,0xc,0,(LPARAM)local_30);
    }
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b7);
  if (pHVar1 != (HWND)0x0) {
    if (bVar5) {
      EnableWindow(pHVar1,1);
      FUN_004c6ae0(local_30,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x28),
                   *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2c));
      SendMessageA(pHVar1,0xd,0x14,(LPARAM)local_1c);
      iVar3 = lstrcmpA(local_30,local_1c);
      if (iVar3 != 0) {
        SendMessageA(pHVar1,0xc,0,(LPARAM)local_30);
      }
    }
    else {
      EnableWindow(pHVar1,0);
    }
    InvalidateRect(pHVar1,(RECT *)0x0,0);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d2);
  if (pHVar1 != (HWND)0x0) {
    if (bVar5) {
      EnableWindow(pHVar1,1);
    }
    else {
      EnableWindow(pHVar1,0);
      SetActiveWindow(*(HWND *)(param_1 + 4));
    }
    InvalidateRect(pHVar1,(RECT *)0x0,0);
  }
  iVar3 = 0;
  if (0 < **(int **)(param_1 + 0x28)) {
    do {
      piVar4 = (int *)FUN_00485e60(iVar3);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < **(int **)(param_1 + 0x28));
  }
  return 1;
}


