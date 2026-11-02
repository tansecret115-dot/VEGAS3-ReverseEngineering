/* Module: sftrans1.dll
   Function: FUN_00486350
   Address: 00486350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486350(wchar_t *param_1,wchar_t param_2,wchar_t param_3)

{
  wchar_t wVar1;
  wchar_t *_Str;
  undefined2 uStack0000000a;
  
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    uStack0000000a = 0;
    _Str = wcsstr(param_1,&param_2);
    wVar1 = param_3;
    for (; _Str != (wchar_t *)0x0; _Str = wcsstr(_Str,&param_2)) {
      *_Str = wVar1;
    }
  }
  return;
}


