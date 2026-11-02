/* Module: vegas30.exe
   Function: FUN_005961f0
   Address: 005961f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005961f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_005b87b0(param_2);
  iVar4 = 0;
  iVar1 = *piVar3;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + iVar4 * 4);
      if (*(int *)(iVar2 + 4) == 2) {
        FUN_00596170(param_1,iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


