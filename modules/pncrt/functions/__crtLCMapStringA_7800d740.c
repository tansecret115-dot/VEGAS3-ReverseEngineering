/* Module: pncrt.dll
   Function: __crtLCMapStringA
   Address: 7800d740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
__crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                 int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  LPCSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
                    /* 0xd740  97  __crtLCMapStringA */
  if (DAT_78042450 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_78042450 = 2;
    }
    else {
      DAT_78042450 = 1;
    }
  }
  cbMultiByte = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    cbMultiByte = (LPCSTR)FUN_780129e0((char *)_DwMapFlag,(int)_LpSrcStr);
  }
  if (DAT_78042450 == 2) {
    iVar1 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)cbMultiByte,
                         (LPSTR)_CchSrc,(int)_LpDestStr);
    return iVar1;
  }
  if (DAT_78042450 != 1) {
    return DAT_78042450;
  }
  _LpSrcStr = (LPCSTR)0x0;
  if (_CchDest == 0) {
    _CchDest = __lc_codepage;
  }
  iVar1 = MultiByteToWideChar(_CchDest,(-(uint)(_Code_page != 0) & 8) + 1,(LPCSTR)_DwMapFlag,
                              (int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = malloc(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(_CchDest,1,(LPCSTR)_DwMapFlag,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,(LPWSTR)0x0,0),
     iVar2 != 0)) {
    if (((uint)_LocaleName & 0x400) == 0) {
      _LpSrcStr = malloc(iVar2 * 2);
      if (((LPCWSTR)_LpSrcStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,
                               (LPWSTR)_LpSrcStr,iVar2), iVar1 == 0)) goto LAB_7800d948;
      if (_LpDestStr == (LPSTR)0x0) {
        iVar2 = WideCharToMultiByte(_CchDest,0x220,(LPCWSTR)_LpSrcStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(_CchDest,0x220,(LPCWSTR)_LpSrcStr,iVar2,(LPSTR)_CchSrc,
                                    (int)_LpDestStr,(LPCSTR)0x0,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (_LpDestStr == (LPSTR)0x0) goto LAB_7800d8af;
      if ((int)_LpDestStr < iVar2) goto LAB_7800d948;
      iVar1 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,(LPWSTR)_CchSrc,
                           (int)_LpDestStr);
    }
    if (iVar1 != 0) {
LAB_7800d8af:
      free(lpWideCharStr);
      free(_LpSrcStr);
      return iVar2;
    }
  }
LAB_7800d948:
  free(lpWideCharStr);
  free(_LpSrcStr);
  return 0;
}


