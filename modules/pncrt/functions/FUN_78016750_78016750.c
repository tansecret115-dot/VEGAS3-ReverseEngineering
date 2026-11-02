/* Module: pncrt.dll
   Function: FUN_78016750
   Address: 78016750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78016750(uchar *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uchar *_Str1;
  int *piVar5;
  uchar *puVar6;
  
  if (((_environ != (int *)0x0) ||
      (((_wenviron == 0 || (iVar2 = FUN_780167e0(), iVar2 == 0)) && (_environ != (int *)0x0)))) &&
     (param_1 != (uchar *)0x0)) {
    uVar3 = 0xffffffff;
    _Str1 = (uchar *)*_environ;
    puVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    piVar5 = _environ;
    if (_Str1 != (uchar *)0x0) {
      do {
        uVar4 = 0xffffffff;
        puVar6 = _Str1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (uVar1 != '\0');
        if (((uVar3 < ~uVar4 - 1) && (_Str1[uVar3] == '=')) &&
           (iVar2 = _mbsnbicoll(_Str1,param_1,uVar3), iVar2 == 0)) {
          return *piVar5 + 1 + uVar3;
        }
        _Str1 = (uchar *)piVar5[1];
        piVar5 = piVar5 + 1;
        if (_Str1 == (uchar *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


