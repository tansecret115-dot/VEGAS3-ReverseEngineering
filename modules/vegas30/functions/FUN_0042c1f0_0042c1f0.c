/* Module: vegas30.exe
   Function: FUN_0042c1f0
   Address: 0042c1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042c1f0(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  DWORD DVar3;
  HANDLE hFindFile;
  HCURSOR pHVar4;
  LPCSTR lpString1;
  _WIN32_FIND_DATAA *p_Var5;
  code *pcVar6;
  uint bEnable;
  uint bEnable_00;
  undefined4 uVar7;
  int iVar8;
  LPCSTR pCVar9;
  uint uStack_294;
  CHAR local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  _SfSetEditCtrlFont_8();
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  *param_3 = param_1;
  param_3[0xcc] = DAT_0064a514;
  param_3[0xcd] = DAT_0064a56c;
  if ((param_3[0x317] == 1) && (DAT_00647c24 == '\0')) {
    _SfGetString_8();
    SfMsgBox();
  }
  pcVar6 = ShowWindow_exref;
  if (param_3[0x317] == 2) {
    iVar8 = 0;
    pHVar2 = GetDlgItem(param_1,0x470);
    pcVar6 = ShowWindow_exref;
    ShowWindow(pHVar2,iVar8);
    iVar8 = 0;
    pHVar2 = GetDlgItem(param_1,0x46f);
    ShowWindow(pHVar2,iVar8);
    iVar8 = 0;
    pHVar2 = GetDlgItem(param_1,0x64f);
    ShowWindow(pHVar2,iVar8);
    iVar8 = 0;
    pHVar2 = GetDlgItem(param_1,0x650);
    ShowWindow(pHVar2,iVar8);
  }
  if (param_3[0x317] == 3) {
    SfSetWindowText();
    GetDlgItem(param_1,0x470);
    (*pcVar6)();
    GetDlgItem(param_1,0x46f);
    (*pcVar6)();
    pHVar2 = GetDlgItem(param_1,0x64f);
    (*pcVar6)(pHVar2);
    uVar7 = 1;
    pHVar2 = GetDlgItem(param_1,0x650);
    (*pcVar6)(pHVar2,uVar7);
    CheckDlgButton(param_1,0x46f,param_3[0x321]);
    CheckDlgButton(param_1,0x470,param_3[0x322]);
    DVar3 = GetModuleFileNameA(DAT_006471fc,local_244,0x104);
    iVar8 = lstrlenA(&DAT_0064aa70);
    if ((iVar8 == 0) && (DVar3 != 0)) {
      _SfGetPathNameFromFilePath_12();
      _mbscat(&DAT_0064aa70,(uchar *)"Siren*.EXE");
      p_Var5 = &local_140;
      for (iVar8 = 0x50; iVar8 != 0; iVar8 = iVar8 + -1) {
        p_Var5->dwFileAttributes = 0;
        p_Var5 = (_WIN32_FIND_DATAA *)&p_Var5->ftCreationTime;
      }
      hFindFile = FindFirstFileA(&DAT_0064aa70,&local_140);
      if (hFindFile == (HANDLE)0xffffffff) {
        pCVar9 = "";
        pHVar2 = GetDlgItem(param_1,0x64f);
        SetWindowTextA(pHVar2,pCVar9);
        _mbscpy(&DAT_0064aa70,"");
        pcVar6 = ShowWindow_exref;
      }
      else {
        FindClose(hFindFile);
        _SfGetPathNameFromFilePath_12();
        _mbscat(&DAT_0064aa70,(uchar *)local_140.cFileName);
        pCVar9 = &DAT_0064aa70;
        pHVar2 = GetDlgItem(param_1,0x64f);
        SetWindowTextA(pHVar2,pCVar9);
        pcVar6 = ShowWindow_exref;
      }
    }
  }
  GetDlgItem(param_1,0x647);
  (*pcVar6)();
  GetDlgItem(param_1,0x644);
  (*pcVar6)();
  pHVar2 = GetDlgItem(param_1,0x638);
  (*pcVar6)(pHVar2);
  uVar7 = 1;
  pHVar2 = GetDlgItem(param_1,0x63d);
  (*pcVar6)(pHVar2,uVar7);
  uVar7 = 1;
  pHVar2 = GetDlgItem(param_1,0x653);
  (*pcVar6)(pHVar2,uVar7);
  pHVar4 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar4 = SetCursor(pHVar4);
  puVar1 = param_3 + 0x86;
  FUN_0042ad10(param_1,param_3,puVar1);
  FUN_0042b8e0(param_1,param_3[0x312],param_3,puVar1,0xffffffff);
  FUN_0042c020(param_1,param_3[0x312],param_3,puVar1);
  param_3[0x31e] = 0;
  iVar8 = _SfDoesFileExist_4(param_3 + 0x43);
  if (iVar8 == 0) {
    FUN_0042c610(param_1,param_3[0x312],param_3 + 0x43,0x104,0);
  }
  iVar8 = _SfDoesFileExist_4(param_3 + 0x43);
  if (iVar8 != 0) {
    pCVar9 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_3 + 0x43);
    lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(puVar1);
    iVar8 = lstrcmpA(lpString1,pCVar9);
    if (iVar8 == 0) {
      pCVar9 = (LPCSTR)(param_3 + 0x43);
      goto LAB_0042c52d;
    }
  }
  *(undefined1 *)(param_3 + 0x43) = 0;
  pCVar9 = "";
LAB_0042c52d:
  pHVar2 = GetDlgItem(param_1,0x644);
  SetWindowTextA(pHVar2,pCVar9);
  cdr_GetDeviceCaps((HSFCD__ *)param_3[1],(cdrcaps_tag *)&stack0xfffffd30);
  bEnable = uStack_294 >> 0x16 & 1;
  if ((bEnable == 0) || (param_3[0x326] == 0)) {
    iVar8 = 0x400;
    param_3[0x326] = 0;
    param_3[0x327] = 0;
  }
  else {
    iVar8 = 0x402 - (uint)(param_3[0x327] != 0);
  }
  CheckRadioButton(param_1,0x400,0x402,iVar8);
  bEnable_00 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x401);
  EnableWindow(pHVar2,bEnable_00);
  pHVar2 = GetDlgItem(param_1,0x402);
  EnableWindow(pHVar2,bEnable);
  pHVar2 = GetDlgItem(param_1,0x408);
  FUN_0043f310(pHVar2,param_3[1],1);
  FUN_00429640(pHVar2,param_3[0x328]);
  SetCursor(pHVar4);
  FUN_0042be30(param_3);
  return 1;
}


