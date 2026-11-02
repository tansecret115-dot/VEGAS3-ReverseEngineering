/* Module: encn3260.dll
   Function: FUN_664d8100
   Address: 664d8100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d8100(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  iVar4 = iVar1;
  if (*(int *)(iVar1 + 4) != iVar1) {
    while (iVar3 = iVar2, iVar3 != param_1) {
      iVar2 = *(int *)(iVar3 + 4);
      iVar4 = iVar3;
      if (*(int *)(iVar3 + 4) == iVar1) {
        return;
      }
    }
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    **(int **)(iVar3 + 4) = iVar4;
    *(int *)(iVar3 + 4) = iVar3;
    *(int *)iVar3 = iVar3;
  }
  return;
}


