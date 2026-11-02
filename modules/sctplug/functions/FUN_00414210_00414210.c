/* Module: sctplug.dll
   Function: FUN_00414210
   Address: 00414210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414210(HANDLE param_1,DWORD param_2,LPCVOID param_3,uint param_4,int *param_5)

{
  int iVar1;
  BOOL BVar2;
  uint nNumberOfBytesToWrite;
  
  nNumberOfBytesToWrite = param_4;
  iVar1 = FUN_004141c0(param_1);
  if (-1 < iVar1) {
    BVar2 = WriteFile(param_1,param_3,nNumberOfBytesToWrite,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return -0x7ffb1ff7;
    }
    if ((nNumberOfBytesToWrite & 1) != 0) {
      param_4 = param_4 & 0xffffff00;
      BVar2 = WriteFile(param_1,&param_4,1,&param_2,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff7;
      }
      nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = nNumberOfBytesToWrite + 8;
    }
    iVar1 = 0;
  }
  return iVar1;
}


