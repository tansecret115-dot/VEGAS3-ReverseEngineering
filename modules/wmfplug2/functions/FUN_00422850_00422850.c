/* Module: wmfplug2.dll
   Function: FUN_00422850
   Address: 00422850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00422850(HWND param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  SHORT SVar2;
  LONG LVar3;
  HDC hdc;
  HWND pHVar4;
  int iVar5;
  LPCSTR pCVar6;
  DWORD DVar7;
  LONG *lpBits;
  UINT Msg;
  LPARAM lParam;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  LVar3 = GetWindowLongA(param_1,-0x15);
  if (0x53 < param_2) {
    if (param_2 == 0x110) {
      iVar5 = FUN_00422760(param_1,param_4);
      FUN_00424980(param_1,(HFONT)0x0);
      SVar2 = GetAsyncKeyState(0x10);
      if ((SVar2 < 0) && (SVar2 = GetAsyncKeyState(0x11), SVar2 < 0)) {
        DAT_0048a0db = MulDiv(DAT_0048a0db,1,1);
        _DAT_0048a0df = DAT_0048a0db >> 0x1f;
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
      FUN_00420d00(DAT_00489e30,0x1064);
      FUN_00420d00(DAT_00489e30,0x1063);
      FUN_00427530(param_1,0x3f3,(uchar *)"%s %s");
      if (*(int *)(iVar5 + 0x48) != 0) {
        pHVar4 = GetDlgItem(param_1,0x3ec);
        ShowWindow(pHVar4,0);
      }
      FUN_004227b0(param_1);
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
      FUN_00422750(LVar3);
      SetWindowLongA(param_1,0,0);
      return 1;
    default:
      return 0;
    case 0xffffff38:
      *(undefined4 *)(LVar3 + 0x68) = 100;
      return 0;
    case 0xffffff97:
      goto switchD_004228a7_caseD_ffffff97;
    }
  }
  if (*(int *)(LVar3 + 0x48) == 0) {
    return 0;
  }
  hdc = BeginPaint(param_1,&local_40);
  pHVar4 = GetDlgItem(param_1,0x3ec);
  GetClientRect(pHVar4,&local_50);
  lpbmi = *(BITMAPINFO **)(LVar3 + 0x48);
  DVar7 = (lpbmi->bmiHeader).biCompression;
  if (DVar7 == 0) {
    if ((((lpbmi->bmiHeader).biClrUsed != 0) || (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 == 0))
       || (8 < uVar1)) goto LAB_0042297b;
    DVar7 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (DVar7 == 3) {
      lpBits = &lpbmi[1].bmiHeader.biHeight;
      goto LAB_00422983;
    }
LAB_0042297b:
    DVar7 = (lpbmi->bmiHeader).biClrUsed;
  }
  lpBits = (LONG *)(&lpbmi->bmiColors[DVar7 - 10].rgbBlue + (lpbmi->bmiHeader).biSize);
LAB_00422983:
  StretchDIBits(hdc,local_50.left + 8,local_50.top + 0xd,*(int *)(LVar3 + 0x4c),
                *(int *)(LVar3 + 0x50),0,0,*(int *)(LVar3 + 0x4c),*(int *)(LVar3 + 0x50),lpBits,
                lpbmi,0,0xcc0020);
  EndPaint(param_1,&local_40);
  return 0;
switchD_004228a7_caseD_ffffff97:
  if (*(int *)(param_4 + 4) != 0x3f6) {
    return 0;
  }
  FUN_0044c0f0(param_1,*(char **)(LVar3 + 0x28));
  return 0;
}


