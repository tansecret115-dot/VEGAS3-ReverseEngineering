/* Module: sftrans1.dll
   Function: FUN_00495180
   Address: 00495180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00495180(int param_1)

{
  undefined **ppuVar1;
  HWND pHVar2;
  LPCWSTR lpWideCharStr;
  WPARAM wParam;
  WPARAM WVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  code *pcVar7;
  undefined **ppuVar8;
  WPARAM local_3c;
  WPARAM local_38;
  CHAR local_34 [12];
  CHAR local_28 [31];
  undefined1 local_9;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c3);
  pcVar7 = SendMessageA_exref;
  if (pHVar2 != (HWND)0x0) {
    lpWideCharStr = (LPCWSTR)(*(int *)(param_1 + 0x30) + 0x160);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,local_28,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x28) {
      local_28[0] = '\0';
    }
    pcVar7 = SendMessageA_exref;
    local_9 = 0;
    wParam = SendMessageA(pHVar2,0x14c,0xffffffff,(LPARAM)local_28);
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (wParam != WVar3) {
      SendMessageA(pHVar2,0x14e,wParam,0);
    }
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c7);
  if (pHVar2 != (HWND)0x0) {
    FUN_004d5f50(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0));
    iVar4 = (*pcVar7)(pHVar2,0x14c);
    if (iVar4 == -1) {
      SetWindowTextA(pHVar2,local_34);
    }
    else {
      iVar5 = (*pcVar7)(pHVar2,0x147);
      if (iVar4 != iVar5) {
        (*pcVar7)(pHVar2,0x14e);
      }
    }
  }
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6cf);
  if (pHVar2 != (HWND)0x0) {
    (*pcVar7)(pHVar2,0xa05);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6aa);
  if (pHVar2 != (HWND)0x0) {
    (*pcVar7)(pHVar2,0xf1);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6cd);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 4),0x6ce);
  FUN_00493b70(pHVar2,pHVar6,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c0),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c4),0,2000,0,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c9);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c8);
  FUN_00493b70(pHVar2,pHVar6,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c8),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1cc),0,2000,0,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d4);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d3);
  if ((*(int *)(*(int *)(param_1 + 0x30) + 0x1b8) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x30) + 0x2a8) == 1)) {
    FUN_00493b70(pHVar2,pHVar6,0,0,0,1000,0,0);
    EnableWindow(pHVar2,0);
    EnableWindow(pHVar6,0);
  }
  else {
    EnableWindow(pHVar2,1);
    EnableWindow(pHVar6,1);
    FUN_00493b70(pHVar2,pHVar6,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x68),
                 *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x6c),0,1000,0,0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6cc);
  local_38 = 0;
  if (pHVar2 != (HWND)0x0) {
    local_3c = 0;
    iVar4 = lstrcmpA(PTR_s_Spaces_00574600,"");
    if (iVar4 != 0) {
      ppuVar8 = &PTR_s_Spaces_00574600;
      do {
        iVar4 = wcscmp((wchar_t *)ppuVar8[1],(wchar_t *)(*(int *)(param_1 + 0x30) + 0x3c));
        if (iVar4 == 0) {
          local_38 = local_3c;
          break;
        }
        ppuVar1 = ppuVar8 + 2;
        ppuVar8 = ppuVar8 + 2;
        local_3c = local_3c + 1;
        iVar4 = lstrcmpA(*ppuVar1,"");
      } while (iVar4 != 0);
    }
  }
  SendMessageA(pHVar2,0x14e,local_38,0);
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  FUN_0052d290();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x6cb);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 4),0x6ca);
  FUN_00493b70(pHVar2,pHVar6,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1d0),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1d4),0,2000,0,0);
  return 1;
}


