/* Module: pncrt.dll
   Function: FUN_7801a280
   Address: 7801a280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7801a280(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  
  sVar3 = wcslen(param_1);
  if (((4 < sVar3) && ((*param_1 == L'\\' || (*param_1 == L'/')))) &&
     ((param_1[1] == L'\\' || (param_1[1] == L'/')))) {
    pwVar4 = param_1 + 3;
    wVar2 = param_1[3];
    while (((wVar2 != L'\0' && (wVar2 != L'\\')) && (wVar2 != L'/'))) {
      pwVar1 = pwVar4 + 1;
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar1;
    }
    if ((*pwVar4 != L'\0') && (pwVar4 = pwVar4 + 1, *pwVar4 != L'\0')) {
      wVar2 = *pwVar4;
      while (((wVar2 != L'\0' && (wVar2 != L'\\')) && (wVar2 != L'/'))) {
        pwVar1 = pwVar4 + 1;
        pwVar4 = pwVar4 + 1;
        wVar2 = *pwVar1;
      }
      if ((*pwVar4 == L'\0') || (pwVar4[1] == L'\0')) {
        return 1;
      }
    }
  }
  return 0;
}


