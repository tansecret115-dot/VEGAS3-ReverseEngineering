/* Module: vegas30.exe
   Function: FUN_004a08a0
   Address: 004a08a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a08a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 0x24);
  do {
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if ((iVar5 < 0) || (iVar3 + -1 < iVar5)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar2[2] + iVar5 * 4);
    }
    iVar5 = iVar5 + 1;
  } while ((iVar3 != 0) && (iVar3 != param_1));
  while( true ) {
    piVar2 = *(int **)(iVar1 + 0x24);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if ((iVar5 < 0) || (iVar3 + -1 < iVar5)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar2[2] + iVar5 * 4);
    }
    iVar5 = iVar5 + 1;
    if (iVar3 == 0) break;
    iVar4 = FUN_0049b050(iVar3);
    if (iVar4 == param_1) {
      return iVar3;
    }
  }
  return 0;
}


