/* Module: vegas30.exe
   Function: FUN_004931f0
   Address: 004931f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004931f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1;
  iVar8 = 0;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar5 = *(int *)(iVar1 + 0xbc8);
  if ((iVar5 == 0) || (iVar5 = FUN_005b87b0(iVar5), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xbc8);
    iVar5 = _DAT_00000000;
    if (iVar1 != 0) {
      piVar6 = (int *)FUN_005b87b0(iVar1);
      iVar5 = *piVar6;
    }
  }
  if (0 < iVar5) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar8 * 4);
      iVar2 = **(int **)(iVar1 + 0x24);
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iVar7 * 4);
          uVar4 = *(uint *)(iVar3 + 0x10);
          iVar7 = iVar7 + 1;
          *(uint *)(iVar3 + 0x10) = uVar4 >> 0xd & 0x10 | uVar4 & 0xffffffef;
        } while (iVar7 < iVar2);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return;
}


