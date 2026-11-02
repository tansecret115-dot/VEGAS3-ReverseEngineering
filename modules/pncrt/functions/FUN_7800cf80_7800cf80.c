/* Module: pncrt.dll
   Function: FUN_7800cf80
   Address: 7800cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * FUN_7800cf80(void)

{
  char *pcVar1;
  char cVar2;
  WCHAR WVar3;
  WCHAR *pWVar4;
  uint uVar6;
  wchar_t *pwVar7;
  int iVar8;
  size_t sVar9;
  uint uVar10;
  LPWCH pWVar11;
  wchar_t *pwVar12;
  LPWCH pWVar13;
  LPWCH local_8;
  int local_4;
  WCHAR *pWVar5;
  
  local_8 = (LPWCH)0x0;
  local_4 = 0;
  if (DAT_78042428 == (wchar_t *)0x0) {
    local_8 = GetEnvironmentStringsW();
    if (local_8 == (LPWCH)0x0) {
      local_8 = (LPWCH)GetEnvironmentStrings();
      if (local_8 == (LPWCH)0x0) {
        return (wchar_t *)0x0;
      }
      DAT_78042428 = (wchar_t *)0x2;
    }
    else {
      DAT_78042428 = (wchar_t *)0x1;
    }
  }
  if (DAT_78042428 == (wchar_t *)0x1) {
    if ((local_8 == (LPWCH)0x0) && (local_8 = GetEnvironmentStringsW(), local_8 == (LPWCH)0x0)) {
      return (wchar_t *)0x0;
    }
    WVar3 = *local_8;
    pWVar4 = local_8;
    while (WVar3 != L'\0') {
      do {
        pWVar5 = pWVar4;
        pWVar4 = pWVar5 + 1;
      } while (*pWVar4 != L'\0');
      pWVar4 = pWVar5 + 2;
      WVar3 = *pWVar4;
    }
    uVar6 = (int)pWVar4 + (2 - (int)local_8);
    pwVar7 = malloc(uVar6);
    if (pwVar7 != (wchar_t *)0x0) {
      pWVar11 = local_8;
      pwVar12 = pwVar7;
      for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pwVar12 = *(undefined4 *)pWVar11;
        pWVar11 = pWVar11 + 2;
        pwVar12 = pwVar12 + 2;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)pwVar12 = (char)*pWVar11;
        pWVar11 = (LPWCH)((int)pWVar11 + 1);
        pwVar12 = (wchar_t *)((int)pwVar12 + 1);
      }
      FreeEnvironmentStringsW(local_8);
      return pwVar7;
    }
    FreeEnvironmentStringsW(local_8);
    return (wchar_t *)0x0;
  }
  pwVar7 = DAT_78042428;
  if (DAT_78042428 == (wchar_t *)0x2) {
    if ((local_8 == (LPWCH)0x0) && (local_8 = (LPWCH)GetEnvironmentStrings(), local_8 == (LPWCH)0x0)
       ) {
      return (wchar_t *)0x0;
    }
    cVar2 = (char)*local_8;
    pWVar11 = local_8;
    while (cVar2 != '\0') {
      iVar8 = MultiByteToWideChar(__lc_codepage,1,(LPCSTR)pWVar11,-1,(LPWSTR)0x0,0);
      if (iVar8 == 0) {
        return (wchar_t *)0x0;
      }
      local_4 = local_4 + iVar8;
      uVar6 = 0xffffffff;
      pWVar13 = pWVar11;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        WVar3 = *pWVar13;
        pWVar13 = (LPWCH)((int)pWVar13 + 1);
      } while ((char)WVar3 != '\0');
      pcVar1 = (char *)((int)pWVar11 + ~uVar6);
      pWVar11 = (LPWCH)((int)pWVar11 + ~uVar6);
      cVar2 = *pcVar1;
    }
    pwVar7 = malloc((local_4 + 1) * 2);
    if (pwVar7 == (wchar_t *)0x0) {
      FreeEnvironmentStringsA((LPCH)local_8);
      return (wchar_t *)0x0;
    }
    cVar2 = (char)*local_8;
    pwVar12 = pwVar7;
    pWVar11 = local_8;
    while (cVar2 != '\0') {
      iVar8 = MultiByteToWideChar(__lc_codepage,1,(LPCSTR)pWVar11,-1,pwVar12,
                                  (local_4 + 1) - ((int)pwVar12 - (int)pwVar7 >> 1));
      if (iVar8 == 0) {
        free(pwVar7);
        FreeEnvironmentStringsA((LPCH)local_8);
        return (wchar_t *)0x0;
      }
      uVar6 = 0xffffffff;
      pWVar13 = pWVar11;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        WVar3 = *pWVar13;
        pWVar13 = (LPWCH)((int)pWVar13 + 1);
      } while ((char)WVar3 != '\0');
      pWVar11 = (LPWCH)((int)pWVar11 + ~uVar6);
      sVar9 = wcslen(pwVar12);
      pwVar12 = pwVar12 + sVar9 + 1;
      cVar2 = (char)*pWVar11;
    }
    *pwVar12 = L'\0';
    FreeEnvironmentStringsA((LPCH)local_8);
  }
  return pwVar7;
}


