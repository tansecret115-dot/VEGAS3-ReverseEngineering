/* Module: g2plug.dll
   Function: FUN_5f802800
   Address: 5f802800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f802800(int param_1,int param_2,wchar_t *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = 0;
  *param_3 = L'\0';
  if ((*(int *)(param_1 + 0x10) != 0) || (iVar3 = FUN_5f802940(param_1), -1 < iVar3)) {
    iVar4 = 0;
    iVar1 = **(int **)(param_1 + 0x10);
    if (0 < iVar1) {
      piVar5 = (int *)(*(int **)(param_1 + 0x10))[2];
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


