/* Module: pncrt.dll
   Function: __crtCompareStringA
   Address: 78012710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
__crtCompareStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
                   int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  LPCSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iVar5;
  int local_18;
  _cpinfo local_14;
  
                    /* 0x12710  95  __crtCompareStringA */
  if (DAT_78042490 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_78042490 = 2;
    }
    else {
      DAT_78042490 = 1;
    }
  }
  cbMultiByte = _LpString1;
  if (0 < (int)_LpString1) {
    cbMultiByte = (LPCSTR)FUN_780129e0((char *)_DwCmpFlags,(int)_LpString1);
  }
  if (0 < (int)_LpString2) {
    _LpString2 = (LPCSTR)FUN_780129e0((char *)_CchCount1,(int)_LpString2);
  }
  if (DAT_78042490 == 2) {
    iVar1 = CompareStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(PCNZCH)_DwCmpFlags,(int)cbMultiByte,
                           (PCNZCH)_CchCount1,(int)_LpString2);
    return iVar1;
  }
  local_18 = DAT_78042490;
  if (DAT_78042490 == 1) {
    local_18 = 0;
    _LpString1 = (LPCSTR)0x0;
    if (_CchCount2 == 0) {
      _CchCount2 = __lc_codepage;
    }
    if ((cbMultiByte == (LPCSTR)0x0) || (_LpString2 == (LPCSTR)0x0)) {
      if (cbMultiByte == _LpString2) {
        return 2;
      }
      if (1 < (int)_LpString2) {
        return 1;
      }
      if (1 < (int)cbMultiByte) {
        return 3;
      }
      BVar2 = GetCPInfo(_CchCount2,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *(byte *)_DwCmpFlags) && (*(byte *)_DwCmpFlags <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < (int)_LpString2) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *(byte *)_CchCount1) && (*(byte *)_CchCount1 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_DwCmpFlags,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = malloc(iVar1 * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(_CchCount2,1,(LPCSTR)_DwCmpFlags,(int)cbMultiByte,lpWideCharStr,
                                iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_CchCount1,(int)_LpString2,(LPWSTR)0x0,0)
         , iVar4 != 0)) && (_LpString1 = malloc(iVar4 * 2), (LPWSTR)_LpString1 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(_CchCount2,1,(LPCSTR)_CchCount1,(int)_LpString2,
                                    (LPWSTR)_LpString1,iVar4), iVar5 != 0)) {
      local_18 = CompareStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,
                                (PCNZWCH)_LpString1,iVar4);
    }
    free(lpWideCharStr);
    free(_LpString1);
  }
  return local_18;
}


