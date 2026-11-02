/* Module: vidpcore.dll
   Function: FUN_5df05580
   Address: 5df05580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df05580(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = **(int **)(param_1 + 0x308);
  if (0 < iVar1) {
    do {
      FUN_5df04ef0(param_1,iVar2,param_2,iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (*(int *)(param_1 + 0x2fc) < iVar1) {
    FUN_5df04ef0(param_1,*(int *)(param_1 + 0x2fc),param_2,iVar1);
  }
  return;
}


