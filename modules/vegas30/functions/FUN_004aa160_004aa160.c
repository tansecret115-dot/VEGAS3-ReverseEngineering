/* Module: vegas30.exe
   Function: FUN_004aa160
   Address: 004aa160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_004aa0b0(param_1,iVar4,0,0);
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}


