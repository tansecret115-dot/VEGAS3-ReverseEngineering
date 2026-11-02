/* Module: 50comupd.exe
   Function: FUN_01005ac3
   Address: 01005ac3
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01005ac3(LPCSTR param_1)

{
  int iVar1;
  LPSTR lpszCurrent;
  LPSTR pCVar2;
  
  iVar1 = lstrlenA(param_1);
  lpszCurrent = CharPrevA(param_1,param_1 + iVar1);
  do {
    lpszCurrent = CharPrevA(param_1,lpszCurrent);
    if (lpszCurrent <= param_1) {
      if (*lpszCurrent != '\\') {
        return 0;
      }
      break;
    }
  } while (*lpszCurrent != '\\');
  if ((lpszCurrent == param_1) || (pCVar2 = CharPrevA(param_1,lpszCurrent), *pCVar2 == ':')) {
    lpszCurrent = CharNextA(lpszCurrent);
  }
  *lpszCurrent = '\0';
  return 1;
}


