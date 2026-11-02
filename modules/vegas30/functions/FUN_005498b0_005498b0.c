/* Module: vegas30.exe
   Function: FUN_005498b0
   Address: 005498b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005498b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = -1;
  if (0 < *(int *)(param_1 + 0xd0)) {
    piVar2 = (int *)(param_1 + 0xd4);
    iVar1 = 0;
    while (*piVar2 != param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(param_1 + 0xd0) <= iVar1) {
        return -1;
      }
    }
  }
  return iVar1;
}


