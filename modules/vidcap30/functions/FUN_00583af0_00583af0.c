/* Module: vidcap30.exe
   Function: FUN_00583af0
   Address: 00583af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00583af0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    piVar3 = *(int **)(param_1 + 0x54);
    do {
      if (*piVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3 + 0x54;
      }
      if (iVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x50));
  }
  return -1;
}


