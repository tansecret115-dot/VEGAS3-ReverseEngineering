/* Module: vegas30k.dll
   Function: FUN_01139380
   Address: 01139380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01139380(LPRECT param_1)

{
  int iVar1;
  undefined4 wParam;
  LONG LVar2;
  int *piVar3;
  HWND pHVar4;
  HWND hWnd;
  int iVar5;
  int iVar6;
  HWND unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar7;
  code *pcVar8;
  LPRECT ptVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piStack_39c;
  int iStack_380;
  undefined1 auStack_37c [12];
  int iStack_370;
  tagRECT tStack_36c;
  tagRECT tStack_35c;
  tagRECT tStack_34c;
  undefined4 auStack_334 [3];
  undefined1 auStack_328 [12];
  CHAR *pCStack_31c;
  int *piStack_310;
  CHAR aCStack_30c [244];
  undefined1 auStack_218 [11];
  undefined1 uStack_20d;
  WCHAR aWStack_20c [262];
  
  piStack_39c = (int *)0x113939a;
  LVar2 = GetWindowLongA((HWND)param_1,8);
  piVar3 = *(int **)(LVar2 + 4);
  piStack_39c = piVar3;
  (**(code **)(*piVar3 + 0x70))();
  pcVar8 = GetDlgItem_exref;
  auStack_37c._4_4_ = GetDlgItem((HWND)param_1,0x430);
  iVar10 = piVar3[0xe7];
  auStack_37c._0_4_ = 0;
  iStack_380 = 0;
  auStack_37c._8_4_ = 0;
  iVar11 = 0;
  while (iVar10 != 0) {
    piVar3 = calloc(1,0x10);
    (**(code **)(**(int **)(iVar10 + 0x218) + 0x30))(*(int **)(iVar10 + 0x218),piVar3,piVar3 + 1);
    piVar3[3] = iVar10;
    puVar7 = auStack_334;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    auStack_334[0] = 9;
    (**(code **)(**(int **)(iVar10 + 0x218) + 0x28))(*(int **)(iVar10 + 0x218),auStack_218);
    if ((&stack0x00000000 == (undefined1 *)0x20c) || (aWStack_20c[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_20c,-1,aCStack_30c,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x30c) {
      aCStack_30c[0] = '\0';
    }
    wParam = auStack_37c._8_4_;
    pCStack_31c = aCStack_30c;
    auStack_37c._8_4_ = auStack_37c._8_4_ + 1;
    uStack_20d = 0;
    piStack_310 = piVar3;
    SendMessageA((HWND)auStack_37c._4_4_,0x1307,wParam,(LPARAM)auStack_328);
    iVar5 = piVar3[1];
    iVar10 = *(int *)(iVar10 + 0x224);
    if (0 < iVar5) {
      iVar12 = *(int *)(*piVar3 + 8);
      iVar1 = *(int *)(*piVar3 + 0xc);
      iVar6 = iVar5;
      do {
        if (iStack_380 <= iVar12) {
          iStack_380 = iVar12;
        }
        if ((int)auStack_37c._0_4_ <= iVar1) {
          auStack_37c._0_4_ = iVar1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    pcVar8 = GetDlgItem_exref;
    if (iVar11 <= iVar5) {
      iVar11 = iVar5;
    }
  }
  SetRectEmpty(&tStack_36c);
  if (1 < iVar11) {
    pHVar4 = (HWND)(*pcVar8)(param_1,0x436);
    GetWindowRect(pHVar4,&tStack_36c);
    auStack_37c._8_4_ = tStack_36c.left;
    iStack_370 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)(auStack_37c + 8));
    SendMessageA(pHVar4,0x1328,0,(LPARAM)&tStack_36c);
    tStack_36c.right = tStack_36c.left + iStack_380;
    tStack_36c.bottom = tStack_36c.top + auStack_37c._0_4_;
    SendMessageA(pHVar4,0x1328,1,(LPARAM)&tStack_36c);
    SetWindowPos(pHVar4,(HWND)0x0,0,0,tStack_36c.right - tStack_36c.left,
                 tStack_36c.bottom - tStack_36c.top,6);
    GetWindowRect(pHVar4,&tStack_36c);
    auStack_37c._8_4_ = tStack_36c.left;
    auStack_37c._0_4_ = tStack_36c.bottom - tStack_36c.top;
    iStack_370 = tStack_36c.top;
    SetParent(pHVar4,(HWND)auStack_37c._4_4_);
    ScreenToClient((HWND)auStack_37c._4_4_,(LPPOINT)(auStack_37c + 8));
    SetWindowPos(pHVar4,(HWND)0x0,auStack_37c._8_4_,iStack_370,0,0,5);
    pcVar8 = GetDlgItem_exref;
  }
  ptVar9 = param_1;
  pHVar4 = (HWND)(*pcVar8)(param_1,0x438,&tStack_34c);
  GetWindowRect(pHVar4,ptVar9);
  iVar12 = 0;
  iVar5 = 0;
  iVar11 = 0;
  iVar10 = 0x438;
  ptVar9 = param_1;
  pHVar4 = unaff_EBP;
  hWnd = (HWND)(*pcVar8)();
  SetWindowPos(hWnd,(HWND)ptVar9,iVar10,iVar11,iVar5,iVar12,(UINT)pHVar4);
  iVar10 = tStack_35c.top - tStack_35c.bottom;
  iVar11 = ((tStack_35c.left - tStack_35c.right) + unaff_EDI) / 2;
  pHVar4 = GetDlgItem((HWND)param_1,0x3d);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,0x432);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  GetClientRect(unaff_EBP,(LPRECT)auStack_37c);
  InflateRect((LPRECT)auStack_37c,iVar11,(iVar10 + unaff_ESI) / 2);
  SendMessageA(unaff_EBP,0x1328,1,(LPARAM)auStack_37c);
  iVar11 = auStack_37c._8_4_ - auStack_37c._0_4_;
  iVar10 = iStack_370 - auStack_37c._4_4_;
  GetWindowRect(unaff_EBP,&tStack_35c);
  SetWindowPos(unaff_EBP,(HWND)0x0,0,0,iVar11,iVar10,6);
  iVar11 = ((tStack_35c.left - tStack_35c.right) + iVar11) / 2;
  GetWindowRect((HWND)param_1,&tStack_34c);
  InflateRect(&tStack_34c,iVar11,((tStack_35c.top - tStack_35c.bottom) + iVar10) / 2);
  SetWindowPos((HWND)param_1,(HWND)0x0,0,0,tStack_34c.right - tStack_34c.left,
               tStack_34c.bottom - tStack_34c.top,6);
  pHVar4 = GetDlgItem((HWND)param_1,1);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,2);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,9);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,4);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,0x435);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    LVar2 = tStack_36c.top;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,LVar2,0,0,5);
  }
  pHVar4 = GetDlgItem((HWND)param_1,0x47);
  if (pHVar4 != (HWND)0x0) {
    GetWindowRect(pHVar4,&tStack_36c);
    piStack_39c = (int *)tStack_36c.left;
    ScreenToClient((HWND)param_1,(LPPOINT)&piStack_39c);
    piStack_39c = (int *)((int)piStack_39c + iVar11 * 2);
    SetWindowPos(pHVar4,(HWND)0x0,(int)piStack_39c,tStack_36c.top,0,0,5);
  }
  return 1;
}


