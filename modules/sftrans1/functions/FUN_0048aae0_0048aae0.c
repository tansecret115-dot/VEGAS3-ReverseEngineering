/* Module: sftrans1.dll
   Function: FUN_0048aae0
   Address: 0048aae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0048aae0(int param_1,int *param_2,wchar_t *param_3,size_t param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *_Source;
  
  if (param_2 != (int *)0x0) {
    iVar2 = FUN_0048c9a0(param_2);
    if (iVar2 != 0) goto LAB_0048aafc;
  }
  param_2 = (int *)(param_1 + 0x100);
LAB_0048aafc:
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + *param_2 * 4) + 4);
  _Source = L"";
  if ((iVar2 != 0) && (pwVar1 = *(wchar_t **)(iVar2 + param_2[1] * 4), pwVar1 != (wchar_t *)0x0)) {
    _Source = pwVar1;
  }
  wcsncpy(param_3,_Source,param_4);
  param_3[param_4 - 1] = L'\0';
  wcslen(param_3);
  return;
}


