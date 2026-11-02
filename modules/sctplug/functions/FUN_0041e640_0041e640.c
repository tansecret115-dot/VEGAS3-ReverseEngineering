/* Module: sctplug.dll
   Function: FUN_0041e640
   Address: 0041e640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e640(LPCSTR param_1,LPCSTR param_2)

{
  HANDLE hFile;
  uint uVar1;
  BOOL BVar2;
  char *lpString2;
  int iVar3;
  uint local_214;
  DWORD local_210;
  undefined4 local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    uVar1 = FUN_00414590(hFile,0x49504653,&local_214,&local_20c);
    if (-1 < (int)uVar1) {
      uVar1 = local_214;
      if (0x103 < local_214) {
        uVar1 = 0x104;
      }
      BVar2 = ReadFile(hFile,local_208,uVar1,&local_210,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        lpString2 = FUN_0040f1a0(param_1);
        local_208[local_214 - 1] = '\0';
        _mbscpy(local_104,local_208);
        iVar3 = lstrcmpA((LPCSTR)local_104,lpString2);
        if (iVar3 == 0) {
          CloseHandle(hFile);
          return 1;
        }
      }
    }
    CloseHandle(hFile);
  }
  return 0;
}


