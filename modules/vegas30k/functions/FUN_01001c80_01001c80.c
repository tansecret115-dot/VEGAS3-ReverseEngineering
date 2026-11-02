/* Module: vegas30k.dll
   Function: FUN_01001c80
   Address: 01001c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001c80(LPCSTR param_1,int param_2)

{
  int iVar1;
  DWORD nNumberOfBytesToWrite;
  DWORD local_40;
  _DCB local_3c;
  CHAR local_20 [32];
  
  if (DAT_01209040 != '\0') goto LAB_01001d73;
  GetProfileStringA("Debug","LogToFilePath","COM1",&DAT_01209040,0x104);
  DAT_01204010 = CreateFileA(&DAT_01209040,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                             (HANDLE)0x0);
  iVar1 = lstrcmpA(&DAT_01209040,"COM1");
  if (iVar1 == 0) {
    if (DAT_01204010 == (HANDLE)0xffffffff) {
      DAT_01204010 = CreateFileA("AUX",0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
      if (DAT_01204010 == (HANDLE)0xffffffff) goto LAB_01001d47;
    }
    GetCommState(DAT_01204010,&local_3c);
    local_3c.BaudRate = 0x1c200;
    local_3c.Parity = '\0';
    local_3c.ByteSize = '\b';
    SetCommState(DAT_01204010,&local_3c);
  }
LAB_01001d47:
  GetProfileStringA("Debug","DeviceIoctl","0",local_20,0x20);
  DAT_01209144 = atol(local_20);
LAB_01001d73:
  if (DAT_01204010 != (HANDLE)0xffffffff) {
    nNumberOfBytesToWrite = lstrlenA(param_1);
    if (DAT_01209144 != 0) {
      if (param_2 != 0) {
        param_1[nNumberOfBytesToWrite] = '\n';
        nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
        param_1[nNumberOfBytesToWrite] = '\0';
      }
      DeviceIoControl(DAT_01204010,DAT_01209144,param_1,nNumberOfBytesToWrite,(LPVOID)0x0,0,
                      &local_40,(LPOVERLAPPED)0x0);
      return;
    }
    if (param_2 != 0) {
      param_1[nNumberOfBytesToWrite] = '\r';
      param_1[nNumberOfBytesToWrite + 1] = '\n';
      nNumberOfBytesToWrite = nNumberOfBytesToWrite + 2;
      param_1[nNumberOfBytesToWrite] = '\0';
    }
    WriteFile(DAT_01204010,param_1,nNumberOfBytesToWrite,&local_40,(LPOVERLAPPED)0x0);
  }
  return;
}


