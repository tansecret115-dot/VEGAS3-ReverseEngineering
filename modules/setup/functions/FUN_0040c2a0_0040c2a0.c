/* Module: Setup.exe
   Function: FUN_0040c2a0
   Address: 0040c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_0040c2a0(uchar *param_1,uchar *param_2,int param_3,int param_4)

{
  longlong lVar1;
  HANDLE pvVar2;
  int iVar3;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  longlong lVar6;
  DWORD local_450;
  uchar local_44c [260];
  _WIN32_FIND_DATAA local_348;
  uchar local_208 [260];
  uchar local_104 [260];
  
  lVar6 = 0;
  lVar1 = 0;
  BVar5 = 1;
  if (param_2 != (uchar *)0x0) {
    _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
    _mbscpy(local_208,local_104);
    _SfAddSlashToPathName_8(local_208,0x104);
    _mbscat(local_208,param_2);
    pvVar2 = FindFirstFileA((LPCSTR)local_208,&local_348);
    if (pvVar2 != (HANDLE)0xffffffff) {
      while (lVar6 = lVar1, BVar5 != 0) {
        iVar3 = lstrcmpA(local_348.cFileName,".");
        if ((iVar3 != 0) && (iVar3 = lstrcmpA(local_348.cFileName,".."), iVar3 != 0)) {
          _mbscpy(local_44c,local_104);
          _SfAddSlashToPathName_8(local_44c,0x104);
          _mbscat(local_44c,(uchar *)local_348.cFileName);
          if ((param_3 == 0) || (((byte)local_348.dwFileAttributes & 0x10) == 0)) {
            hFile = CreateFileA((LPCSTR)local_44c,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                (HANDLE)0x0);
            if (hFile != (HANDLE)0xffffffff) {
              DVar4 = GetFileSize(hFile,&local_450);
              lVar1 = lVar1 + CONCAT44(local_450,DVar4);
              CloseHandle(hFile);
            }
          }
          else {
            _SfAddSlashToPathName_8(local_44c,0x104);
            lVar6 = FUN_0040c2a0(local_44c,param_2,param_3,param_4 + 1);
            lVar1 = lVar6 + lVar1;
          }
        }
        BVar5 = FindNextFileA(pvVar2,&local_348);
      }
    }
    FindClose(pvVar2);
    return lVar6;
  }
  DVar4 = GetFileAttributesA((LPCSTR)param_1);
  if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) != 0)) {
    DVar4 = GetFileAttributesA((LPCSTR)param_1);
    if ((DVar4 != 0xffffffff) && ((DVar4 & 0x10) != 0)) {
      lVar6 = FUN_0040c2a0(param_1,"*.*",1,0);
    }
  }
  else {
    pvVar2 = CreateFileA((LPCSTR)param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (pvVar2 != (HANDLE)0xffffffff) {
      DVar4 = GetFileSize(pvVar2,&local_450);
      CloseHandle(pvVar2);
      return CONCAT44(local_450,DVar4);
    }
  }
  return lVar6;
}


