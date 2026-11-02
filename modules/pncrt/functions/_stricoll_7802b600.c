/* Module: pncrt.dll
   Function: _stricoll
   Address: 7802b600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _stricoll(char *_Str1,char *_Str2)

{
  int iVar1;
  long _CchCount2;
  int *piVar2;
  int unaff_EDI;
  bool bVar3;
  WCHAR local_10 [8];
  
                    /* 0x2b600  460  _stricoll */
  if (DAT_78042434 == (_locale_t)0x0) {
    iVar1 = _strcmpi(_Str1,_Str2);
    return iVar1;
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
    iVar1 = _strcmpi(_Str1,_Str2);
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
  iVar1 = __crtCompareStringA(DAT_78042434,(LPCWSTR)0x1001,(DWORD)_Str1,(LPCSTR)0xffffffff,
                              (int)_Str2,(LPCSTR)0xffffffff,_CchCount2,unaff_EDI);
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


