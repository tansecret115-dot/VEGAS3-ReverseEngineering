/* Module: vegas30.exe
   Function: FUN_004c3de0
   Address: 004c3de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3de0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(param_1 + 0x5d0) + 8) != param_3) {
    *(int *)(*(int *)(param_1 + 0x5d0) + 8) = param_3;
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = _DAT_00000000;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar2 = *piVar3;
      }
    }
    if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*(int *)(iVar4 + 8) + iVar5 * 4);
        if (*(int *)(iVar1 + 4) == 2) {
          *(int *)(*(int *)(*(int *)(iVar1 + 0x69c) + 0x54) + 0x248) = param_3;
          FUN_004c37d0(param_1,iVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    FUN_004530a0(param_1,0x9000);
  }
  return;
}


