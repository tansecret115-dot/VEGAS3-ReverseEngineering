/* Module: vegas30k.dll
   Function: SfCdiAddFileToLookaside
   Address: 01084e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiAddFileToLookaside(char *,void *,void * *) */

long SfCdiAddFileToLookaside(char *param_1,void *param_2,void **param_3)

{
  char *lpFileName;
  void *pvVar1;
  undefined1 *hFile;
  DWORD DVar2;
  uint nNumberOfBytesToRead;
  BOOL BVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD local_4;
  
  pvVar1 = param_2;
                    /* 0x84e80  290  ?SfCdiAddFileToLookaside@@YGJPADPAXPAPAX@Z */
  lpFileName = param_1;
  DVar5 = 0;
  if ((param_1 == (char *)0x0) || (param_2 == (void *)0xffffffff)) {
    param_1 = &DAT_80070057;
    hFile = &DAT_80070057;
  }
  else {
    param_1 = (char *)0x0;
    hFile = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (undefined1 *)0xffffffff) {
      return -0x7ffb1ff9;
    }
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    do {
      nNumberOfBytesToRead = *(int *)((int)pvVar1 + 0x10) - *(int *)((int)pvVar1 + 0x44);
      if (DVar2 - DVar5 < nNumberOfBytesToRead) {
        nNumberOfBytesToRead = DVar2 - DVar5;
      }
      BVar3 = ReadFile(hFile,*(LPVOID *)((int)pvVar1 + 0xac),nNumberOfBytesToRead,(LPDWORD)&param_2,
                       (LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        param_1 = (char *)0x8004e008;
LAB_01084f67:
        if (DVar5 != DVar2) {
          param_1 = (char *)0x8004e009;
        }
        break;
      }
      DVar5 = DVar5 + (int)param_2;
      DVar4 = *(int *)((int)pvVar1 + 0x44) + (int)param_2;
      *(DWORD *)((int)pvVar1 + 0x44) = DVar4;
      *(int *)((int)pvVar1 + 0xac) = *(int *)((int)pvVar1 + 0xac) + (int)param_2;
      if (DVar4 == *(DWORD *)((int)pvVar1 + 0x10)) {
        BVar3 = WriteFile(*(HANDLE *)((int)pvVar1 + 4),*(LPCVOID *)((int)pvVar1 + 0x34),
                          *(DWORD *)((int)pvVar1 + 0x10),&local_4,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          GetLastError();
          param_1 = (char *)0x8004e009;
          goto LAB_01084f67;
        }
        *(undefined4 *)((int)pvVar1 + 0x44) = 0;
        *(undefined4 *)((int)pvVar1 + 0xac) = *(undefined4 *)((int)pvVar1 + 0x34);
      }
    } while (DVar5 != DVar2);
  }
  if (hFile != (undefined1 *)0xffffffff) {
    CloseHandle(hFile);
  }
  return (long)param_1;
}


