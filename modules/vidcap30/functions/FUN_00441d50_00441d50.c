/* Module: vidcap30.exe
   Function: FUN_00441d50
   Address: 00441d50
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_00441d50(LPCSTR param_1)

{
  int iVar1;
  LPSTR lpszCurrent;
  
  iVar1 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar1;
  while( true ) {
    lpszCurrent = CharPrevA(param_1,lpszCurrent);
    if (*lpszCurrent == '\0') {
      return lpszCurrent;
    }
    if (lpszCurrent == param_1) break;
    iVar1 = _ismbcspace((int)*lpszCurrent);
    if (iVar1 != 0) {
      return lpszCurrent;
    }
  }
  return lpszCurrent;
}


