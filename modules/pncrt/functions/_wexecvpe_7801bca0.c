/* Module: pncrt.dll
   Function: _wexecvpe
   Address: 7801bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexecvpe(wchar_t *_Filename,wchar_t **_ArgList,wchar_t **_Env)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *_Dest;
  
                    /* 0x1bca0  519  _wexecvpe */
  _Dest = (wchar_t *)0x0;
  _wexecve(_Filename,_ArgList,_Env);
  piVar2 = _errno();
  if (((((*piVar2 == 2) && (pwVar3 = wcschr(_Filename,L'\\'), pwVar3 == (wchar_t *)0x0)) &&
       (pwVar3 = wcschr(_Filename,L'/'), pwVar3 == (wchar_t *)0x0)) &&
      ((*_Filename == L'\0' || (_Filename[1] != L':')))) &&
     (pwVar3 = _wgetenv(L"PATH"), pwVar3 != (wchar_t *)0x0)) {
    _Dest = malloc(0x208);
    if (_Dest == (wchar_t *)0x0) {
      return -1;
    }
    while( true ) {
      wVar1 = *pwVar3;
      pwVar6 = pwVar3;
      for (pwVar7 = _Dest; ((wVar1 != L'\0' && (wVar1 != L';')) && (pwVar7 < _Dest + 0x204));
          pwVar7 = pwVar7 + 1) {
        pwVar6 = pwVar6 + 1;
        *pwVar7 = wVar1;
        wVar1 = *pwVar6;
      }
      *pwVar7 = L'\0';
      if ((pwVar7[-1] != L'\\') && (pwVar7[-1] != L'/')) {
        wcscat(_Dest,L"\\");
      }
      sVar4 = wcslen(_Filename);
      sVar5 = wcslen(_Dest);
      if (0x103 < sVar4 + sVar5) break;
      wcscat(_Dest,_Filename);
      _wexecve(_Dest,_ArgList,_Env);
      piVar2 = _errno();
      if (((*piVar2 != 2) &&
          (((*_Dest != L'\\' && (*_Dest != L'/')) || ((_Dest[1] != L'\\' && (_Dest[1] != L'/'))))))
         || ((*pwVar6 == L'\0' || (pwVar3 = pwVar6 + 1, pwVar6 == (wchar_t *)0x0)))) break;
    }
  }
  if (_Dest != (wchar_t *)0x0) {
    free(_Dest);
  }
  return -1;
}


