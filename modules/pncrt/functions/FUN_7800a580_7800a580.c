/* Module: pncrt.dll
   Function: FUN_7800a580
   Address: 7800a580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800a580(wchar_t *param_1,LPCWSTR param_2)

{
  wchar_t wVar1;
  int iVar2;
  WCHAR *_Str1;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  size_t _Count;
  int local_4;
  
  _Count = 0;
  local_4 = 0;
  for (; (((param_2 != param_1 && (wVar1 = *param_2, wVar1 != L'\\')) && (wVar1 != L'/')) &&
         (wVar1 != L':')); param_2 = param_2 + -1) {
  }
  wVar1 = *param_2;
  if ((wVar1 != L':') || (param_2 == param_1 + 1)) {
    if ((wVar1 == L'\\') || ((wVar1 == L'/' || (wVar1 == L':')))) {
      _Count = ((int)param_2 - (int)param_1 >> 1) + 1;
    }
    _Str1 = FUN_7800a7b0(param_1);
    iVar2 = DAT_780421cc;
    if (_Str1 != (WCHAR *)0x0) {
      do {
        iVar3 = wcscmp(_Str1,L".");
        if ((iVar3 != 0) && (iVar3 = wcscmp(_Str1,L".."), iVar3 != 0)) {
          wVar1 = *param_2;
          if ((wVar1 == L'\\') || ((wVar1 == L':' || (wVar1 == L'/')))) {
            sVar4 = wcslen(_Str1);
            pwVar5 = malloc((sVar4 + _Count) * 2 + 2);
            if (pwVar5 == (wchar_t *)0x0) {
              return 0xffffffff;
            }
            pwVar5 = wcsncpy(pwVar5,param_1,_Count);
            pwVar5 = wcscpy(pwVar5 + _Count,_Str1);
            iVar3 = FUN_7800a720(pwVar5 + -_Count);
          }
          else {
            param_1 = _wcsdup(_Str1);
            if (param_1 == (wchar_t *)0x0) {
              return 0xffffffff;
            }
            iVar3 = FUN_7800a720(param_1);
          }
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          local_4 = local_4 + 1;
        }
        _Str1 = FUN_7800a7b0((LPCWSTR)0x0);
      } while (_Str1 != (WCHAR *)0x0);
      if (local_4 != 0) {
        if (iVar2 == 0) {
          FUN_7800a770(DAT_780421c0);
          return 0;
        }
        FUN_7800a770(*(undefined4 **)(iVar2 + 4));
        return 0;
      }
    }
  }
  uVar6 = FUN_7800a720(param_1);
  return uVar6;
}


