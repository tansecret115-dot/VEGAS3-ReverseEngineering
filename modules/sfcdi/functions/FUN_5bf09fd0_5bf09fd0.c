/* Module: sfcdi.dll
   Function: FUN_5bf09fd0
   Address: 5bf09fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5bf09fd0(LPCSTR param_1,int *param_2)

{
  char cVar1;
  HANDLE hFile;
  uchar *puVar2;
  DWORD DVar3;
  HGLOBAL pvVar4;
  char *lpBuffer;
  char *pcVar5;
  DWORD local_18c;
  undefined4 local_188;
  LONG local_184;
  int local_180;
  int local_17c [30];
  uint local_104;
  char local_100 [256];
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_188 = 0;
    local_184 = 0;
    DVar3 = SetFilePointer(hFile,0,&local_184,2);
    local_188 = 0;
    local_184 = 0;
    SetFilePointer(hFile,0,&local_184,0);
    pvVar4 = GlobalAlloc(0x42,DVar3 + 1);
    lpBuffer = GlobalLock(pvVar4);
    if (lpBuffer == (char *)0x0) {
      DVar3 = 0x8007000e;
      puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x923);
      FUN_5bf25c20((HWND)0x0,0,puVar2);
    }
    else {
      ReadFile(hFile,lpBuffer,DVar3,&local_18c,(LPOVERLAPPED)0x0);
      if (local_18c == DVar3) {
        cVar1 = *lpBuffer;
        pcVar5 = lpBuffer;
        DVar3 = local_18c;
        while (cVar1 != '\0') {
          pcVar5 = (char *)FUN_5bf09260(local_100,pcVar5,0x100,&local_180);
          FUN_5bf09510();
          if (199 < local_104) {
            DVar3 = FUN_5bf2ade0(param_2,local_17c,0x7c,-1,(int *)0x0);
          }
          cVar1 = *pcVar5;
        }
      }
      else {
        DVar3 = 0x8004e008;
      }
      pvVar4 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar4);
    }
    CloseHandle(hFile);
    return DVar3;
  }
  puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x922);
  FUN_5bf25c20((HWND)0x0,0,puVar2);
  return 0x8004e007;
}


