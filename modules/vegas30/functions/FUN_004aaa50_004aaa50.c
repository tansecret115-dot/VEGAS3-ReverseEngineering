/* Module: vegas30.exe
   Function: FUN_004aaa50
   Address: 004aaa50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aaa50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar3 = *piVar1;
  if (0 < iVar3) {
    iVar2 = *(int *)(param_1 + 0xacc);
    if (iVar2 < param_2) {
      iVar2 = FUN_00497960(param_1,iVar2 + -1);
      if ((-1 < iVar2) && (iVar2 < iVar3 + -1)) {
        iVar3 = FUN_004aa940(piVar1,iVar2);
        if (param_2 <= *(int *)(*(int *)(iVar3 + 0x69c) + 0x24)) {
          return iVar2;
        }
        return iVar2 + 1;
      }
      return iVar3;
    }
    if (*(int *)(param_1 + 0xac4) <= param_2) {
      if (iVar2 <= param_2) {
        return iVar3;
      }
      if ((*(uint *)(param_1 + 0x18) & 0x80000) != 0) {
        return *(int *)(param_1 + 0xbc0);
      }
      if (*(int *)(param_1 + 0xbc8) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      for (iVar2 = *(int *)(param_1 + 0xbc0); iVar6 = iVar3, iVar2 < iVar3; iVar2 = iVar2 + 1) {
        iVar5 = FUN_004aa940(uVar4,iVar2);
        if ((((*(byte *)(iVar5 + 0x10) & 4) == 0) &&
            (*(int *)(*(int *)(iVar5 + 0x69c) + 0x1c) <= param_2)) &&
           (iVar6 = iVar2, param_2 < *(int *)(*(int *)(iVar5 + 0x69c) + 0x24))) break;
      }
      if (-1 < iVar6) {
        return iVar6;
      }
      return iVar3;
    }
    if (param_2 < *(int *)(param_1 + 0x720)) {
      return iVar3;
    }
    if ((*(undefined **)(param_1 + 0x714) != &DAT_0063df90) &&
       (param_2 <= *(int *)(param_1 + 0x728))) {
      return -0x80000000;
    }
    if (((param_2 < *(int *)(param_1 + 0x774)) || (*(int *)(param_1 + 0x77c) < param_2)) &&
       (0 < *(int *)(param_1 + 0xbc0))) {
      return *(int *)(param_1 + 0xbc0) + -1;
    }
  }
  return 0;
}


