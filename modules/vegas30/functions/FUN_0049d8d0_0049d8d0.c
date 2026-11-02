/* Module: vegas30.exe
   Function: FUN_0049d8d0
   Address: 0049d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d8d0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar5 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar4 = *piVar5;
    }
  }
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(local_4 + 8) + iVar7 * 4);
      iVar3 = **(int **)(iVar2 + 0x24);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x24) + 8) + iVar6 * 4) + 0x10);
          *puVar1 = *puVar1 | 0x10;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  FUN_00469280(param_1);
  FUN_004530a0(param_1,0);
  return;
}


