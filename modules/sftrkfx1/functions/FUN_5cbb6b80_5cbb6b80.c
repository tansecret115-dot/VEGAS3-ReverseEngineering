/* Module: sftrkfx1.dll
   Function: FUN_5cbb6b80
   Address: 5cbb6b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb6b80(int param_1,double *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 2) {
    iVar2 = 0;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        FUN_5cbb6be0((int *)(iVar3 + *(int *)(param_1 + 0x1c)),param_2,param_3,iVar1);
        iVar1 = *(int *)(param_1 + 0x18);
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + 0x1e8;
      } while (iVar2 < iVar1);
    }
    return;
  }
  FUN_5cbb6e20(*(int **)(param_1 + 0x1c),param_2,param_3);
  return;
}


