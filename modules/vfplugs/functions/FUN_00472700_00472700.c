/* Module: vfplugs.dll
   Function: FUN_00472700
   Address: 00472700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472700(int param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = **(int **)(param_1 + 0x308);
  if (0 < iVar1) {
    do {
      FUN_00472070(param_1,iVar2,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (*(int *)(param_1 + 0x2fc) < iVar1) {
    FUN_00472070(param_1,*(int *)(param_1 + 0x2fc),param_2);
  }
  return;
}


