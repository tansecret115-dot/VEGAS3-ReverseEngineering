/* Module: vegas30.exe
   Function: FUN_004fb260
   Address: 004fb260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb260(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (**(int **)(param_1 + 0x17c) != 0) {
    piVar2 = *(int **)(param_1 + 0x178);
    iVar3 = *(int *)(param_1 + 0x180);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar2[2] + iVar3 * 4);
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x150);
    }
    iVar4 = iVar4 + param_2;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else {
      iVar1 = **(int **)(param_1 + 0x17c) + -1;
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
    }
    FUN_004fb050(param_1,iVar3,iVar4,param_3 != 0,1,0);
  }
  return;
}


