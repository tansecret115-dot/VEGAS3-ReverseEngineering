/* Module: vegas30.exe
   Function: FUN_004d4d50
   Address: 004d4d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4d50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0xcbc);
      if (*(int *)(param_1 + 0xcbc) == -2) {
        if ((*(int *)(param_1 + 0xbc8) == 0) ||
           (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = _DAT_00000000;
          if (*(int *)(param_1 + 0xbc8) != 0) {
            piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
            iVar3 = *piVar2;
          }
        }
      }
      iVar3 = iVar3 + param_2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar1 = iVar1 + -1;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
      }
      FUN_004cb540(param_1,iVar3,param_3 != 0,1);
    }
  }
  return;
}


