/* Module: vegas30.exe
   Function: FUN_005a5860
   Address: 005a5860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a5860(int param_1,int param_2,int param_3)

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
      if ((*(int *)(iVar2 + 0x438) == 0) && ((*(byte *)(iVar2 + 0x434) & 8) == 0))
      goto LAB_005a58a6;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005a5520(param_1,0);
    if (iVar2 != 0) {
LAB_005a58a6:
      if (param_2 != 0) {
        *(int *)(iVar2 + 0x438) = *(int *)(iVar2 + 0x438) + 1;
        return iVar2;
      }
    }
  }
  return iVar2;
}


