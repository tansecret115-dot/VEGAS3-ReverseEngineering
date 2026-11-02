/* Module: vegas30.exe
   Function: FUN_005598f0
   Address: 005598f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005598f0(HWND param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  HWND pHVar2;
  int *lpString;
  LPCSTR pCVar3;
  HDC hdc;
  HGDIOBJ h;
  int iVar4;
  CHAR *lpString_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  tagRECT local_114;
  CHAR local_104 [259];
  undefined1 local_1;
  
  SetWindowLongA(param_1,8,(LONG)param_3);
  piVar1 = param_3 + 4;
  *piVar1 = (int)param_1;
  if (*param_3 != 0) {
    uVar7 = 0x8001;
    uVar6 = 0;
    uVar5 = 0;
    pHVar2 = GetParent(param_1);
    _SfWndCenter_16(pHVar2,uVar5,uVar6,uVar7);
    *param_3 = 0;
  }
  _SfSetEditCtrlFont_8(param_1,0);
  pHVar2 = GetDlgItem(param_1,0x438);
  if (param_3[0x4a] == 0) {
    lpString = (int *)_SfGetString_8(DAT_00647204,0x50fc);
    EnableWindow(pHVar2,0);
  }
  else {
    lpString = param_3 + 8;
  }
  SetWindowTextA(pHVar2,(LPCSTR)lpString);
  pCVar3 = "";
  if (param_3[0x4b] != 0) {
    pHVar2 = GetDlgItem(param_1,0x489);
    GetClientRect(pHVar2,&local_114);
    hdc = GetDC(pHVar2);
    h = (HGDIOBJ)SendMessageA(pHVar2,0x31,0,0);
    SelectObject(hdc,h);
    lstrcpynA(local_104,(LPCSTR)param_3[0x4b],0x104);
    local_1 = 0;
    SfCalcPathEllipsis(hdc,local_104,local_114.right - local_114.left);
    ReleaseDC(pHVar2,hdc);
    pCVar3 = local_104;
  }
  SetDlgItemTextA(param_1,0x489,pCVar3);
  if ((undefined2 *)param_3[0x49] == (undefined2 *)0x0) {
    SetDlgItemTextA(param_1,0x48a,"");
    lpString_00 = "";
  }
  else {
    iVar4 = _SfAudio_GetTagText_12(*(undefined2 *)param_3[0x49],local_104,0x104);
    if (iVar4 < 0) {
      pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x50fd);
    }
    else {
      pCVar3 = local_104;
    }
    SetDlgItemTextA(param_1,0x48a,pCVar3);
    iVar4 = _SfAudio_GetAttribsText_12(param_3[0x49],local_104,0x104);
    if (iVar4 < 0) {
      lpString_00 = (CHAR *)_SfGetString_8(DAT_00647204,0x50fd);
    }
    else {
      lpString_00 = local_104;
    }
  }
  SetDlgItemTextA(param_1,0x48b,lpString_00);
  pHVar2 = GetDlgItem(param_1,0x434);
  SendMessageA(pHVar2,0x14b,0,0);
  SendMessageA(pHVar2,0x143,0,0x61b0f4);
  SendMessageA(pHVar2,0x143,0,0x61b0d4);
  SendMessageA(pHVar2,0x143,0,0x61b0b4);
  SendMessageA(pHVar2,0x143,0,0x61b09c);
  SendMessageA(pHVar2,0x14e,param_3[0x4c] + 1,0);
  pHVar2 = GetDlgItem(param_1,0x436);
  SendMessageA(pHVar2,0x14b,0,0);
  SendMessageA(pHVar2,0x143,0,0x61b084);
  SendMessageA(pHVar2,0x143,0,0x61b070);
  SendMessageA(pHVar2,0x143,0,0x61b058);
  SendMessageA(pHVar2,0x143,0,0x61b040);
  SendMessageA(pHVar2,0x143,0,0x61b024);
  SendMessageA(pHVar2,0x143,0,0x61b010);
  SendMessageA(pHVar2,0x14e,(uint)param_3[0x4d] >> 5 & 7,0);
  FUN_00558fe0(piVar1);
  CheckDlgButton(param_1,0x472,param_3[0x4d] & 1);
  CheckDlgButton(param_1,0x470,(uint)param_3[0x4d] >> 2 & 1);
  CheckDlgButton(param_1,0x471,(uint)param_3[0x4d] >> 1 & 1);
  CheckDlgButton(param_1,0x488,(uint)param_3[0x4d] >> 3 & 1);
  FUN_00558f30(piVar1);
  CheckDlgButton(param_1,0x46f,(uint)param_3[0x4d] >> 4 & 1);
  return 1;
}


