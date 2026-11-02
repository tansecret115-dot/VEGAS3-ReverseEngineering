/* Module: vegas30.exe
   Function: FUN_0046c3f0
   Address: 0046c3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c3f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_005b83b0(uVar1,1);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
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
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(iVar3 + 8) + iVar6 * 4);
      if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
        FUN_005c8a20(iVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  FUN_005b84d0(uVar1,1);
  return;
}


