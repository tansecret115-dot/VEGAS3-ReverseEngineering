/* Module: vegas30k.dll
   Function: _SfPrepareName@12
   Address: 010935e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR _SfPrepareName_12(LPCSTR param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPCSTR lpszCurrent;
  
                    /* 0x935e0  1162  _SfPrepareName@12 */
  if (param_1 != (char *)0x0) {
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
      if (lpszCurrent == param_2) goto LAB_01093668;
      lpszCurrent = CharPrevA(param_2,lpszCurrent);
      iVar1 = _ismbcspace((int)*lpszCurrent);
    } while (iVar1 != 0);
    lpszCurrent = CharNextA(lpszCurrent);
LAB_01093668:
    *lpszCurrent = '\0';
    iVar1 = lstrlenA(param_2);
    if (iVar1 != 0) {
      return param_2;
    }
  }
  return (LPSTR)0x0;
}


