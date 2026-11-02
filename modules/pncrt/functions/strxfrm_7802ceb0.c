/* Module: pncrt.dll
   Function: strxfrm
   Address: 7802ceb0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl strxfrm(char *_Dst,char *_Src,size_t _MaxCount)

{
  char cVar1;
  int iVar2;
  long _CchDest;
  size_t sVar3;
  uint uVar4;
  BOOL unaff_EDI;
  bool bVar5;
  size_t local_14;
  WCHAR local_10 [8];
  
                    /* 0x2ceb0  724  strxfrm */
  local_14 = 0x7fffffff;
  if ((DAT_78042434 != (_locale_t)0x0) || (__lc_codepage != 0)) {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar5 = __setlc_active == 0;
    if (!bVar5) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    if ((DAT_78042434 != (_locale_t)0x0) || (__lc_codepage != 0)) {
      iVar2 = __crtGetLocaleInfoW((LCID)DAT_78042434,0xb,local_10,8,0);
      if (iVar2 != 0) {
        _CchDest = wcstol(local_10,(wchar_t **)0x0,10);
        sVar3 = __crtLCMapStringA(DAT_78042434,(LPCWSTR)0x400,(DWORD)_Src,(LPCSTR)0xffffffff,0,
                                  (LPSTR)0x0,_CchDest,1,unaff_EDI);
        if ((sVar3 != 0) && (local_14 = sVar3, (int)sVar3 <= (int)_MaxCount)) {
          __crtLCMapStringA(DAT_78042434,(LPCWSTR)0x400,(DWORD)_Src,(LPCSTR)0xffffffff,(int)_Dst,
                            (LPSTR)_MaxCount,_CchDest,1,unaff_EDI);
        }
      }
      if (bVar5) {
        InterlockedDecrement(&__unguarded_readlc_active);
        return local_14;
      }
      _unlock(0x13);
      return local_14;
    }
    if (bVar5) {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
    else {
      _unlock(0x13);
    }
    strncpy(_Dst,_Src,_MaxCount);
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *_Src;
      _Src = _Src + 1;
    } while (cVar1 != '\0');
    return ~uVar4 - 1;
  }
  strncpy(_Dst,_Src,_MaxCount);
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *_Src;
    _Src = _Src + 1;
  } while (cVar1 != '\0');
  return ~uVar4 - 1;
}


