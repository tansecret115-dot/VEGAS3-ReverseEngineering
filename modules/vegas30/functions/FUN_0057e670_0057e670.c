/* Module: vegas30.exe
   Function: FUN_0057e670
   Address: 0057e670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057e670(HANDLE param_1,int param_2)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  undefined4 *lpBuffer;
  HANDLE dwBytes;
  uint local_18;
  DWORD local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  hFile = param_1;
  dwBytes = (HANDLE)0x0;
  local_10 = 0;
  iVar1 = riff_FindListChunkFromStart(param_1,0x4f464e49,&local_10);
  if (-1 < iVar1) {
    SetFilePointer(hFile,-0xc,(PLONG)0x0,1);
  }
  local_18 = 0;
  iVar1 = riff_FindListChunkFromStart(hFile,0x6c726468,&local_18);
  if (-1 < iVar1) {
    local_14 = SetFilePointer(hFile,(local_18 & 1) + local_18,(PLONG)0x0,1);
    BVar2 = ReadFile(hFile,&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar2 != 0) && (param_1 == (HANDLE)0xc)) {
      while ((local_c == 0x4b4e554a || ((local_c == 0x5453494c && (local_4 == 0x4f464e49))))) {
        dwBytes = (HANDLE)((int)dwBytes + (local_8 & 1) + local_8 + 8);
        SetFilePointer(hFile,(int)dwBytes - 0xc,(PLONG)0x0,1);
        BVar2 = ReadFile(hFile,&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || ((param_1 != (HANDLE)0xc || ((HANDLE)0x3ffff < dwBytes)))) break;
      }
      if (dwBytes < (HANDLE)0x14) {
        return 1;
      }
      pvVar3 = GlobalAlloc(0,(SIZE_T)dwBytes);
      lpBuffer = GlobalLock(pvVar3);
      if (lpBuffer == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      SetFilePointer(hFile,local_14,(PLONG)0x0,0);
      BVar2 = ReadFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (param_1 != dwBytes)) {
        param_2 = -0x7ffb1ff8;
      }
      else {
        *lpBuffer = 0x4b4e554a;
        lpBuffer[1] = (int)dwBytes - 8;
        param_2 = FUN_0057e850(lpBuffer,dwBytes,param_2);
        if (-1 < param_2) {
          SetFilePointer(hFile,local_14,(PLONG)0x0,0);
          BVar2 = WriteFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
          if ((BVar2 == 0) || (param_1 != dwBytes)) {
            param_2 = -0x7ffb1ff7;
          }
        }
      }
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar3);
      return param_2;
    }
    iVar1 = -0x7ffb1ff8;
  }
  return iVar1;
}


