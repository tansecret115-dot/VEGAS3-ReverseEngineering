/* Module: sftrans1.dll
   Function: FUN_0048c2a0
   Address: 0048c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048c2a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != L' ') {
    param_1 = (wchar_t *)0x9;
    pwVar1 = wcsstr(pwVar2,(wchar_t *)&param_1);
    pwVar2 = wcsstr(pwVar2,L"\r\n");
    if (pwVar1 == (wchar_t *)0x0) {
      if (pwVar2 == (wchar_t *)0x0) {
        return 0xffffffff;
      }
    }
    else if (pwVar1 <= pwVar2) {
      return 2;
    }
    return 1;
  }
  return 0;
}


