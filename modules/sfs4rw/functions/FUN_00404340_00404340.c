/* Module: sfs4rw.dll
   Function: FUN_00404340
   Address: 00404340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404340(int param_1,uchar *param_2,DWORD param_3)

{
  uchar *_Dest;
  HGLOBAL pvVar1;
  undefined4 *lpBuffer;
  uint _Seed;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar local_10 [16];
  
  _Dest = param_2;
  *param_2 = '\0';
  pvVar1 = GlobalAlloc(0x42,32000);
  lpBuffer = GlobalLock(pvVar1);
  puVar4 = lpBuffer;
  for (iVar3 = 8000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_2 = (uchar *)0x0;
  param_1 = FUN_004047f0(param_1,(int)lpBuffer,(int *)&param_2,(int *)0x7d00);
  if (-1 < param_1) {
    if (param_2 == (uchar *)0x0) {
      param_1 = -0x7ffb1f12;
    }
    else {
      GetTempPathA(param_3,(LPSTR)_Dest);
      _Seed = FUN_00427af0();
      srand(_Seed);
      rand();
      rand();
      FUN_00420f60(local_10,(BYTE *)"%x%x.ini");
      _mbscat(_Dest,local_10);
      hFile = CreateFileA((LPCSTR)_Dest,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,2,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        param_3 = 0;
        BVar2 = WriteFile(hFile,lpBuffer,(DWORD)param_2,&param_3,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          param_1 = -0x7ffb1ff7;
        }
        CloseHandle(hFile);
      }
    }
  }
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar1);
  return param_1;
}


