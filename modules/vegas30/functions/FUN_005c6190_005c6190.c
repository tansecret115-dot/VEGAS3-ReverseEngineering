/* Module: vegas30.exe
   Function: FUN_005c6190
   Address: 005c6190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c6190(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  FUN_005b83b0(param_1,1);
  FUN_005bad20(param_1);
  FUN_005ebe40();
  iVar1 = **(int **)(param_1 + 0x1dc);
  local_8 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + local_8 * 4);
      iVar3 = **(int **)(iVar2 + 0x24);
      if (0 < iVar3) {
        do {
          iVar5 = FUN_005cffc0(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x24) + 8) + iVar4 * 4),
                               param_2,param_3);
          if (iVar5 < 0) goto LAB_005c6220;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
LAB_005c6220:
  FUN_005b84d0(param_1,1);
  return iVar5;
}


