/* Module: vegas30.exe
   Function: FUN_005a5ec0
   Address: 005a5ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a5ec0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)(*(int **)(param_1 + 4))[2];
    while (iVar2 = *piVar4, *(int *)(iVar2 + 0x438) == 0) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
  }
  return iVar2;
}


