/* Module: vegas30.exe
   Function: FUN_0055e050
   Address: 0055e050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055e050(undefined4 *param_1)

{
  uchar *puVar1;
  int iVar2;
  HANDLE hFindFile;
  WPARAM wParam;
  code *pcVar3;
  int *piVar4;
  SHFILEINFOA *pSVar5;
  HWND pHVar6;
  undefined1 local_8dc [8];
  undefined4 local_8d4;
  uchar *local_8c8;
  undefined1 local_8b4 [8];
  undefined4 local_8ac;
  CHAR *local_8a0;
  undefined1 local_88c [8];
  undefined4 local_884;
  uchar *local_878;
  undefined1 local_864 [8];
  undefined4 local_85c;
  uchar *local_850;
  int local_83c;
  DWORD local_838;
  DWORD local_834;
  int local_830;
  _SYSTEMTIME local_82c;
  uchar local_81c [260];
  int local_718 [5];
  CHAR *local_704;
  undefined4 local_700;
  int local_6fc;
  WPARAM local_6f0;
  SHFILEINFOA local_6ec;
  uchar local_58c [260];
  BOOL local_488;
  undefined4 local_484;
  int local_480;
  _WIN32_FIND_DATAA local_47c;
  uchar *local_33c;
  uchar local_338 [260];
  HANDLE local_234;
  CHAR local_230 [3];
  undefined1 local_22d;
  HWND local_22c;
  uchar local_228 [260];
  uchar local_124 [260];
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0061b130;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffff714;
  local_8 = 0;
  local_20 = param_1;
  local_480 = 0;
  ExceptionList = &local_14;
  local_22c = GetDlgItem((HWND)*param_1,0x550);
  iVar2 = FUN_0055ded0();
  pcVar3 = _mbscpy_exref;
  if (iVar2 == 0) {
LAB_0055e263:
    FUN_0055df10();
    ExceptionList = local_14;
    return 0;
  }
  _mbscpy(local_124,(uchar *)(param_1 + 1));
  FUN_0055dfd0(local_124);
  local_33c = local_124;
  do {
    puVar1 = local_33c;
    if (*local_33c == '\0') {
      pHVar6 = (HWND)*local_20;
LAB_0055e596:
      local_484 = 0x4c804c7;
      PostMessageA(pHVar6,0x111,0x4c804c7,local_480);
      FUN_0055df10();
      ExceptionList = local_14;
      return 1;
    }
    lstrcpynA(local_230,(LPCSTR)local_33c,4);
    local_22d = 0;
    local_33c = puVar1 + 3;
    iVar2 = FUN_0055df50(local_230);
    if (iVar2 == 0) goto LAB_0055e263;
    while (iVar2 = FUN_0055df30(), iVar2 == 0) {
      FUN_0055df80(local_228);
      (*pcVar3)(local_338,local_228);
      _mbscat(local_338,"*.*");
      (*pcVar3)(local_20 + 0x83,local_338);
      hFindFile = FindFirstFileA((LPCSTR)local_338,&local_47c);
      local_234 = hFindFile;
      if (hFindFile != (HANDLE)0xffffffff) {
        do {
          if (local_20[0xc4] != 0) {
            FindClose(hFindFile);
            pHVar6 = (HWND)*local_20;
            goto LAB_0055e596;
          }
          if (((((byte)local_47c.dwFileAttributes & 0x10) == 0x10) &&
              (iVar2 = lstrcmpA(".",local_47c.cFileName), iVar2 != 0)) &&
             (iVar2 = lstrcmpA("..",local_47c.cFileName), iVar2 != 0)) {
            (*pcVar3)(local_58c,local_228);
            _mbscat(local_58c,(uchar *)local_47c.cFileName);
            _SfAddSlashToPathName_8(local_58c,0x104);
            iVar2 = FUN_0055df50(local_58c);
            if (iVar2 == 0) {
              FindClose(hFindFile);
              goto LAB_0055e263;
            }
          }
          else {
            iVar2 = lstrcmpiA((LPCSTR)(local_20 + 0x42),local_47c.cFileName);
            if (iVar2 == 0) {
              piVar4 = local_718;
              for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar4 = 0;
                piVar4 = piVar4 + 1;
              }
              pSVar5 = &local_6ec;
              for (iVar2 = 0x58; iVar2 != 0; iVar2 = iVar2 + -1) {
                pSVar5->hIcon = (HICON)0x0;
                pSVar5 = (SHFILEINFOA *)&pSVar5->iIcon;
              }
              (*pcVar3)(local_81c,local_228);
              _mbscat(local_81c,(uchar *)local_47c.cFileName);
              SHGetFileInfoA((LPCSTR)local_81c,0x80,&local_6ec,0x160,0x4411);
              local_718[0] = 3;
              local_718[1] = local_480;
              local_704 = local_47c.cFileName;
              local_700 = 0x104;
              local_6fc = local_6ec.iIcon;
              wParam = SendMessageA(local_22c,0x1007,0,(LPARAM)local_718);
              local_6f0 = wParam;
              if (-1 < (int)wParam) {
                iVar2 = lstrlenA((LPCSTR)local_228);
                local_83c = iVar2;
                if (iVar2 < 4) {
                  _mbscpy(local_81c,local_228);
                }
                else {
                  lstrcpynA((LPSTR)local_81c,(LPCSTR)local_228,iVar2);
                  local_81c[iVar2 + -1] = '\0';
                }
                pHVar6 = local_22c;
                local_85c = 1;
                local_850 = local_81c;
                SendMessageA(local_22c,0x102e,wParam,(LPARAM)local_864);
                local_838 = local_47c.nFileSizeLow;
                local_834 = local_47c.nFileSizeHigh;
                _SfGetByteSizeText_12(local_47c.nFileSizeLow,local_47c.nFileSizeHigh,local_81c);
                local_884 = 2;
                local_878 = local_81c;
                SendMessageA(pHVar6,0x102e,wParam,(LPARAM)local_88c);
                local_8ac = 3;
                local_8a0 = local_6ec.szTypeName;
                SendMessageA(pHVar6,0x102e,wParam,(LPARAM)local_8b4);
                FileTimeToSystemTime(&local_47c.ftLastWriteTime,&local_82c);
                GetDateFormatA(0x400,1,&local_82c,(LPCSTR)0x0,(LPSTR)local_81c,0x104);
                _mbscat(local_81c," ");
                local_830 = lstrlenA((LPCSTR)local_81c);
                GetTimeFormatA(0x400,2,&local_82c,(LPCSTR)0x0,(LPSTR)(local_81c + local_830),
                               0x104 - local_830);
                local_8d4 = 4;
                local_8c8 = local_81c;
                SendMessageA(pHVar6,0x102e,wParam,(LPARAM)local_8dc);
              }
              if (local_480 == 0) {
                local_484 = 0x4c904c7;
                PostMessageA((HWND)*local_20,0x111,0x4c904c7,0);
              }
              local_480 = local_480 + 1;
              pcVar3 = _mbscpy_exref;
              hFindFile = local_234;
            }
          }
          local_488 = FindNextFileA(hFindFile,&local_47c);
        } while (local_488 != 0);
        FindClose(hFindFile);
      }
    }
  } while( true );
}


