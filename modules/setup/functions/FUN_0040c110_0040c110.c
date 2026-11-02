/* Module: Setup.exe
   Function: FUN_0040c110
   Address: 0040c110
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040c110(void *this,uchar *param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  HANDLE hFindFile;
  int iVar2;
  BOOL BVar3;
  uchar local_348 [260];
  _WIN32_FIND_DATAA local_244;
  uchar local_104 [260];
  
  iVar1 = FUN_0040bec0(this,(LPCSTR)param_1,param_2);
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
          iVar1 = FUN_0040b0c0(this,(LPCSTR)local_348,param_2,(uchar *)0x0);
        }
        else {
          iVar1 = FUN_0040c110(this,local_348,param_2,param_3 + 1);
        }
      }
      BVar3 = FindNextFileA(hFindFile,&local_244);
    }
  }
  FindClose(hFindFile);
  return iVar1;
}


