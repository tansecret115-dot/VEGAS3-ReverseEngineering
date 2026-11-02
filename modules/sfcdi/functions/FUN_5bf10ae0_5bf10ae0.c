/* Module: sfcdi.dll
   Function: FUN_5bf10ae0
   Address: 5bf10ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf10ae0(_sfcdtext *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_5bf10920((int *)(param_1 + 0x1c));
  iVar1 = iVar1 + 4;
  uVar2 = cdtext_GetTrackCount(param_1);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_5bf10920(*(int **)(*(int *)(*(int *)(param_1 + 0x498) + 8) + uVar4 * 4));
      iVar1 = iVar1 + iVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return iVar1 + 8;
}


