/* Module: vegas30.exe
   Function: FUN_004e0370
   Address: 004e0370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e0370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xd94);
  if (0 < iVar1) {
    if (param_2 < *(int *)(param_1 + 0xac4)) {
      if (((*(undefined **)(param_1 + 0x714) != &DAT_0063df90) &&
          (*(int *)(param_1 + 0x720) <= param_2)) && (param_2 <= *(int *)(param_1 + 0x720))) {
        return -0x80000000;
      }
      return -3;
    }
    if (*(int *)(param_1 + 0xacc) < param_2) {
      return -4;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      piVar3 = (int *)(param_1 + 0xd88);
      do {
        if ((*(int *)(*(int *)(*piVar3 + 0x69c) + 0x1c) <= param_2) &&
           (param_2 < *(int *)(*(int *)(*piVar3 + 0x69c) + 0x24))) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return -2;
}


