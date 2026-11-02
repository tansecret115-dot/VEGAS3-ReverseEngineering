/* Module: vegas30.exe
   Function: FUN_00562410
   Address: 00562410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562410(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
    iVar2 = *(int *)*param_1;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = *(int *)(*param_1 + 4) * iVar2 + *(int *)(*param_1 + 8);
      FUN_00562280(iVar3);
      piVar1 = *(int **)(iVar3 + 0x118);
      (**(code **)(*piVar1 + 8))(piVar1);
      _SfList_DeleteList_16(*param_1,iVar2,1,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
    _SfList_Destroy_4(*param_1);
  }
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


