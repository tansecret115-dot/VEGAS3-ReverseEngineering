/* Module: sfcdi.dll
   Function: FUN_5bf46b30
   Address: 5bf46b30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR __thiscall FUN_5bf46b30(void *this,LPCSTR param_1,DWORD param_2)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint nNumberOfBytesToRead;
  BOOL BVar3;
  DWORD DVar4;
  DWORD DVar5;
  void *local_4;
  
  DVar1 = param_2;
  lpFileName = param_1;
  DVar5 = 0;
  local_4 = this;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == 0xffffffff)) {
    param_1 = (LPCSTR)0x80070057;
    hFile = (HANDLE)0x80070057;
  }
  else {
    param_1 = (LPCSTR)0x0;
    hFile = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      return (LPCSTR)0x8004e007;
    }
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    do {
      nNumberOfBytesToRead = *(int *)(DVar1 + 0x10) - *(int *)(DVar1 + 0x44);
      if (DVar2 - DVar5 < nNumberOfBytesToRead) {
        nNumberOfBytesToRead = DVar2 - DVar5;
      }
      BVar3 = ReadFile(hFile,*(LPVOID *)(DVar1 + 0xac),nNumberOfBytesToRead,&param_2,
                       (LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        param_1 = (LPCSTR)0x8004e008;
LAB_5bf46c17:
        if (DVar5 != DVar2) {
          param_1 = (LPCSTR)0x8004e009;
        }
        break;
      }
      DVar5 = DVar5 + param_2;
      DVar4 = *(int *)(DVar1 + 0x44) + param_2;
      *(DWORD *)(DVar1 + 0x44) = DVar4;
      *(DWORD *)(DVar1 + 0xac) = *(int *)(DVar1 + 0xac) + param_2;
      if (DVar4 == *(DWORD *)(DVar1 + 0x10)) {
        BVar3 = WriteFile(*(HANDLE *)(DVar1 + 4),*(LPCVOID *)(DVar1 + 0x34),*(DWORD *)(DVar1 + 0x10)
                          ,(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          GetLastError();
          param_1 = (LPCSTR)0x8004e009;
          goto LAB_5bf46c17;
        }
        *(undefined4 *)(DVar1 + 0x44) = 0;
        *(undefined4 *)(DVar1 + 0xac) = *(undefined4 *)(DVar1 + 0x34);
      }
    } while (DVar5 != DVar2);
  }
  if (hFile != (HANDLE)0xffffffff) {
    CloseHandle(hFile);
  }
  return param_1;
}


