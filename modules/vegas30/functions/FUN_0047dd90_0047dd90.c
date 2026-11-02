/* Module: vegas30.exe
   Function: FUN_0047dd90
   Address: 0047dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047dd90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0x18);
  if (iVar1 < 1) {
    return 0;
  }
  do {
    piVar2 = *(int **)(param_1 + 0x18);
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
    piVar2 = *(int **)(param_2 + 0x18);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar2[2] + iVar3 * 4);
    }
    if (((iVar4 != 0) && (iVar5 != 0)) && ((param_3 < 0 || (param_3 == *(int *)(iVar4 + 0x10))))) {
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar5 + 8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return 0;
}


