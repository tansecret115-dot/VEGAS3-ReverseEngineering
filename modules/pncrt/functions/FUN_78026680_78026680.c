/* Module: pncrt.dll
   Function: FUN_78026680
   Address: 78026680
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl FUN_78026680(wchar_t *param_1)

{
  wchar_t wVar1;
  size_t sVar2;
  wchar_t *_Memory;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar4 = 0;
  sVar2 = wcslen(param_1);
  _Memory = malloc(sVar2 * 2 + 2);
  if (_Memory != (wchar_t *)0x0) {
    wVar1 = *param_1;
    pwVar3 = _Memory;
    while (wVar1 != L'\0') {
      if (wVar1 == L'\"') {
        iVar4 = iVar4 + 1;
      }
      else {
        *pwVar3 = wVar1;
        pwVar3 = pwVar3 + 1;
      }
      param_1 = param_1 + 1;
      wVar1 = *param_1;
    }
    if (iVar4 != 0) {
      *pwVar3 = L'\0';
      return _Memory;
    }
    free(_Memory);
  }
  return (wchar_t *)0x0;
}


