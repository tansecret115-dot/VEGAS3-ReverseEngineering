/* Module: mp3plug.dll
   Function: FUN_5f692810
   Address: 5f692810
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f692810(int param_1)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  HANDLE hFile;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    lpWideCharStr = (LPCWSTR)(param_1 + 0x1c);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(lpWideCharStr,param_1 + 0x228);
    if (-1 < iVar1) {
      if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,&stack0xfffffef4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      hFile = CreateFileA(&stack0xfffffef4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        ((LPFILETIME)(param_1 + 0xc))->dwLowDateTime = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,(LPFILETIME)(param_1 + 0xc));
        CloseHandle(hFile);
      }
      *(undefined4 *)(param_1 + 8) = 1;
      return iVar1;
    }
  }
  return iVar1;
}


