/* Module: vegas30.exe
   Function: FUN_004ab010
   Address: 004ab010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ab010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x130);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_005f1430(iVar4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x8c) & 2) == 0)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}


