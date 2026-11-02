/* Module: sftrans1.dll
   Function: FUN_0048bf30
   Address: 0048bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048bf30(int *param_1)

{
  wchar_t *pwVar1;
  size_t sVar2;
  
  if ((param_1 != (int *)0x0) && ((wchar_t *)*param_1 != (wchar_t *)0x0)) {
    pwVar1 = wcsstr((wchar_t *)*param_1,L"\r\n");
    if (pwVar1 == (wchar_t *)0x0) {
      sVar2 = wcslen((wchar_t *)*param_1);
      *param_1 = *param_1 + sVar2 * 2 + 2;
      return 1;
    }
    sVar2 = wcslen(L"\r\n");
    *param_1 = (int)(pwVar1 + sVar2);
    return 1;
  }
  return 0;
}


