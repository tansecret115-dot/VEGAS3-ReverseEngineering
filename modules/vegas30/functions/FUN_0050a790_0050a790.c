/* Module: vegas30.exe
   Function: FUN_0050a790
   Address: 0050a790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050a790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0x120) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x120);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + iVar3 * 4);
        if (iVar1 == param_2) {
          return param_1;
        }
        iVar1 = FUN_0050a790(iVar1,param_2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}


