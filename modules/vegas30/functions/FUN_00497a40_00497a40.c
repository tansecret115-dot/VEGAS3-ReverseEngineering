/* Module: vegas30.exe
   Function: FUN_00497a40
   Address: 00497a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00497a40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar1 = *piVar2;
      if (0 < iVar1) {
        if (param_2 < *(int *)(param_1 + 0xac4)) {
          if (0 < *(int *)(param_1 + 0xbc0)) {
            return *(int *)(param_1 + 0xbc0) + -1;
          }
          return -1;
        }
        if (param_2 <= *(int *)(param_1 + 0xacc)) {
          iVar1 = FUN_00497960(param_1,param_2);
          return iVar1;
        }
        iVar3 = FUN_00497960(param_1,*(int *)(param_1 + 0xacc) + -1);
        if ((-1 < iVar3) && (iVar3 < iVar1 + -1)) {
          return iVar3 + 1;
        }
      }
    }
  }
  return -2;
}


