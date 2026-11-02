/* Module: vidcap30.exe
   Function: FUN_005324e0
   Address: 005324e0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_005324e0(LPCSTR param_1,uchar *param_2,int param_3,int param_4)

{
  HANDLE pvVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD local_450;
  uchar local_44c [260];
  _WIN32_FIND_DATAA local_348;
  uchar local_208 [260];
  uchar local_104 [260];
  
  lVar6 = 0;
  BVar4 = 1;
  if (param_2 != (uchar *)0x0) {
    _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
    _mbscpy(local_208,local_104);
    _SfAddSlashToPathName_8(local_208,0x104);
    _mbscat(local_208,param_2);
    pvVar1 = FindFirstFileA((LPCSTR)local_208,&local_348);
    lVar5 = 0;
    if (pvVar1 != (HANDLE)0xffffffff) {
      while (lVar5 = lVar6, BVar4 != 0) {
        iVar2 = lstrcmpA(local_348.cFileName,".");
        if ((iVar2 != 0) && (iVar2 = lstrcmpA(local_348.cFileName,".."), iVar2 != 0)) {
          _mbscpy(local_44c,local_104);
          _SfAddSlashToPathName_8(local_44c,0x104);
          _mbscat(local_44c,(uchar *)local_348.cFileName);
          if ((param_3 == 0) || (((byte)local_348.dwFileAttributes & 0x10) == 0)) {
            hFile = CreateFileA((LPCSTR)local_44c,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                (HANDLE)0x0);
            if (hFile != (HANDLE)0xffffffff) {
              DVar3 = GetFileSize(hFile,&local_450);
              lVar6 = lVar6 + CONCAT44(local_450,DVar3);
              CloseHandle(hFile);
            }
          }
          else {
            _SfAddSlashToPathName_8(local_44c,0x104);
            lVar5 = FUN_005324e0(local_44c,param_2,param_3,param_4 + 1);
            lVar6 = lVar5 + lVar6;
          }
        }
        BVar4 = FindNextFileA(pvVar1,&local_348);
      }
    }
    FindClose(pvVar1);
    return lVar5;
  }
  DVar3 = GetFileAttributesA(param_1);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) != 0)) {
    DVar3 = GetFileAttributesA(param_1);
    if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) {
      lVar6 = FUN_005324e0(param_1,&DAT_005996f8,1,0);
    }
  }
  else {
    pvVar1 = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (pvVar1 != (HANDLE)0xffffffff) {
      DVar3 = GetFileSize(pvVar1,&local_450);
      CloseHandle(pvVar1);
      return CONCAT44(local_450,DVar3);
    }
  }
  return lVar6;
}


