/* Module: pncrt.dll
   Function: _wcsnicoll
   Address: 78010000
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wcsnicoll(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  int iVar1;
  UINT UVar2;
  int *piVar3;
  bool bVar4;
  WCHAR local_10 [8];
  
                    /* 0x10000  505  _wcsnicoll */
  if (_MaxCount == 0) {
    return 0;
  }
  if (DAT_78042434 == 0) {
    iVar1 = _wcsnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar4 = __setlc_active == 0;
  if (!bVar4) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  if (DAT_78042434 == 0) {
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
    else {
      _unlock(0x13);
    }
    iVar1 = _wcsnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __crtGetLocaleInfoW(DAT_78042434,0xb,local_10,8,0);
  if (iVar1 == 0) {
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
      return 0x7fffffff;
    }
    _unlock(0x13);
    return 0x7fffffff;
  }
  UVar2 = wcstol(local_10,(wchar_t **)0x0,10);
  iVar1 = FUN_780124c0(DAT_78042434,0x1001,_Str1,(LPSTR)_MaxCount,_Str2,_MaxCount,UVar2);
  if (iVar1 != 0) {
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
      return iVar1 + -2;
    }
    _unlock(0x13);
    return iVar1 + -2;
  }
  if (bVar4) {
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  else {
    _unlock(0x13);
  }
  piVar3 = _errno();
  *piVar3 = 0x16;
  return 0x7fffffff;
}


