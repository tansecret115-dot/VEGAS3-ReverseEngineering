/* Module: mp3plug.dll
   Function: FUN_5f6996f0
   Address: 5f6996f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6996f0(int param_1,uint param_2,wchar_t *param_3,size_t *param_4)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *_Str;
  
  if (param_3 != (wchar_t *)0x0) {
    *param_3 = L'\0';
  }
  uVar1 = 1;
  if ((*(char *)(param_1 + 0x8c) == '\0') ||
     (uVar1 = FUN_5f6894a0((LPCSTR)(param_1 + 0x8c),param_2,param_3,param_4), uVar1 != 0)) {
    if (param_2 == 0x4c525554) {
      if (*(wchar_t **)(param_1 + 0x78) == (wchar_t *)0x0) {
        return uVar1;
      }
      if (param_3 != (wchar_t *)0x0) {
        wcsncpy(param_3,*(wchar_t **)(param_1 + 0x78),*param_4);
      }
      _Str = *(wchar_t **)(param_1 + 0x78);
    }
    else if (param_2 == 0x4d414e49) {
      if (*(wchar_t **)(param_1 + 0x70) == (wchar_t *)0x0) {
        return uVar1;
      }
      if (param_3 != (wchar_t *)0x0) {
        wcsncpy(param_3,*(wchar_t **)(param_1 + 0x70),*param_4);
      }
      _Str = *(wchar_t **)(param_1 + 0x70);
    }
    else {
      if (param_2 != 0x524e4749) {
        return 0x8004e00a;
      }
      if (*(wchar_t **)(param_1 + 0x74) == (wchar_t *)0x0) {
        return uVar1;
      }
      if (param_3 != (wchar_t *)0x0) {
        wcsncpy(param_3,*(wchar_t **)(param_1 + 0x74),*param_4);
      }
      _Str = *(wchar_t **)(param_1 + 0x74);
    }
    sVar2 = wcslen(_Str);
    *param_4 = sVar2 + 1;
  }
  return 0;
}


