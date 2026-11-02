/* Module: vidcap30.exe
   Function: FUN_0040edd0
   Address: 0040edd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040edd0(LPCSTR param_1,int param_2)

{
  int iVar1;
  DWORD nNumberOfBytesToWrite;
  DWORD local_40;
  _DCB local_3c;
  CHAR local_20 [32];
  
  if (DAT_005bbd28 != '\0') goto LAB_0040eec3;
  GetProfileStringA("Debug","LogToFilePath","COM1",&DAT_005bbd28,0x104);
  DAT_005b26fc = CreateFileA(&DAT_005bbd28,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                             (HANDLE)0x0);
  iVar1 = lstrcmpA(&DAT_005bbd28,"COM1");
  if (iVar1 == 0) {
    if (DAT_005b26fc == (HANDLE)0xffffffff) {
      DAT_005b26fc = CreateFileA("AUX",0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
      if (DAT_005b26fc == (HANDLE)0xffffffff) goto LAB_0040ee97;
    }
    GetCommState(DAT_005b26fc,&local_3c);
    local_3c.BaudRate = 0x1c200;
    local_3c.Parity = '\0';
    local_3c.ByteSize = '\b';
    SetCommState(DAT_005b26fc,&local_3c);
  }
LAB_0040ee97:
  GetProfileStringA("Debug","DeviceIoctl","0",local_20,0x20);
  DAT_005bbe2c = atol(local_20);
LAB_0040eec3:
  if (DAT_005b26fc != (HANDLE)0xffffffff) {
    nNumberOfBytesToWrite = lstrlenA(param_1);
    if (DAT_005bbe2c != 0) {
      if (param_2 != 0) {
        param_1[nNumberOfBytesToWrite] = '\n';
        nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
        param_1[nNumberOfBytesToWrite] = '\0';
      }
      DeviceIoControl(DAT_005b26fc,DAT_005bbe2c,param_1,nNumberOfBytesToWrite,(LPVOID)0x0,0,
                      &local_40,(LPOVERLAPPED)0x0);
      return;
    }
    if (param_2 != 0) {
      param_1[nNumberOfBytesToWrite] = '\r';
      param_1[nNumberOfBytesToWrite + 1] = '\n';
      nNumberOfBytesToWrite = nNumberOfBytesToWrite + 2;
      param_1[nNumberOfBytesToWrite] = '\0';
    }
    WriteFile(DAT_005b26fc,param_1,nNumberOfBytesToWrite,&local_40,(LPOVERLAPPED)0x0);
  }
  return;
}


