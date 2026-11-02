/* Module: Setup.exe
   Function: _SfPrepareName@12
   Address: 00416470
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR _SfPrepareName_12(LPCSTR param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPCSTR lpszCurrent;
  
                    /* 0x16470  308  _SfPrepareName@12 */
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = _ismbcspace((int)*param_1);
    while (iVar1 != 0) {
      param_1 = CharNextA(param_1);
      iVar1 = _ismbcspace((int)*param_1);
    }
    lstrcpynA(param_2,param_1,param_3);
    param_2[param_3 + -1] = '\0';
    iVar1 = lstrlenA(param_2);
    lpszCurrent = param_2 + iVar1;
    do {
      if (lpszCurrent == param_2) goto LAB_004164f8;
      lpszCurrent = CharPrevA(param_2,lpszCurrent);
      iVar1 = _ismbcspace((int)*lpszCurrent);
    } while (iVar1 != 0);
    lpszCurrent = CharNextA(lpszCurrent);
LAB_004164f8:
    *lpszCurrent = '\0';
    iVar1 = lstrlenA(param_2);
    if (iVar1 != 0) {
      return param_2;
    }
  }
  return (LPSTR)0x0;
}


