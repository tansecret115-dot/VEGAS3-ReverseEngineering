/* Module: vidcap30.exe
   Function: _SfStripWhiteSpace@4
   Address: 00483730
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfStripWhiteSpace_4(LPCSTR param_1)

{
  int iVar1;
  LPCSTR lpsz;
  size_t _Size;
  LPSTR lpszCurrent;
  
                    /* 0x83730  625  _SfStripWhiteSpace@4 */
  iVar1 = _ismbcspace((int)*param_1);
  lpsz = param_1;
  if (iVar1 != 0) {
    do {
      lpsz = CharNextA(lpsz);
      iVar1 = _ismbcspace((int)*lpsz);
    } while (iVar1 != 0);
    if (lpsz != param_1) {
      _Size = 0;
      if (lpsz != (LPSTR)0x0) {
        iVar1 = lstrlenA(lpsz);
        _Size = iVar1 + 1;
      }
      memmove(param_1,lpsz,_Size);
    }
  }
  iVar1 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar1;
  if (lpszCurrent != param_1) {
    while( true ) {
      lpszCurrent = CharPrevA(param_1,lpszCurrent);
      iVar1 = _ismbcspace((int)*lpszCurrent);
      if (iVar1 == 0) break;
      if (lpszCurrent == param_1) {
        *lpszCurrent = '\0';
        return (int)lpszCurrent - (int)param_1;
      }
    }
    lpszCurrent = CharNextA(lpszCurrent);
  }
  *lpszCurrent = '\0';
  return (int)lpszCurrent - (int)param_1;
}


