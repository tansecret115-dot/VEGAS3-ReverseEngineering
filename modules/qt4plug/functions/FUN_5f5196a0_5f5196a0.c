/* Module: qt4plug.dll
   Function: FUN_5f5196a0
   Address: 5f5196a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5196a0(DWORD param_1)

{
  DWORD DVar1;
  int iVar2;
  HANDLE local_8;
  HANDLE local_4;
  
  WaitForSingleObject(DAT_5f5a3e60,0xffffffff);
  if (param_1 == 0) {
    if ((DAT_5f5a3ec0 == 0) || (DAT_5f5a3ec0 = DAT_5f5a3ec0 + -1, DAT_5f5a3ec0 == 0)) {
      if (DAT_5f5a3ecc != (HANDLE)0x0) {
        SetEvent(DAT_5f5a3ecc);
        WaitForSingleObject(DAT_5f5a3ed0,3000);
        CloseHandle(DAT_5f5a3ec8);
        CloseHandle(DAT_5f5a3ecc);
        CloseHandle(DAT_5f5a3ed0);
        DAT_5f5a3ec8 = (HANDLE)0x0;
        DAT_5f5a3ecc = (HANDLE)0x0;
        DAT_5f5a3ed0 = (HANDLE)0x0;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else if (DAT_5f5a3ec4 == 0) {
    if (DAT_5f5a3ec0 == 0) {
      DAT_5f5a3ec8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      DAT_5f5a3ecc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      local_8 = DAT_5f5a3ec8;
      local_4 = DAT_5f5a3ecc;
      DAT_5f5a3ed0 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_5f519890,&local_8,0,&param_1);
      if (DAT_5f5a3ed0 == (HANDLE)0x0) {
        iVar2 = -0x7ffb1fb9;
        DAT_5f5a3ec0 = DAT_5f5a3ec0 + 1;
        goto LAB_5f51986e;
      }
      DVar1 = WaitForSingleObject(DAT_5f5a3ec8,12000);
      iVar2 = DAT_5f5a2ae4;
      if (DVar1 == 0x102) {
        iVar2 = -0x7ffb1fb9;
        TerminateThread(DAT_5f5a3ed0,0);
LAB_5f51976b:
        DAT_5f5a3ec4 = 1;
        if (DVar1 != 0x102) {
          SetEvent(DAT_5f5a3ecc);
          WaitForSingleObject(DAT_5f5a3ed0,3000);
        }
        CloseHandle(DAT_5f5a3ec8);
        CloseHandle(DAT_5f5a3ecc);
        CloseHandle(DAT_5f5a3ed0);
        DAT_5f5a3ec8 = (HANDLE)0x0;
        DAT_5f5a3ecc = (HANDLE)0x0;
        DAT_5f5a3ed0 = (HANDLE)0x0;
        ReleaseMutex(DAT_5f5a3e60);
        return iVar2;
      }
      _fpreset();
      if (iVar2 < 0) goto LAB_5f51976b;
    }
    else {
      iVar2 = 0;
    }
    DAT_5f5a3ec0 = DAT_5f5a3ec0 + 1;
  }
  else {
    iVar2 = -0x7ffb1fb9;
  }
LAB_5f51986e:
  ReleaseMutex(DAT_5f5a3e60);
  return iVar2;
}


