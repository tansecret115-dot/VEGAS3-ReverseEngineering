/* Module: vegas30.exe
   Function: FUN_00402790
   Address: 00402790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402790(LPCSTR param_1)

{
  HANDLE hFile;
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
  BOOL BVar2;
  undefined4 uVar3;
  LPCVOID pMem;
  undefined4 local_4;
  
  pMem = (LPCVOID)0x0;
  if (param_1 == (LPCSTR)0x0) {
    return 0x80070057;
  }
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
    param_1 = (LPCSTR)GetFileSize(hFile,(LPDWORD)0x0);
    pvVar1 = GlobalAlloc(0x40,(int)param_1 + 2);
    lpBuffer = GlobalLock(pvVar1);
    if (lpBuffer == (LPVOID)0x0) {
      CloseHandle(hFile);
      return 0x8007000e;
    }
    local_4 = 0;
    BVar2 = ReadFile(hFile,lpBuffer,(DWORD)param_1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      *(undefined1 *)((int)lpBuffer + (int)param_1) = 0;
      *(undefined1 *)((int)lpBuffer + (int)param_1 + 1U) = 0;
      pMem = (LPCVOID)FUN_00401f70(lpBuffer,&local_4);
    }
    pvVar1 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar1);
    CloseHandle(hFile);
    uVar3 = 1;
    if (pMem != (LPCVOID)0x0) {
      uVar3 = FUN_00402470(pMem,0,local_4);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    return uVar3;
  }
  return 0x8004e007;
}


