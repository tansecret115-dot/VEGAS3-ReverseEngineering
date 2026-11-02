/* Module: vegas30k.dll
   Function: FUN_0106bae0
   Address: 0106bae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0106bae0(uchar *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HANDLE hFindFile;
  int iVar2;
  BOOL BVar3;
  uchar local_348 [260];
  _WIN32_FIND_DATAA local_244;
  uchar local_104 [260];
  
  iVar1 = FUN_0106b890(param_1,param_2);
  if (iVar1 < 0) {
    return iVar1;
  }
  BVar3 = 1;
  _mbscpy(local_104,param_1);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,"*.*");
  hFindFile = FindFirstFileA((LPCSTR)local_104,&local_244);
  if (hFindFile != (HANDLE)0xffffffff) {
    while ((BVar3 != 0 && (-1 < iVar1))) {
      iVar2 = lstrcmpA(local_244.cFileName,".");
      if ((iVar2 != 0) && (iVar2 = lstrcmpA(local_244.cFileName,".."), iVar2 != 0)) {
        _mbscpy(local_348,param_1);
        _SfAddSlashToPathName_8(local_348,0x104);
        _mbscat(local_348,(uchar *)local_244.cFileName);
        if (((byte)local_244.dwFileAttributes & 0x10) == 0) {
          iVar1 = FUN_0106aa90(local_348,param_2,0);
        }
        else {
          iVar1 = FUN_0106bae0(local_348,param_2,param_3 + 1);
        }
      }
      BVar3 = FindNextFileA(hFindFile,&local_244);
    }
  }
  FindClose(hFindFile);
  return iVar1;
}


