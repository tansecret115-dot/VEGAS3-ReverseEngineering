/* Module: vegas30.exe
   Function: FUN_005b86f0
   Address: 005b86f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b86f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != 0) {
    uVar3 = 0;
    iVar4 = 0;
    iVar1 = **(int **)(param_1 + 0x1dc);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + iVar4 * 4);
        if (iVar2 == 0) {
          return uVar3;
        }
        if (((*(int *)(iVar2 + 4) == 3) && (uVar3 = 1, param_2 != (undefined4 *)0x0)) &&
           (0 < **(int **)(iVar2 + 0x24))) {
          *param_2 = *(undefined4 *)(*(int **)(iVar2 + 0x24))[2];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return uVar3;
  }
  return 0;
}


