/* Module: vegas30.exe
   Function: FUN_00497960
   Address: 00497960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00497960(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar1 = *piVar2;
    if (0 < iVar1) {
      if (param_2 < *(int *)(param_1 + 0xac4)) {
        return -3;
      }
      if (*(int *)(param_1 + 0xacc) < param_2) {
        return -4;
      }
      if ((*(uint *)(param_1 + 0x18) & 0x80000) != 0) {
        return *(int *)(param_1 + 0xbc0);
      }
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar4 = *(int *)(param_1 + 0xbc0);
      if (iVar4 < iVar1) {
        piVar2 = (int *)(*(int *)(iVar3 + 8) + iVar4 * 4);
        do {
          iVar3 = *(int *)(*piVar2 + 0x69c);
          if ((((*(byte *)(*piVar2 + 0x10) & 4) == 0) && (*(int *)(iVar3 + 0x1c) <= param_2)) &&
             (param_2 < *(int *)(iVar3 + 0x24))) {
            return iVar4;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < iVar1);
      }
    }
  }
  return -2;
}


