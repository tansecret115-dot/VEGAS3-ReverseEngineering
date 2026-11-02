/* Module: stl2plg.dll
   Function: FUN_00403890
   Address: 00403890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403890(HANDLE param_1,int param_2,int param_3,SIZE_T param_4)

{
  SIZE_T nNumberOfBytesToRead;
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  
  nNumberOfBytesToRead = param_4;
  pvVar1 = GlobalAlloc(0x40,param_4);
  lpBuffer = GlobalLock(pvVar1);
  iVar4 = 0;
  if (0 < param_2) {
    do {
      BVar2 = ReadFile(param_1,lpBuffer,nNumberOfBytesToRead,&param_4,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) break;
      iVar3 = 0;
      if (0 < (int)nNumberOfBytesToRead) {
        do {
          *(undefined1 *)(param_3 + iVar3) = *(undefined1 *)(iVar3 + (int)lpBuffer);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)nNumberOfBytesToRead);
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + nNumberOfBytesToRead;
    } while (iVar4 < param_2);
  }
  if (lpBuffer != (LPVOID)0x0) {
    pvVar1 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar1);
  }
  return;
}


