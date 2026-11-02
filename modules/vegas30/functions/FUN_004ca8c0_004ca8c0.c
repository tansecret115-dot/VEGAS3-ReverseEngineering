/* Module: vegas30.exe
   Function: FUN_004ca8c0
   Address: 004ca8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ca8c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar1 = *piVar2;
    }
  }
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      if ((*(byte *)(*(int *)(*(int *)(iVar3 + 8) + iVar5 * 4) + 0x10) & 0x10) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return iVar4;
}


