/* Module: InstMsi-x86a.exe
   Function: FUN_01001f8c
   Address: 01001f8c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001f8c(LPCSTR param_1)

{
  HANDLE hFindFile;
  int iVar1;
  BOOL BVar2;
  _WIN32_FIND_DATAA local_248;
  CHAR local_108 [260];
  
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    lstrcpyA(local_108,param_1);
    lstrcatA(local_108,"*");
    hFindFile = FindFirstFileA(local_108,&local_248);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        lstrcpyA(local_108,param_1);
        if (((byte)local_248.dwFileAttributes & 0x10) == 0) {
          lstrcatA(local_108,local_248.cFileName);
          SetFileAttributesA(local_108,0x80);
          DeleteFileA(local_108);
        }
        else {
          iVar1 = lstrcmpA(local_248.cFileName,".");
          if (iVar1 != 0) {
            iVar1 = lstrcmpA(local_248.cFileName,"..");
            if (iVar1 != 0) {
              lstrcatA(local_108,local_248.cFileName);
              FUN_01005a4d(local_108,"");
              FUN_01001f8c(local_108);
            }
          }
        }
        BVar2 = FindNextFileA(hFindFile,&local_248);
      } while (BVar2 != 0);
      FindClose(hFindFile);
      RemoveDirectoryA(param_1);
    }
  }
  return;
}


