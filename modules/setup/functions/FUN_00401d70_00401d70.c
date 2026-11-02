/* Module: Setup.exe
   Function: FUN_00401d70
   Address: 00401d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401d70(void)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  LSTATUS LVar4;
  char *_Source;
  HKEY local_7b4;
  HKEY local_7b0;
  CHAR local_7ac [260];
  _OSVERSIONINFOA local_6a8;
  uchar local_614 [260];
  uchar local_510 [260];
  BYTE local_40c [260];
  uchar local_308 [260];
  CHAR local_204 [256];
  CHAR local_104 [260];
  
  _SfLoadString_16(DAT_00446d7c,7,local_7ac,0x100);
  FUN_00402860();
  local_6a8.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_6a8);
  if (local_6a8.dwPlatformId == 2) {
    if (4 < local_6a8.dwMajorVersion) {
      return 1;
    }
LAB_00401e42:
    _Source = "InstMsi-x86w.exe";
  }
  else {
    if (local_6a8.dwPlatformId != 1) goto LAB_00401e42;
    if (DAT_00447d24 != 0) {
      _SfLoadString_16(DAT_00446d7c,0x1b,local_7ac,0x100);
      _SfLoadString_16(DAT_00446d7c,0x1c,local_204,0x100);
      _SfMessageBox_16((HWND)0x0,local_204,local_7ac,0x40000);
      return 0;
    }
    _Source = "InstMsi-x86a.exe";
  }
  _mbscpy(local_614,(uchar *)_Source);
  iVar1 = FUN_00401bc0(local_308);
  if (iVar1 == 0) {
    DVar2 = GetFileAttributesA((LPCSTR)local_614);
    if (DVar2 == 0xffffffff) {
      _SfLoadString_16(DAT_00446d7c,0x1e,local_7ac,0x100);
LAB_00401e9e:
      _SfMessageBox_16((HWND)0x0,local_7ac,&DAT_00446e8c,0x40010);
      return 0;
    }
    iVar3 = _SfMessageBox_16((HWND)0x0,(LPCSTR)local_308,&DAT_00446e8c,0x40024);
    if (iVar3 == 6) {
      iVar3 = lstrlenA(&DAT_0044853c);
      if (iVar3 == 0) {
        SfPrintF(local_510,"%s");
      }
      else {
        _mbscpy(local_510,&DAT_0044853c);
      }
      GetShortPathNameA((LPCSTR)local_510,(LPSTR)local_40c,0x104);
      DVar2 = GetCurrentDirectoryA(0x104,local_104);
      if (DVar2 == 0) goto LAB_00401e9e;
      LVar4 = RegOpenKeyExA((HKEY)0x80000001,"SOFTWARE\\MICROSOFT\\Windows\\CurrentVersion",0,
                            0x2001f,&local_7b0);
      if (LVar4 != 0) {
        _SfMessageBox_16((HWND)0x0,local_7ac,&DAT_00446e8c,0x40010);
        return 0;
      }
      LVar4 = RegCreateKeyExA(local_7b0,"RunOnce",0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                              &local_7b4,(LPDWORD)0x0);
      if (LVar4 != 0) {
LAB_00401fce:
        _SfMessageBox_16((HWND)0x0,local_7ac,&DAT_00446e8c,0x40010);
        return 0;
      }
      iVar3 = lstrlenA((LPCSTR)local_40c);
      LVar4 = RegSetValueExA(local_7b4,"SfMsiSetup",0,1,local_40c,iVar3 + 1);
      if (LVar4 != 0) goto LAB_00401fce;
      _mbscat(local_614," /r");
      DVar2 = FUN_004020d0((LPSTR)local_614);
      if (DVar2 == 0xbc2) {
        return 0;
      }
      if (DVar2 == 0) {
        iVar1 = FUN_00401bc0(local_308);
        LVar4 = RegOpenKeyExA((HKEY)0x80000001,
                              "SOFTWARE\\MICROSOFT\\Windows\\CurrentVersion\\RunOnce",0,0x2001f,
                              &local_7b4);
        if (LVar4 == 0) {
          RegDeleteValueA(local_7b4,&DAT_00447aec);
        }
      }
    }
    if (iVar1 == 0) {
      _SfLoadString_16(DAT_00446d7c,8,local_7ac,0x100);
      _SfMessageBox_16((HWND)0x0,local_7ac,&DAT_00446e8c,0x40010);
    }
  }
  return iVar1;
}


