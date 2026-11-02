/* Module: vegas30.exe
   Function: FUN_004aa440
   Address: 004aa440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa440(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_004aa2f0(param_1,iVar3,0,0);
    if (iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return iVar2;
}


