/* Module: pncrt.dll
   Function: strcoll
   Address: 7802ca90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl strcoll(char *_Str1,char *_Str2)

{
  byte bVar1;
  int iVar2;
  long _CchCount2;
  int *piVar3;
  int unaff_EDI;
  bool bVar4;
  WCHAR local_10 [8];
  
                    /* 0x2ca90  707  strcoll */
  if (DAT_78042434 == (_locale_t)0x0) {
    while( true ) {
      bVar1 = *_Str1;
      bVar4 = bVar1 < (byte)*_Str2;
      if (bVar1 != *_Str2) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = _Str1[1];
      bVar4 = bVar1 < (byte)_Str2[1];
      if (bVar1 != _Str2[1]) break;
      _Str1 = _Str1 + 2;
      _Str2 = _Str2 + 2;
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar4 = __setlc_active == 0;
    if (!bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    if (DAT_78042434 != (_locale_t)0x0) {
      iVar2 = __crtGetLocaleInfoW((LCID)DAT_78042434,0xb,local_10,8,0);
      if (iVar2 == 0) {
        if (!bVar4) {
          _unlock(0x13);
          return 0x7fffffff;
        }
        InterlockedDecrement(&__unguarded_readlc_active);
        return 0x7fffffff;
      }
      _CchCount2 = wcstol(local_10,(wchar_t **)0x0,10);
      iVar2 = __crtCompareStringA(DAT_78042434,(LPCWSTR)0x1000,(DWORD)_Str1,(LPCSTR)0xffffffff,
                                  (int)_Str2,(LPCSTR)0xffffffff,_CchCount2,unaff_EDI);
      if (iVar2 == 0) {
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
      if (!bVar4) {
        _unlock(0x13);
        return iVar2 + -2;
      }
      InterlockedDecrement(&__unguarded_readlc_active);
      return iVar2 + -2;
    }
    if (bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
    }
    else {
      _unlock(0x13);
    }
    while( true ) {
      bVar1 = *_Str1;
      bVar4 = bVar1 < (byte)*_Str2;
      if (bVar1 != *_Str2) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = _Str1[1];
      bVar4 = bVar1 < (byte)_Str2[1];
      if (bVar1 != _Str2[1]) break;
      _Str1 = _Str1 + 2;
      _Str2 = _Str2 + 2;
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}


