/* Module: vidcap30.exe
   Function: FUN_00471100
   Address: 00471100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00471100(int param_1)

{
  UINT uMode;
  HANDLE hFile;
  BOOL BVar1;
  LONG LVar2;
  uint local_18;
  _FILETIME local_10;
  _FILETIME local_8;
  
  local_18 = 0x80004005;
  uMode = SetErrorMode(1);
  hFile = CreateFileA((LPCSTR)(param_1 + 0x158),0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    hFile = CreateFileA((LPCSTR)(param_1 + 0x158),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 1;
  }
  if (hFile == (HANDLE)0xffffffff) {
    local_18 = 0x8004e00a;
  }
  else {
    local_8.dwLowDateTime = 0;
    local_10.dwLowDateTime = 0;
    local_10.dwHighDateTime = 0;
    local_8.dwHighDateTime = 0;
    BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_8);
    if (BVar1 != 0) {
      FileTimeToLocalFileTime(&local_8,&local_10);
      LVar2 = CompareFileTime(&local_10,(FILETIME *)(param_1 + 300));
      local_18 = (uint)(LVar2 == 0);
      ((FILETIME *)(param_1 + 300))->dwLowDateTime = local_10.dwLowDateTime;
      *(DWORD *)(param_1 + 0x130) = local_10.dwHighDateTime;
    }
    CloseHandle(hFile);
  }
  SetErrorMode(uMode);
  return local_18;
}


