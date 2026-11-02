/* Module: pncrt.dll
   Function: FUN_7800e170
   Address: 7800e170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800e170(wchar_t *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  size_t sVar6;
  size_t sVar7;
  bool bVar8;
  
  if (((param_1 == (wchar_t *)0x0) || (pwVar3 = wcschr(param_1,L'='), pwVar3 == (wchar_t *)0x0)) ||
     (param_1 == pwVar3)) {
    return 0xffffffff;
  }
  bVar8 = pwVar3[1] == L'\0';
  if (_wenviron == __winitenv) {
    _wenviron = FUN_7800e400(_wenviron);
  }
  if (_wenviron == (int *)0x0) {
    if ((param_2 == 0) || (_environ == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      if (_environ == (undefined4 *)0x0) {
        _environ = malloc(4);
        if (_environ == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *_environ = 0;
      }
      if (_wenviron == (int *)0x0) {
        _wenviron = malloc(4);
        if (_wenviron == (int *)0x0) {
          return 0xffffffff;
        }
        *_wenviron = 0;
      }
    }
    else {
      iVar4 = FUN_7800ce50();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar5 = _wenviron;
  sVar7 = (int)pwVar3 - (int)param_1 >> 1;
  iVar4 = FUN_7800e380(param_1,sVar7);
  if ((iVar4 < 0) || (*piVar5 == 0)) {
    if (bVar8) {
      return 0;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    piVar5 = realloc(piVar5,iVar4 * 4 + 8);
    if (piVar5 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar5[iVar4] = (int)param_1;
    piVar5[iVar4 + 1] = 0;
    _wenviron = piVar5;
  }
  else if (bVar8) {
    free((void *)piVar5[iVar4]);
    iVar1 = piVar5[iVar4];
    piVar2 = piVar5 + iVar4;
    while (iVar1 != 0) {
      *piVar2 = piVar2[1];
      iVar4 = iVar4 + 1;
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
    }
    piVar5 = realloc(piVar5,iVar4 * 4);
    if (piVar5 != (int *)0x0) {
      _wenviron = piVar5;
    }
  }
  else {
    piVar5[iVar4] = (int)param_1;
  }
  if (param_2 != 0) {
    sVar6 = wcslen(param_1);
    pwVar3 = malloc(sVar6 * 2 + 4);
    if (pwVar3 != (wchar_t *)0x0) {
      wcscpy(pwVar3,param_1);
      pwVar3[sVar7] = L'\0';
      SetEnvironmentVariableW(pwVar3,(LPCWSTR)(~-(uint)bVar8 & (uint)(pwVar3 + sVar7 + 1)));
      free(pwVar3);
      return 0;
    }
  }
  return 0;
}


