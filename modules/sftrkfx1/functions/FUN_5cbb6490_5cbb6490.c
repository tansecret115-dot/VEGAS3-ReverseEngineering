/* Module: sftrkfx1.dll
   Function: FUN_5cbb6490
   Address: 5cbb6490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb6490(int param_1,float *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 2) {
    iVar4 = 0;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        uVar2 = FUN_5cbb6500((int *)(iVar3 + *(int *)(param_1 + 0x1c)),param_2,param_3,iVar1);
        param_2 = param_2 + 1;
        iVar1 = *(int *)(param_1 + 0x18);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x1e8;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar2;
      } while (iVar4 < iVar1);
    }
    return;
  }
  iVar1 = FUN_5cbb6770(*(int **)(param_1 + 0x1c),param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return;
}


