/* Module: vegas30k.dll
   Function: FUN_0106bef0
   Address: 0106bef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0106bef0(LPCSTR param_1,uchar *param_2,int param_3,int param_4)

{
  HANDLE hFindFile;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  uchar local_44c [260];
  _WIN32_FIND_DATAA local_348;
  uchar local_208 [260];
  uchar local_104 [260];
  
  iVar3 = 0;
  BVar4 = 1;
  if (param_2 == (uchar *)0x0) {
    DVar2 = GetFileAttributesA(param_1);
    if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) == 0)) {
      return 1;
    }
    DVar2 = GetFileAttributesA(param_1);
    if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) != 0)) {
      iVar3 = FUN_0106bef0(param_1,&DAT_011e1b7c,1,0);
      return iVar3 + 1;
    }
  }
  else {
    _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
    _mbscpy(local_208,local_104);
    _SfAddSlashToPathName_8(local_208,0x104);
    _mbscat(local_208,param_2);
    hFindFile = FindFirstFileA((LPCSTR)local_208,&local_348);
    if (hFindFile != (HANDLE)0xffffffff) {
      while (BVar4 != 0) {
        iVar1 = lstrcmpA(local_348.cFileName,".");
        if ((iVar1 != 0) && (iVar1 = lstrcmpA(local_348.cFileName,".."), iVar1 != 0)) {
          _mbscpy(local_44c,local_104);
          _SfAddSlashToPathName_8(local_44c,0x104);
          _mbscat(local_44c,(uchar *)local_348.cFileName);
          if ((param_3 != 0) && (((byte)local_348.dwFileAttributes & 0x10) != 0)) {
            _SfAddSlashToPathName_8(local_44c,0x104);
            iVar1 = FUN_0106bef0(local_44c,param_2,param_3,param_4 + 1);
            iVar3 = iVar3 + iVar1;
          }
          iVar3 = iVar3 + 1;
        }
        BVar4 = FindNextFileA(hFindFile,&local_348);
      }
    }
    FindClose(hFindFile);
  }
  return iVar3;
}


