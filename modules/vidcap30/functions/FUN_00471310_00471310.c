/* Module: vidcap30.exe
   Function: FUN_00471310
   Address: 00471310
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00471310(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x120);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if ((*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + iVar3 * 4) + 4) == 1) &&
           (iVar2 = FUN_00473b10(param_2,param_3), iVar2 < 0)) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return iVar2;
}


