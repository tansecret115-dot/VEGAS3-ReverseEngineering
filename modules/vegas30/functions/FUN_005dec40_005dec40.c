/* Module: vegas30.exe
   Function: FUN_005dec40
   Address: 005dec40
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_005dec40(HANDLE param_1,LPCSTR param_2,LPDWORD param_3)

{
  DWORD nNumberOfBytesToWrite;
  void *lpBuffer;
  BOOL BVar1;
  
  nNumberOfBytesToWrite = lstrlenA(param_2);
  lpBuffer = (void *)FUN_005e3da0(param_2,0);
  BVar1 = 0;
  if (lpBuffer != (void *)0x0) {
    BVar1 = WriteFile(param_1,lpBuffer,nNumberOfBytesToWrite,param_3,(LPOVERLAPPED)0x0);
    free(lpBuffer);
  }
  return BVar1;
}


