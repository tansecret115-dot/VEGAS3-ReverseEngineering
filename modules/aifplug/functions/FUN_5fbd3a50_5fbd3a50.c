/* Module: aifplug.dll
   Function: FUN_5fbd3a50
   Address: 5fbd3a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd3a50(int param_1,int param_2,wchar_t *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = L'\0';
  iVar3 = -0x7ffb1ff6;
  if ((*(int *)(param_1 + 0x14) != 0) || (iVar3 = FUN_5fbd3700(param_1), -1 < iVar3)) {
    iVar4 = 0;
    iVar1 = **(int **)(param_1 + 0x14);
    if (0 < iVar1) {
      piVar5 = (int *)(*(int **)(param_1 + 0x14))[2];
      while ((iVar2 = *piVar5, iVar2 == 0 || (*(int *)(iVar2 + 4) != param_2))) {
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
        if (iVar1 <= iVar4) {
          return iVar3;
        }
      }
      wcsncpy(param_3,(wchar_t *)(iVar2 + 0xc),param_4);
      iVar3 = 0;
    }
  }
  return iVar3;
}


