/* Module: sfcdi.dll
   Function: FUN_5bf40d40
   Address: 5bf40d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf40d40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_2 + 0x34c);
  iVar3 = 0;
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 0x4c);
  }
  if (iVar3 < *(int *)(iVar1 + 0x10)) {
    iVar3 = FUN_5bf2b110(&param_1,4,-1,-1,0x40000004);
    if (iVar3 < 0) {
      return;
    }
    iVar3 = FUN_5bf29ae0(*(int **)(iVar2 + 0x4c),*(int *)(iVar1 + 0x10) + -1,&param_1,1);
    if (iVar3 < 0) {
      return;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x4c);
  FUN_5bf29ae0(*(int **)((*(int *)(iVar1 + 0x10) + -1) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8)),
               -1,&param_2,1);
  return;
}


