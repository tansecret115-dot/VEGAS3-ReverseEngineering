/* Module: pncrt.dll
   Function: _wsearchenv
   Address: 78022b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _wsearchenv(wchar_t *_Filename,wchar_t *_EnvVar,wchar_t *_ResultPath)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  short *psVar4;
  size_t sVar5;
  size_t sVar6;
  wchar_t local_210 [264];
  
                    /* 0x22b00  547  _wsearchenv */
  iVar2 = _waccess(_Filename,0);
  if (iVar2 == 0) {
    pwVar3 = _wfullpath(_ResultPath,_Filename,0x104);
    if (pwVar3 == (wchar_t *)0x0) {
      *_ResultPath = L'\0';
      return;
    }
  }
  else {
    pwVar3 = _wgetenv(_EnvVar);
    if (pwVar3 == (wchar_t *)0x0) {
      *_ResultPath = L'\0';
      return;
    }
    psVar4 = (short *)FUN_78023480(pwVar3,local_210,0x104);
    if (psVar4 != (short *)0x0) {
      while (local_210[0] != L'\0') {
        sVar5 = wcslen(local_210);
        wVar1 = local_210[sVar5 - 1];
        pwVar3 = local_210 + sVar5;
        if (((wVar1 != L'/') && (wVar1 != L'\\')) && (wVar1 != L':')) {
          *pwVar3 = L'\\';
          pwVar3 = local_210 + sVar5 + 1;
          sVar5 = sVar5 + 1;
        }
        sVar6 = wcslen(_Filename);
        if (sVar6 + sVar5 < 0x105) {
          wcscpy(pwVar3,_Filename);
          iVar2 = _waccess(local_210,0);
          if (iVar2 == 0) {
            wcscpy(_ResultPath,local_210);
            return;
          }
        }
        psVar4 = (short *)FUN_78023480(psVar4,local_210,0x104);
        if (psVar4 == (short *)0x0) {
          *_ResultPath = L'\0';
          return;
        }
      }
    }
    *_ResultPath = L'\0';
  }
  return;
}


