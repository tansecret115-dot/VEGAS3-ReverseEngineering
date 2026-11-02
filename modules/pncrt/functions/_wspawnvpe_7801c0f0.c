/* Module: pncrt.dll
   Function: _wspawnvpe
   Address: 7801c0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnvpe(int _Mode,wchar_t *_Filename,wchar_t **_ArgList,wchar_t **_Env)

{
  intptr_t iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  short *psVar4;
  size_t sVar5;
  size_t sVar6;
  wchar_t *_Str;
  
                    /* 0x1c0f0  557  _wspawnvpe */
  _Str = (wchar_t *)0x0;
  iVar1 = _wspawnve(_Mode,_Filename,_ArgList,_Env);
  if ((((iVar1 == -1) && (piVar2 = _errno(), *piVar2 == 2)) &&
      (pwVar3 = wcschr(_Filename,L'/'), pwVar3 == (wchar_t *)0x0)) &&
     (pwVar3 = _wgetenv(L"PATH"), pwVar3 != (wchar_t *)0x0)) {
    _Str = malloc(0x208);
    if (_Str == (wchar_t *)0x0) {
      return -1;
    }
    psVar4 = (short *)FUN_78023480(pwVar3,_Str,0x103);
    if (psVar4 != (short *)0x0) {
      while (*_Str != L'\0') {
        sVar5 = wcslen(_Str);
        if ((_Str[sVar5 - 1] != L'\\') && (_Str[sVar5 - 1] != L'/')) {
          wcscat(_Str,L"\\");
        }
        sVar5 = wcslen(_Str);
        sVar6 = wcslen(_Filename);
        if (0x103 < sVar5 + sVar6) break;
        wcscat(_Str,_Filename);
        iVar1 = _wspawnve(_Mode,_Str,_ArgList,_Env);
        if ((iVar1 != -1) ||
           (((piVar2 = _errno(), *piVar2 != 2 &&
             (((*_Str != L'\\' && (*_Str != L'/')) || ((_Str[1] != L'\\' && (_Str[1] != L'/'))))))
            || (psVar4 = (short *)FUN_78023480(psVar4,_Str,0x103), psVar4 == (short *)0x0)))) break;
      }
    }
  }
  if (_Str != (wchar_t *)0x0) {
    free(_Str);
  }
  return iVar1;
}


