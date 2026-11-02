/* Module: vegas30k.dll
   Function: FUN_0104b360
   Address: 0104b360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104b360(uint param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1;
  iVar5 = 0;
  iVar4 = -0x7fffbfff;
  iVar1 = **(int **)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = 0;
    for (param_1 = 0; (iVar2 < iVar1 && (param_1 < param_2)); param_1 = param_1 + 1) {
      *(int *)(iVar3 + 8) = iVar2 + 1;
      iVar4 = FUN_0104b430(iVar3,param_3,
                           *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 8) + iVar2 * 4));
      if (iVar4 < 0) break;
      iVar2 = *(int *)(iVar3 + 8);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 0x270;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  if ((iVar4 == 0) && (iVar5 == 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


