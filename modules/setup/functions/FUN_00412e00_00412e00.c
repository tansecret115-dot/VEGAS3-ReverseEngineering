/* Module: Setup.exe
   Function: FUN_00412e00
   Address: 00412e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00412e00(uchar *param_1,uchar *param_2,int param_3)

{
  HANDLE hFindFile;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uchar *_Source;
  undefined4 local_34c;
  uchar local_348 [260];
  uchar local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  local_34c = 0;
  iVar4 = 1;
  _mbscpy(local_244,param_1);
  _SfAddSlashToPathName_8(local_244,0x104);
  _Source = param_2;
  if (param_2 == (uchar *)0x0) {
    _Source = "*.*";
  }
  _mbscat(local_244,_Source);
  iVar3 = 1;
  hFindFile = FindFirstFileA((LPCSTR)local_244,&local_140);
  while (((hFindFile != (HANDLE)0xffffffff && (iVar4 != 0)) && (iVar3 != 0))) {
    iVar4 = lstrcmpA(local_140.cFileName,".");
    if ((iVar4 != 0) && (iVar4 = lstrcmpA(local_140.cFileName,".."), iVar4 != 0)) {
      _mbscpy(local_348,param_1);
      _SfAddSlashToPathName_8(local_348,0x104);
      _mbscat(local_348,(uchar *)local_140.cFileName);
      if ((param_3 == 0) || (((byte)local_140.dwFileAttributes & 0x10) == 0)) {
        SetFileAttributesA((LPCSTR)local_348,0x80);
        DVar1 = GetFileAttributesA((LPCSTR)local_348);
        if (((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) &&
           (BVar2 = DeleteFileA((LPCSTR)local_348), BVar2 == 0)) {
          local_34c = 0x80004005;
        }
      }
      else {
        FindClose(hFindFile);
        FUN_00412e00(local_348,param_2,param_3);
        iVar3 = RemoveDirectoryA((LPCSTR)local_348);
        hFindFile = FindFirstFileA((LPCSTR)local_244,&local_140);
      }
    }
    iVar4 = FindNextFileA(hFindFile,&local_140);
  }
  FindClose(hFindFile);
  return local_34c;
}


