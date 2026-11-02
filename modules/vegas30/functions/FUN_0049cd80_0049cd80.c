/* Module: vegas30.exe
   Function: FUN_0049cd80
   Address: 0049cd80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0049cd80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (**(int **)(param_1 + 0xcd0) < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar1 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_2 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar2 + 0x24);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_3 < 0) || (iVar2 + -1 < param_3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_3 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return *(uint *)(iVar2 + 0x10) >> 4 & 1;
}


