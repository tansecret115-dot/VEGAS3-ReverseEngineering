/* Module: pncrt.dll
   Function: _wspawnve
   Address: 7801bee0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnve(int _Mode,wchar_t *_Filename,wchar_t **_ArgList,wchar_t **_Env)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined **ppuVar6;
  LPWSTR local_4;
  
                    /* 0x1bee0  555  _wspawnve */
  pwVar1 = wcsrchr(_Filename,L'\\');
  pwVar2 = wcsrchr(_Filename,L'/');
  pwVar4 = _Filename;
  if (pwVar2 == (wchar_t *)0x0) {
    if ((pwVar1 == (wchar_t *)0x0) && (pwVar1 = wcschr(_Filename,L':'), pwVar1 == (wchar_t *)0x0)) {
      sVar3 = wcslen(_Filename);
      pwVar4 = malloc(sVar3 * 2 + 6);
      if (pwVar4 == (wchar_t *)0x0) {
        return -1;
      }
      wcscpy(pwVar4,L".\\");
      wcscat(pwVar4,_Filename);
      pwVar1 = pwVar4 + 2;
    }
  }
  else if ((pwVar1 == (wchar_t *)0x0) || (pwVar1 < pwVar2)) {
    pwVar1 = pwVar2;
  }
  local_4 = (LPWSTR)0xffffffff;
  pwVar1 = wcsrchr(pwVar1,L'.');
  if (pwVar1 == (wchar_t *)0x0) {
    sVar3 = wcslen(pwVar4);
    pwVar1 = malloc(sVar3 * 2 + 10);
    if (pwVar1 == (wchar_t *)0x0) {
      return -1;
    }
    wcscpy(pwVar1,pwVar4);
    sVar3 = wcslen(pwVar4);
    ppuVar6 = &PTR_u__com_780405ec;
    do {
      wcscpy(pwVar1 + sVar3,(wchar_t *)*ppuVar6);
      iVar5 = _waccess(pwVar1,0);
      if (iVar5 != -1) {
        local_4 = FUN_7801c060(_Mode,pwVar1,_ArgList,_Env);
        break;
      }
      ppuVar6 = ppuVar6 + -1;
    } while (0x780405df < (int)ppuVar6);
    free(pwVar1);
  }
  else {
    iVar5 = _waccess(pwVar4,0);
    if (iVar5 != -1) {
      local_4 = FUN_7801c060(_Mode,pwVar4,_ArgList,_Env);
    }
  }
  if (pwVar4 != _Filename) {
    free(pwVar4);
  }
  return (intptr_t)local_4;
}


