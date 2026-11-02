/* Module: pncrt.dll
   Function: _strnicoll
   Address: 7802ba70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  long _CchCount2;
  int *piVar2;
  int unaff_EDI;
  bool bVar3;
  WCHAR local_10 [8];
  
                    /* 0x2ba70  464  _strnicoll */
  if (_MaxCount == 0) {
    return 0;
  }
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar3 = __setlc_active == 0;
  if (!bVar3) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  if (DAT_78042434 == (_locale_t)0x0) {
    if (bVar3) {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
    else {
      _unlock(0x13);
    }
    iVar1 = _strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __crtGetLocaleInfoW((LCID)DAT_78042434,0xb,local_10,8,0);
  if (iVar1 == 0) {
    if (bVar3) {
      InterlockedDecrement(&__unguarded_readlc_active);
      return 0x7fffffff;
    }
    _unlock(0x13);
    return 0x7fffffff;
  }
  _CchCount2 = wcstol(local_10,(wchar_t **)0x0,10);
  iVar1 = __crtCompareStringA(DAT_78042434,(LPCWSTR)0x1001,(DWORD)_Str1,(LPCSTR)_MaxCount,(int)_Str2
                              ,(LPCSTR)_MaxCount,_CchCount2,unaff_EDI);
  if (iVar1 != 0) {
    if (bVar3) {
      InterlockedDecrement(&__unguarded_readlc_active);
      return iVar1 + -2;
    }
    _unlock(0x13);
    return iVar1 + -2;
  }
  if (bVar3) {
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  else {
    _unlock(0x13);
  }
  piVar2 = _errno();
  *piVar2 = 0x16;
  return 0x7fffffff;
}


