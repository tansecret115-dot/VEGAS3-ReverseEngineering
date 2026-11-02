/* Module: pncrt.dll
   Function: FUN_780227b0
   Address: 780227b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780227b0(wchar_t *param_1)

{
  int iVar1;
  size_t _MaxCount;
  wchar_t *_Str;
  size_t sVar2;
  int *piVar3;
  
  if (((_wenviron != (int *)0x0) ||
      (((_environ == 0 || (iVar1 = FUN_7800ce50(), iVar1 == 0)) && (_wenviron != (int *)0x0)))) &&
     (piVar3 = _wenviron, param_1 != (wchar_t *)0x0)) {
    _MaxCount = wcslen(param_1);
    _Str = (wchar_t *)*piVar3;
    if (_Str != (wchar_t *)0x0) {
      while (((sVar2 = wcslen(_Str), sVar2 <= _MaxCount || (((wchar_t *)*piVar3)[_MaxCount] != L'=')
              ) || (iVar1 = _wcsnicoll((wchar_t *)*piVar3,param_1,_MaxCount), iVar1 != 0))) {
        _Str = (wchar_t *)piVar3[1];
        piVar3 = piVar3 + 1;
        if (_Str == (wchar_t *)0x0) {
          return 0;
        }
      }
      return *piVar3 + 2 + _MaxCount * 2;
    }
  }
  return 0;
}


