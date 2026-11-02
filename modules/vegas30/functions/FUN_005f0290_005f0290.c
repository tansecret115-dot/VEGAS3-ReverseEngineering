/* Module: vegas30.exe
   Function: FUN_005f0290
   Address: 005f0290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_005f0290(int param_1)

{
  LPCSTR lpFileName;
  int iVar1;
  UINT uMode;
  HANDLE hFile;
  BOOL BVar2;
  LONG LVar3;
  uint local_10;
  _FILETIME local_8;
  
  local_10 = 0x80004005;
  lpFileName = (LPCSTR)(param_1 + 0x170);
  iVar1 = FUN_005f03a0(lpFileName);
  if (iVar1 != 0) {
    return ~*(uint *)(param_1 + 0x134) >> 0xb & 1;
  }
  uMode = SetErrorMode(1);
  hFile = CreateFileA(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    hFile = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 1;
  }
  if (hFile == (HANDLE)0xffffffff) {
    local_10 = 0x8004e00a;
  }
  else {
    local_8.dwLowDateTime = 0;
    local_8.dwHighDateTime = 0;
    BVar2 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_8);
    if (BVar2 != 0) {
      LVar3 = CompareFileTime(&local_8,(FILETIME *)(param_1 + 0x144));
      local_10 = (uint)(LVar3 == 0);
      ((FILETIME *)(param_1 + 0x144))->dwLowDateTime = local_8.dwLowDateTime;
      *(DWORD *)(param_1 + 0x148) = local_8.dwHighDateTime;
    }
    CloseHandle(hFile);
  }
  SetErrorMode(uMode);
  return local_10;
}


