/* Module: sfpublish.dll
   Function: FUN_0040c470
   Address: 0040c470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c470(undefined4 param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  
  if (*param_3 == 8) {
    wcslen(*(wchar_t **)(param_3 + 4));
    FUN_004328f0();
    wcscpy((wchar_t *)&stack0xfffffff4,*(wchar_t **)(param_3 + 4));
    iVar1 = wcscmp((wchar_t *)&stack0xfffffff4,L"res:");
    if (iVar1 == 0) {
      wcsstr((wchar_t *)&stack0xfffffffe,L"shdoc");
    }
  }
  return;
}


