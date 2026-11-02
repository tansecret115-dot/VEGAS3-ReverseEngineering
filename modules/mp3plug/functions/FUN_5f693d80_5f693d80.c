/* Module: mp3plug.dll
   Function: FUN_5f693d80
   Address: 5f693d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f693d80(int param_1,int param_2,wchar_t *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_3 = L'\0';
  if ((*(int *)(param_1 + 0x10) == 0) && (iVar2 = FUN_5f693a20(param_1), iVar2 < 0)) {
    return iVar2;
  }
  iVar3 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  if (0 < iVar2) {
    piVar4 = (int *)(*(int **)(param_1 + 0x10))[2];
    while ((iVar1 = *piVar4, iVar1 == 0 || (*(int *)(iVar1 + 4) != param_2))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar2 <= iVar3) {
        return 0;
      }
    }
    wcsncpy(param_3,(wchar_t *)(iVar1 + 0xc),param_4);
  }
  return 0;
}


