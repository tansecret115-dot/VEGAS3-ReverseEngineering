/* Module: sftrkfx1.dll
   Function: FUN_5cbb56f0
   Address: 5cbb56f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb56f0(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      FUN_5cbb5740((int *)(*(int *)(param_1 + 0x1c) + iVar3),param_2,param_3,iVar1);
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 0x1e8;
    } while (iVar2 < iVar1);
  }
  return;
}


