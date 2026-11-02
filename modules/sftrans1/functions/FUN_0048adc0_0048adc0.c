/* Module: sftrans1.dll
   Function: FUN_0048adc0
   Address: 0048adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048adc0(int param_1,int *param_2,int param_3)

{
  wchar_t *pwVar1;
  size_t sVar2;
  int iVar3;
  
  if ((((-1 < param_3) && (param_3 < **(int **)(param_1 + 0xa4))) && (param_2 != (int *)0x0)) &&
     (pwVar1 = (wchar_t *)*param_2, pwVar1 != (wchar_t *)0x0)) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        pwVar1 = wcsstr(pwVar1,L"\r\n");
        if (pwVar1 == (wchar_t *)0x0) {
          return 0;
        }
        sVar2 = wcslen(L"\r\n");
        iVar3 = iVar3 + 1;
        pwVar1 = pwVar1 + sVar2;
      } while (iVar3 < param_3);
    }
    *param_2 = (int)pwVar1;
    return 1;
  }
  return 0;
}


