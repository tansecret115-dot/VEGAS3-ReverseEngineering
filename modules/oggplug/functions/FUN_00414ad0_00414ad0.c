/* Module: oggplug.dll
   Function: FUN_00414ad0
   Address: 00414ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414ad0(HANDLE param_1,LPCSTR param_2)

{
  HANDLE hFile;
  int iVar1;
  char *lpString;
  int iVar2;
  BOOL BVar3;
  uint nNumberOfBytesToWrite;
  int local_c [3];
  
  hFile = param_1;
  local_c[0] = 0;
  local_c[1] = 0;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = FUN_00422a00(hFile,local_c,local_c + 1);
  if (-1 < iVar1) {
    SetFilePointer(hFile,local_c[0],(PLONG)0x0,1);
    if (param_2 == (LPCSTR)0x0) {
      return -0x7fffbffb;
    }
    lpString = FUN_00418870(param_2);
    iVar2 = lstrlenA(lpString);
    nNumberOfBytesToWrite = iVar2 + 1;
    iVar1 = FUN_00422770(hFile);
    if (-1 < iVar1) {
      BVar3 = WriteFile(hFile,lpString,nNumberOfBytesToWrite,(LPDWORD)(local_c + 2),
                        (LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        return -0x7ffb1ff7;
      }
      if ((nNumberOfBytesToWrite & 1) != 0) {
        param_1 = (HANDLE)((uint)param_1 & 0xffffff00);
        BVar3 = WriteFile(hFile,&param_1,1,(LPDWORD)(local_c + 2),(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          return -0x7ffb1ff7;
        }
        nNumberOfBytesToWrite = iVar2 + 2;
      }
      FUN_00422690(hFile,nNumberOfBytesToWrite + 8);
      iVar1 = 0;
    }
  }
  return iVar1;
}


