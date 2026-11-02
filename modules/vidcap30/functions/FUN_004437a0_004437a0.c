/* Module: vidcap30.exe
   Function: FUN_004437a0
   Address: 004437a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004437a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x10);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = FUN_004437e0(param_1,iVar3);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x38) & 4) != 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return iVar2;
}


