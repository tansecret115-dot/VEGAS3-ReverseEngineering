/* Module: vegas30.exe
   Function: FUN_0057e210
   Address: 0057e210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057e210(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *hFile;
  int iVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  undefined1 *dwBytes;
  uint local_c;
  int local_8;
  uint local_4;
  
  hFile = param_1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  local_c = 0;
  iVar1 = riff_FindListChunkFromStart(param_1,0x6c726468,&local_c);
  if (-1 < iVar1) {
    iVar1 = (local_c & 1) + local_c;
    SetFilePointer(hFile,iVar1,(PLONG)0x0,1);
    BVar2 = ReadFile(hFile,&local_8,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar2 != 0) && (param_1 == &DAT_00000008)) {
      dwBytes = (undefined1 *)(iVar1 + 0xc);
      if (local_8 == 0x4b4e554a) {
        dwBytes = (undefined1 *)(iVar1 + 0x14 + (local_4 & 1) + local_4);
      }
      SetFilePointer(hFile,-0x14 - iVar1,(PLONG)0x0,1);
      pvVar3 = GlobalAlloc(0,(SIZE_T)dwBytes);
      lpBuffer = GlobalLock(pvVar3);
      if (lpBuffer == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      BVar2 = ReadFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (param_1 != dwBytes)) {
        param_3 = (undefined4 *)0x8004e008;
      }
      else {
        param_3 = (undefined4 *)FUN_0057e380(lpBuffer,dwBytes,param_2,param_3);
        if (-1 < (int)param_3) {
          SetFilePointer(hFile,-(int)dwBytes,(PLONG)0x0,1);
          BVar2 = WriteFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
          if ((BVar2 == 0) || (param_1 != dwBytes)) {
            param_3 = (undefined4 *)0x8004e009;
          }
        }
      }
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar3);
      return (int)param_3;
    }
    iVar1 = -0x7ffb1ff8;
  }
  return iVar1;
}


