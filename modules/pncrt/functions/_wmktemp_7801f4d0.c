/* Module: pncrt.dll
   Function: _wmktemp
   Address: 7801f4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wmktemp(wchar_t *_TemplateName)

{
  wchar_t wVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  
                    /* 0x1f4d0  537  _wmktemp */
  iVar7 = 0;
  DVar2 = __threadid();
  wVar1 = *_TemplateName;
  pwVar6 = _TemplateName;
  while (wVar1 != L'\0') {
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  pwVar5 = pwVar6 + -1;
  if (pwVar6[-1] == L'X') {
    do {
      pwVar6 = pwVar5;
      if (4 < iVar7) break;
      pwVar6 = pwVar5 + -1;
      iVar7 = iVar7 + 1;
      *pwVar5 = (short)((ulonglong)DVar2 % 10) + L'0';
      DVar2 = DVar2 / 10;
      pwVar5 = pwVar6;
    } while (*pwVar6 == L'X');
    if ((*pwVar6 == L'X') && (4 < iVar7)) {
      *pwVar6 = L'a';
      iVar8 = 0x62;
      piVar3 = _errno();
      iVar7 = *piVar3;
      piVar3 = _errno();
      *piVar3 = 0;
      while( true ) {
        iVar4 = _waccess(_TemplateName,0);
        if ((iVar4 != 0) && (piVar3 = _errno(), *piVar3 != 0xd)) {
          piVar3 = _errno();
          *piVar3 = iVar7;
          return _TemplateName;
        }
        piVar3 = _errno();
        *piVar3 = 0;
        if (iVar8 == 0x7b) break;
        *pwVar6 = (wchar_t)iVar8;
        iVar8 = iVar8 + 1;
      }
      piVar3 = _errno();
      *piVar3 = iVar7;
    }
  }
  return (wchar_t *)0x0;
}


