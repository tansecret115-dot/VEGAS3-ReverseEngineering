/* Module: oggplug.dll
   Function: FUN_00408570
   Address: 00408570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408570(int param_1,int param_2,wchar_t *param_3,size_t *param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = L'\0';
  if ((*(int *)(param_1 + 0x330) == 0) && (iVar2 = FUN_004084e0(param_1), iVar2 < 0)) {
    return iVar2;
  }
  iVar4 = 0;
  iVar2 = **(int **)(param_1 + 0x330);
  if (0 < iVar2) {
    piVar5 = (int *)(*(int **)(param_1 + 0x330))[2];
    while ((iVar1 = *piVar5, iVar1 == 0 || (*(int *)(iVar1 + 4) != param_2))) {
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
      if (iVar2 <= iVar4) {
        return 0;
      }
    }
    if (param_3 != (wchar_t *)0x0) {
      wcsncpy(param_3,(wchar_t *)(iVar1 + 0xc),*param_4);
    }
    if (param_4 != (size_t *)0x0) {
      sVar3 = wcslen((wchar_t *)(iVar1 + 0xc));
      *param_4 = sVar3 + 1;
    }
  }
  return 0;
}


