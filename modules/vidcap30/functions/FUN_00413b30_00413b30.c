/* Module: vidcap30.exe
   Function: FUN_00413b30
   Address: 00413b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413b30(undefined4 param_1,DWORD param_2,LPCSTR param_3)

{
  int iVar1;
  HGLOBAL hResData;
  LPVOID lpBuffer;
  DWORD nNumberOfBytesToWrite;
  HANDLE hFile;
  BOOL BVar2;
  undefined4 uVar3;
  
  iVar1 = _SfFindResource_12(DAT_005ba2a0,param_1,param_2);
  if (iVar1 == 0) {
    return 0x8004e00a;
  }
  hResData = (HGLOBAL)_SfLoadResource_8(DAT_005ba2a0,iVar1);
  if (hResData != (HGLOBAL)0x0) {
    lpBuffer = LockResource(hResData);
    nNumberOfBytesToWrite = _SfSizeofResource_8(DAT_005ba2a0,iVar1);
    if ((lpBuffer != (LPVOID)0x0) && (nNumberOfBytesToWrite != 0)) {
      hFile = CreateFileA(param_3,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar3 = 0;
        GetLastError();
        BVar2 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,&param_2,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (param_2 != nNumberOfBytesToWrite)) {
          uVar3 = 0x8004e009;
        }
        SetEndOfFile(hFile);
        CloseHandle(hFile);
        return uVar3;
      }
      return 0x8004e007;
    }
  }
  return 0x8000ffff;
}


