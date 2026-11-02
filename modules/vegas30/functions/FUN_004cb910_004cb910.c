/* Module: vegas30.exe
   Function: FUN_004cb910
   Address: 004cb910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb910(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
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
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar1 + -1 < param_3) {
    param_3 = iVar1 + -1;
  }
  if (*(int *)(param_1 + 0xcbc) == param_2) {
    *(int *)(param_1 + 0xcbc) = param_3;
  }
  if (*(int *)(param_1 + 0xcc0) == param_2) {
    *(int *)(param_1 + 0xcc0) = param_3;
  }
  return;
}


