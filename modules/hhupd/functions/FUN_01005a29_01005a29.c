/* Module: hhupd.exe
   Function: FUN_01005a29
   Address: 01005a29
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01005a29(LPCSTR param_1)

{
  int iVar1;
  LPCSTR lpszCurrent;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = lstrlenA(param_1);
  lpszCurrent = CharPrevA(param_1,param_1 + iVar1);
  do {
    lpszCurrent = CharPrevA(param_1,lpszCurrent);
    if (lpszCurrent <= param_1) break;
  } while (*lpszCurrent != '\\');
  if (*lpszCurrent == '\\') {
    if (lpszCurrent == param_1) {
      lpszCurrent = CharNextA(lpszCurrent);
    }
    *lpszCurrent = '\0';
    uVar2 = 1;
  }
  return uVar2;
}


