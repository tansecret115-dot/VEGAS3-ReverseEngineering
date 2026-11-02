/* Module: vegas30.exe
   Function: FUN_0055ac00
   Address: 0055ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055ac00(HWND param_1,undefined4 param_2,int *param_3)

{
  HWND pHVar1;
  int *lpString;
  LPCSTR pCVar2;
  HDC hdc;
  HGDIOBJ h;
  int iVar3;
  CHAR *lpString_00;
  LPARAM LVar4;
  HWND pHVar5;
  LONG LVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  tagRECT local_114;
  CHAR local_104 [259];
  undefined1 local_1;
  
  SetWindowLongA(param_1,8,(LONG)param_3);
  param_3[4] = (int)param_1;
  if (*param_3 != 0) {
    uVar8 = 0x800100000000;
    uVar7 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar7,uVar8);
    *param_3 = 0;
  }
  _SfSetEditCtrlFont_8(param_1,0);
  pHVar1 = GetDlgItem(param_1,0x438);
  if (param_3[0x48] == 0) {
    lpString = (int *)_SfGetString_8(DAT_00647204,0x50fc);
    EnableWindow(pHVar1,0);
  }
  else {
    lpString = param_3 + 6;
  }
  SetWindowTextA(pHVar1,(LPCSTR)lpString);
  pCVar2 = "";
  if (param_3[0x49] != 0) {
    pHVar1 = GetDlgItem(param_1,0x489);
    GetClientRect(pHVar1,&local_114);
    hdc = GetDC(pHVar1);
    h = (HGDIOBJ)SendMessageA(pHVar1,0x31,0,0);
    SelectObject(hdc,h);
    lstrcpynA(local_104,(LPCSTR)param_3[0x49],0x104);
    local_1 = 0;
    SfCalcPathEllipsis(hdc,local_104,local_114.right - local_114.left);
    ReleaseDC(pHVar1,hdc);
    pCVar2 = local_104;
  }
  SetDlgItemTextA(param_1,0x489,pCVar2);
  if (param_3[0x47] == 0) {
    SetDlgItemTextA(param_1,0x48a,"");
    lpString_00 = "";
  }
  else {
    iVar3 = _SfVideo_GetFormatText_12(*(undefined4 *)(param_3[0x47] + 0x10),local_104,0x104);
    if (iVar3 < 0) {
      pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x50fd);
    }
    else {
      pCVar2 = local_104;
    }
    SetDlgItemTextA(param_1,0x48a,pCVar2);
    iVar3 = _SfVideo_GetAttribsText_12(param_3[0x47],local_104,0x104);
    if (iVar3 < 0) {
      lpString_00 = (CHAR *)_SfGetString_8(DAT_00647204,0x50fd);
    }
    else {
      lpString_00 = local_104;
    }
  }
  SetDlgItemTextA(param_1,0x48b,lpString_00);
  pHVar1 = GetDlgItem(param_1,0x440);
  SendMessageA(pHVar1,0x60e,0,0xfa);
  SendMessageA(pHVar1,0x60f,0,4000);
  LVar4 = ftol();
  SendMessageA(pHVar1,0x610,0,LVar4);
  pHVar5 = GetDlgItem(param_1,0x4bd);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar5,4000);
  _SfDoubleToText_20(local_104,param_3[0x4c],param_3[0x4d],6,0);
  SfSetWindowText(pHVar5,&DAT_00619d20,param_3[0x4c]);
  pHVar1 = GetDlgItem(param_1,0x62f);
  SendMessageA(pHVar1,0x60e,0,100);
  SendMessageA(pHVar1,0x60f,0,1000);
  LVar4 = ftol();
  SendMessageA(pHVar1,0x610,0,LVar4);
  pHVar5 = GetDlgItem(param_1,0x4bf);
  SendMessageA(pHVar1,0x624,(WPARAM)pHVar5,1000);
  SfSetWindowText(pHVar5,&DAT_00619d20,param_3[0x4e]);
  pHVar1 = GetDlgItem(param_1,0x635);
  SfSetWindowText(pHVar1,"%.3f fps",*(double *)(param_3 + 0x5c) * *(double *)(param_3 + 0x4e));
  CheckDlgButton(param_1,0x472,param_3[0x4a] & 1);
  CheckDlgButton(param_1,0x470,(uint)param_3[0x4a] >> 2 & 1);
  CheckDlgButton(param_1,0x471,(uint)param_3[0x4a] >> 1 & 1);
  CheckDlgButton(param_1,0x4bc,(uint)param_3[0x4a] >> 3 & 1);
  CheckDlgButton(param_1,0x4be,(uint)param_3[0x4a] >> 4 & 1);
  CheckDlgButton(param_1,0x46f,(uint)param_3[0x4a] >> 5 & 1);
  CheckDlgButton(param_1,0x474,(uint)param_3[0x4a] >> 6 & 1);
  pcVar9 = FUN_0055b020;
  iVar3 = -4;
  pHVar1 = GetDlgItem(param_1,0x439);
  LVar6 = SetWindowLongA(pHVar1,iVar3,(LONG)pcVar9);
  pcVar9 = FUN_0055b020;
  iVar3 = -4;
  param_3[0x5e] = LVar6;
  pHVar1 = GetDlgItem(param_1,0x43b);
  SetWindowLongA(pHVar1,iVar3,(LONG)pcVar9);
  pcVar9 = FUN_0055b020;
  iVar3 = -4;
  pHVar1 = GetDlgItem(param_1,0x43a);
  SetWindowLongA(pHVar1,iVar3,(LONG)pcVar9);
  return 1;
}


