/* Module: vegas30.exe
   Function: FUN_0046ac20
   Address: 0046ac20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046ac20(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_005b87b0(param_1);
  iVar2 = 0;
  if (0 < *piVar1) {
    piVar3 = (int *)piVar1[2];
    do {
      if (*(int *)(*piVar3 + 4) == 3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *piVar1);
  }
  return -1;
}


