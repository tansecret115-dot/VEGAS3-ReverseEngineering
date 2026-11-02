/* Module: extmondrv.dll
   Function: FUN_00406a50
   Address: 00406a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406a50(LPCSTR param_1,int param_2)

{
  int iVar1;
  DWORD nNumberOfBytesToWrite;
  DWORD local_40;
  _DCB local_3c;
  CHAR local_20 [32];
  
  if (DAT_0045b010 != '\0') goto LAB_00406b43;
  GetProfileStringA("Debug","LogToFilePath","COM1",&DAT_0045b010,0x104);
  DAT_0045a014 = CreateFileA(&DAT_0045b010,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                             (HANDLE)0x0);
  iVar1 = lstrcmpA(&DAT_0045b010,"COM1");
  if (iVar1 == 0) {
    if (DAT_0045a014 == (HANDLE)0xffffffff) {
      DAT_0045a014 = CreateFileA("AUX",0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
      if (DAT_0045a014 == (HANDLE)0xffffffff) goto LAB_00406b17;
    }
    GetCommState(DAT_0045a014,&local_3c);
    local_3c.BaudRate = 0x1c200;
    local_3c.Parity = '\0';
    local_3c.ByteSize = '\b';
    SetCommState(DAT_0045a014,&local_3c);
  }
LAB_00406b17:
  GetProfileStringA("Debug","DeviceIoctl","0",local_20,0x20);
  DAT_0045b114 = atol(local_20);
LAB_00406b43:
  if (DAT_0045a014 != (HANDLE)0xffffffff) {
    nNumberOfBytesToWrite = lstrlenA(param_1);
    if (DAT_0045b114 != 0) {
      if (param_2 != 0) {
        param_1[nNumberOfBytesToWrite] = '\n';
        nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
        param_1[nNumberOfBytesToWrite] = '\0';
      }
      DeviceIoControl(DAT_0045a014,DAT_0045b114,param_1,nNumberOfBytesToWrite,(LPVOID)0x0,0,
                      &local_40,(LPOVERLAPPED)0x0);
      return;
    }
    if (param_2 != 0) {
      param_1[nNumberOfBytesToWrite] = '\r';
      param_1[nNumberOfBytesToWrite + 1] = '\n';
      nNumberOfBytesToWrite = nNumberOfBytesToWrite + 2;
      param_1[nNumberOfBytesToWrite] = '\0';
    }
    WriteFile(DAT_0045a014,param_1,nNumberOfBytesToWrite,&local_40,(LPOVERLAPPED)0x0);
  }
  return;
}


