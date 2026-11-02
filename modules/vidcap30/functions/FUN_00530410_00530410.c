/* Module: vidcap30.exe
   Function: FUN_00530410
   Address: 00530410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00530410(LPCSTR param_1,LPCSTR param_2)

{
  DWORD dwFileAttributes;
  HANDLE hFile;
  HANDLE hObject;
  DWORD DVar1;
  int iVar2;
  DWORD local_1c;
  _FILETIME local_18;
  _FILETIME local_10;
  _FILETIME local_8;
  
  dwFileAttributes = GetFileAttributesA(param_1);
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00536e70(0xaaaaaaa4,"FileCopy",0);
    return -0x7ffb1ffa;
  }
  GetFileTime(hFile,&local_8,&local_10,&local_18);
  hObject = CreateFileA(param_2,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    DVar1 = GetFileSize(hFile,&local_1c);
    if (DVar1 == 0 && local_1c == 0) {
      FUN_00536e70(0xaaaaaaa6,"FileCopy",0);
      iVar2 = -0x7ffb1ff5;
    }
    else {
      iVar2 = FUN_00530220(hFile,0,0,DVar1,local_1c,hObject,0,0);
      if (-1 < iVar2) {
        SetFileTime(hObject,&local_8,&local_10,&local_18);
        SetFileAttributesA(param_2,dwFileAttributes);
        CloseHandle(hObject);
        CloseHandle(hFile);
        return iVar2;
      }
    }
    CloseHandle(hObject);
    CloseHandle(hFile);
    return iVar2;
  }
  FUN_00536e70(0xaaaaaaa2,"FileCopy",0);
  CloseHandle(hFile);
  return -0x7ffb1ffa;
}


