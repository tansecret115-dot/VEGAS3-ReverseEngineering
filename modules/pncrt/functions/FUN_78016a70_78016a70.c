/* Module: pncrt.dll
   Function: FUN_78016a70
   Address: 78016a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78016a70(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*_environ;
  piVar2 = _environ;
  if (_Str2 == (uchar *)0x0) {
    return 0;
  }
  while ((iVar1 = _mbsnbicoll(param_1,_Str2,param_2), iVar1 != 0 ||
         ((*(char *)(*piVar2 + param_2) != '=' && (*(char *)(*piVar2 + param_2) != '\0'))))) {
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)_environ >> 2);
    }
  }
  return (int)piVar2 - (int)_environ >> 2;
}


