/* Module: pncrt.dll
   Function: wcscoll
   Address: 7802d030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl wcscoll(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  UINT UVar2;
  int *piVar3;
  bool bVar4;
  WCHAR local_10 [8];
  
                    /* 0x2d030  748  wcscoll */
  if (DAT_78042434 == 0) {
    iVar1 = wcscmp(_Str1,_Str2);
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
    iVar1 = wcscmp(_Str1,_Str2);
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
  iVar1 = FUN_780124c0(DAT_78042434,0x1000,_Str1,(LPSTR)0xffffffff,_Str2,-1,UVar2);
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


