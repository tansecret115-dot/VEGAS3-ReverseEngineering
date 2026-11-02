/* Module: vegas30.exe
   Function: FUN_004c8110
   Address: 004c8110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8110(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar5 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    if ((*(int *)(iVar2 + 0xbc8) == 0) ||
       (iVar3 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8)), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = _DAT_00000000;
      if (*(int *)(iVar2 + 0xbc8) != 0) {
        piVar4 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
        iVar3 = *piVar4;
      }
    }
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar5 * 4);
        if ((*(byte *)(iVar1 + 0x10) & 0x80) != 0) {
          FUN_004c7de0(iVar2,iVar1,0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return;
}


