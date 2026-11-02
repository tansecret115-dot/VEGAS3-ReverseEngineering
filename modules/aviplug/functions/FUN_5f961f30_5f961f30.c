/* Module: aviplug.dll
   Function: FUN_5f961f30
   Address: 5f961f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f961f30(uint param_1)

{
  SIZE_T dwBytes;
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  undefined4 uVar4;
  undefined4 local_28;
  LONG local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  uVar4 = 0;
  local_28 = 1;
  hFile = CreateFileA((LPCSTR)(param_1 + 0xd8),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 1;
  }
  local_20 = 0;
  SetFilePointer(hFile,0,&local_20,0);
  BVar2 = ReadFile(hFile,&local_1c,0xc,&param_1,(LPOVERLAPPED)0x0);
  if (((((BVar2 != 0) && (0xb < param_1)) && (local_1c == 0x46464952)) &&
      ((local_14 == 0x4b434148 &&
       (BVar2 = ReadFile(hFile,&local_10,0x10,&param_1,(LPOVERLAPPED)0x0), BVar2 != 0)))) &&
     ((0xf < param_1 && ((local_10 == 0x20424f42 && (7 < local_c)))))) {
    *(undefined4 *)(uVar1 + 0xb4) = local_8;
    dwBytes = local_18 - 0x14;
    *(undefined4 *)(uVar1 + 0xb8) = local_4;
    *(SIZE_T *)(uVar1 + 0x1e0) = dwBytes;
    local_28 = uVar4;
    if (0 < (int)dwBytes) {
      pvVar3 = GlobalAlloc(0x42,dwBytes);
      lpBuffer = GlobalLock(pvVar3);
      *(LPVOID *)(uVar1 + 0x1dc) = lpBuffer;
      if ((lpBuffer != (LPVOID)0x0) &&
         ((BVar2 = ReadFile(hFile,lpBuffer,*(DWORD *)(uVar1 + 0x1e0),&param_1,(LPOVERLAPPED)0x0),
          BVar2 == 0 || ((int)param_1 < *(int *)(uVar1 + 0x1e0))))) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(uVar1 + 0x1dc));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(uVar1 + 0x1dc));
        GlobalFree(pvVar3);
        *(undefined4 *)(uVar1 + 0x1dc) = 0;
        *(undefined4 *)(uVar1 + 0x1e0) = 0;
        CloseHandle(hFile);
        return 0;
      }
    }
  }
  CloseHandle(hFile);
  return local_28;
}


