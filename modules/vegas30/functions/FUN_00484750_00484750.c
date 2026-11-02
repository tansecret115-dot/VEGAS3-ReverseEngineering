/* Module: vegas30.exe
   Function: FUN_00484750
   Address: 00484750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00484750(int param_1)

{
  HWND pHVar1;
  DWORD DVar2;
  HANDLE hFindFile;
  HWND pHVar3;
  _WIN32_FIND_DATAA *p_Var4;
  int iVar5;
  CHAR *lpString;
  LPCSTR pCVar6;
  CHAR local_348 [260];
  _WIN32_FIND_DATAA local_244;
  CHAR local_104 [260];
  
  pHVar3 = *(HWND *)(param_1 + 4);
  SfPrintF(local_104,&DAT_0061052c,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24c));
  lpString = local_104;
  pHVar1 = GetDlgItem(pHVar3,0x3fe);
  SetWindowTextA(pHVar1,lpString);
  FUN_004299a0(pHVar3,&DAT_006476a0);
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x248);
  if (iVar5 == 1) {
    iVar5 = 0x400;
  }
  else {
    if (iVar5 != 2) goto LAB_004847cc;
    iVar5 = 0x402;
  }
  CheckDlgButton(pHVar3,iVar5,1);
LAB_004847cc:
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 3) {
    iVar5 = 1;
    pHVar1 = GetDlgItem(pHVar3,0x470);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 1;
    pHVar1 = GetDlgItem(pHVar3,0x46f);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 1;
    pHVar1 = GetDlgItem(pHVar3,0x64f);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 1;
    pHVar1 = GetDlgItem(pHVar3,0x650);
    ShowWindow(pHVar1,iVar5);
    CheckDlgButton(pHVar3,0x46f,*(UINT *)(*(int *)(param_1 + 0x10) + 0x250));
    DVar2 = GetModuleFileNameA(DAT_006471fc,local_348,0x104);
    iVar5 = lstrlenA(&DAT_0064aa70);
    if ((iVar5 == 0) && (DVar2 != 0)) {
      _SfGetPathNameFromFilePath_12(local_348,&DAT_0064aa70,0x104);
      _mbscat(&DAT_0064aa70,(uchar *)"Siren*.EXE");
      p_Var4 = &local_244;
      for (iVar5 = 0x50; iVar5 != 0; iVar5 = iVar5 + -1) {
        p_Var4->dwFileAttributes = 0;
        p_Var4 = (_WIN32_FIND_DATAA *)&p_Var4->ftCreationTime;
      }
      hFindFile = FindFirstFileA(&DAT_0064aa70,&local_244);
      if (hFindFile != (HANDLE)0xffffffff) {
        FindClose(hFindFile);
        _SfGetPathNameFromFilePath_12(local_348,&DAT_0064aa70,0x104);
        _mbscat(&DAT_0064aa70,(uchar *)local_244.cFileName);
        pCVar6 = &DAT_0064aa70;
        pHVar3 = GetDlgItem(pHVar3,0x64f);
        SetWindowTextA(pHVar3,pCVar6);
        return;
      }
      pCVar6 = "";
      pHVar3 = GetDlgItem(pHVar3,0x64f);
      SetWindowTextA(pHVar3,pCVar6);
      _mbscpy(&DAT_0064aa70,"");
      return;
    }
  }
  else {
    iVar5 = 0;
    pHVar1 = GetDlgItem(pHVar3,0x470);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 0;
    pHVar1 = GetDlgItem(pHVar3,0x46f);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 0;
    pHVar1 = GetDlgItem(pHVar3,0x64f);
    ShowWindow(pHVar1,iVar5);
    iVar5 = 0;
    pHVar3 = GetDlgItem(pHVar3,0x650);
    ShowWindow(pHVar3,iVar5);
  }
  return;
}


