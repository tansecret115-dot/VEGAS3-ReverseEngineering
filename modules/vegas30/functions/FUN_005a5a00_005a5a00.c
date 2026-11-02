/* Module: vegas30.exe
   Function: FUN_005a5a00
   Address: 005a5a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a5a00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 4);
  if (0 < iVar1) {
    piVar4 = (int *)(*(int **)(param_1 + 4))[2];
    do {
      iVar2 = *piVar4;
      if (((*(byte *)(iVar2 + 0x434) & 8) != 0) && (*(int *)(iVar2 + 0x43c) == param_3)) {
        if (param_2 == 0) {
          return iVar2;
        }
        *(int *)(iVar2 + 0x438) = *(int *)(iVar2 + 0x438) + 1;
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


