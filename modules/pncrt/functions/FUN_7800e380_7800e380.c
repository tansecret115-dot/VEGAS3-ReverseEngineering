/* Module: pncrt.dll
   Function: FUN_7800e380
   Address: 7800e380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7800e380(wchar_t *param_1,size_t param_2)

{
  short sVar1;
  wchar_t *_Str2;
  int iVar2;
  int *piVar3;
  
  _Str2 = (wchar_t *)*_wenviron;
  piVar3 = _wenviron;
  if (_Str2 == (wchar_t *)0x0) {
    return 0;
  }
  while ((iVar2 = _wcsnicoll(param_1,_Str2,param_2), iVar2 != 0 ||
         ((sVar1 = *(short *)(*piVar3 + param_2 * 2), sVar1 != 0x3d && (sVar1 != 0))))) {
    _Str2 = (wchar_t *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (_Str2 == (wchar_t *)0x0) {
      return -((int)piVar3 - (int)_wenviron >> 2);
    }
  }
  return (int)piVar3 - (int)_wenviron >> 2;
}


