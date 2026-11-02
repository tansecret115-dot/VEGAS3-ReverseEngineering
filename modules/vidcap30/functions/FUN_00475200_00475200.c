/* Module: vidcap30.exe
   Function: FUN_00475200
   Address: 00475200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00475200(HWND param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  SHORT SVar2;
  LONG LVar3;
  HDC hdc;
  HWND pHVar4;
  int iVar5;
  LPCSTR pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  LONG *lpBits;
  UINT Msg;
  LPARAM lParam;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  LVar3 = GetWindowLongA(param_1,-0x15);
  if (0x53 < param_2) {
    if (param_2 == 0x110) {
      iVar5 = FUN_00475110(param_1,param_4);
      _SfSetEditCtrlFont_8(param_1,0);
      SVar2 = GetAsyncKeyState(0x10);
      if ((SVar2 < 0) && (SVar2 = GetAsyncKeyState(0x11), SVar2 < 0)) {
        DAT_005bc423 = MulDiv(DAT_005bc423,1,1);
        _DAT_005bc427 = DAT_005bc423 >> 0x1f;
      }
      pCVar6 = *(LPCSTR *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0x60) = 1;
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3ed,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0xc);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3ee,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0x10);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3ef,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0x14);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3f0,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0x18);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3f1,pCVar6);
      if (*(int *)(iVar5 + 0x18) == 0) {
        pCVar6 = "";
      }
      else {
        pCVar6 = *(LPCSTR *)(iVar5 + 0x1c);
      }
      SetDlgItemTextA(param_1,0x3f2,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0x20);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3f4,pCVar6);
      pCVar6 = *(LPCSTR *)(iVar5 + 0x24);
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      SetDlgItemTextA(param_1,0x3f6,pCVar6);
      if (*(int *)(iVar5 + 0x24) == 0) {
        pCVar6 = "";
      }
      else {
        pCVar6 = *(LPCSTR *)(iVar5 + 0x2c);
      }
      SetDlgItemTextA(param_1,0x3f7,pCVar6);
      uVar7 = _SfGetString2_8(DAT_005c16d8,0x1064);
      uVar8 = _SfGetString2_8(DAT_005c16d8,0x1063);
      SfSetDlgItemText(param_1,0x3f3,"%s %s",uVar8,uVar7);
      if (*(int *)(iVar5 + 0x48) != 0) {
        pHVar4 = GetDlgItem(param_1,0x3ec);
        ShowWindow(pHVar4,0);
      }
      FUN_00475160(param_1);
      *(undefined4 *)(iVar5 + 0x60) = 0;
    }
    else if (((param_2 == 0x111) && (param_3 >> 0x10 == 0x300)) && (*(int *)(LVar3 + 0x60) == 0)) {
      lParam = 0;
      Msg = 0x468;
      pHVar4 = GetParent(param_1);
      SendMessageA(pHVar4,Msg,(WPARAM)param_1,lParam);
      *(undefined4 *)(LVar3 + 0x58) = 1;
      return 0;
    }
    return 0;
  }
  if (param_2 == 0x53) {
    return 0;
  }
  if (param_2 != 0xf) {
    if (param_2 != 0x4e) {
      return 0;
    }
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff35:
      *(undefined4 *)(LVar3 + 0x58) = 0;
      return 0;
    case 0xffffff36:
      FUN_00475100(LVar3);
      SetWindowLongA(param_1,0,0);
      return 1;
    default:
      return 0;
    case 0xffffff38:
      *(undefined4 *)(LVar3 + 0x68) = 100;
      return 0;
    case 0xffffff97:
      goto switchD_00475257_caseD_ffffff97;
    }
  }
  if (*(int *)(LVar3 + 0x48) == 0) {
    return 0;
  }
  hdc = BeginPaint(param_1,&local_40);
  pHVar4 = GetDlgItem(param_1,0x3ec);
  GetClientRect(pHVar4,&local_50);
  lpbmi = *(BITMAPINFO **)(LVar3 + 0x48);
  DVar9 = (lpbmi->bmiHeader).biCompression;
  if (DVar9 == 0) {
    if ((((lpbmi->bmiHeader).biClrUsed != 0) || (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 == 0))
       || (8 < uVar1)) goto LAB_0047532b;
    DVar9 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (DVar9 == 3) {
      lpBits = &lpbmi[1].bmiHeader.biHeight;
      goto LAB_00475333;
    }
LAB_0047532b:
    DVar9 = (lpbmi->bmiHeader).biClrUsed;
  }
  lpBits = (LONG *)(&lpbmi->bmiColors[DVar9 - 10].rgbBlue + (lpbmi->bmiHeader).biSize);
LAB_00475333:
  StretchDIBits(hdc,local_50.left + 8,local_50.top + 0xd,*(int *)(LVar3 + 0x4c),
                *(int *)(LVar3 + 0x50),0,0,*(int *)(LVar3 + 0x4c),*(int *)(LVar3 + 0x50),lpBits,
                lpbmi,0,0xcc0020);
  EndPaint(param_1,&local_40);
  return 0;
switchD_00475257_caseD_ffffff97:
  if (*(int *)(param_4 + 4) != 0x3f6) {
    return 0;
  }
  _Internet_BrowseWebPage_8(param_1,*(undefined4 *)(LVar3 + 0x28));
  return 0;
}


