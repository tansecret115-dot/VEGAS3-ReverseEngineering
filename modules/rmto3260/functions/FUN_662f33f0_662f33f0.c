/* Module: rmto3260.dll
   Function: FUN_662f33f0
   Address: 662f33f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662f33f0(int param_1)

{
  LPCSTR lpFileName;
  UINT UVar1;
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_144;
  
  lpFileName = *(LPCSTR *)(param_1 + 4);
  if ((*(int *)(lpFileName + -8) != 0) && (*lpFileName != '.')) {
    if ((*(int *)(lpFileName + -8) == 3) && ((lpFileName[1] == ':' && (lpFileName[2] == '\\')))) {
      UVar1 = GetDriveTypeA(lpFileName);
      if (((UVar1 == 3) || (UVar1 == 4)) || (UVar1 == 2)) {
        return 1;
      }
      if (UVar1 == 6) {
        return 1;
      }
    }
    else {
      hFindFile = FindFirstFileA(lpFileName,&local_144);
      if ((hFindFile != (HANDLE)0xffffffff) &&
         (FindClose(hFindFile), ((byte)local_144.dwFileAttributes & 0x10) == 0x10)) {
        return 1;
      }
    }
  }
  return 0;
}


