/* Module: vegas30.exe
   Function: FUN_005be790
   Address: 005be790
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005be790(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = param_4;
  *param_4 = 0;
  if (param_2 == param_3[5]) {
    iVar5 = param_3[6];
    *param_4 = param_3[7];
    return iVar5;
  }
  if (param_2 < param_3[1]) {
    *param_4 = param_2;
    param_4 = (int *)0x1;
    if (*param_3 == 0) goto LAB_005be8f2;
    *piVar3 = 0;
    iVar5 = param_2 + 1;
    if (*(int **)(param_1 + 0x78) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(param_1 + 0x78);
    }
    while ((iVar5 != 0 && (iVar1 = *piVar3, iVar1 < iVar4))) {
      piVar2 = *(int **)(param_1 + 0x78);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((iVar1 < 0) || (iVar6 + -1 < iVar1)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + iVar1 * 4);
      }
      if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x78) & 0x20) == 0)) {
        iVar5 = iVar5 + -1;
      }
      *piVar3 = iVar1 + 1;
    }
  }
  else {
    iVar5 = param_2 - param_3[1];
    if (iVar5 < param_3[2]) {
      if (param_1 == -0x80) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      param_4 = (int *)0x2;
      while ((iVar5 != 0 && (*piVar3 < 3))) {
        iVar4 = FUN_00522a40(*piVar3);
        if (iVar4 != 0) {
          iVar5 = iVar5 + -1;
        }
        *piVar3 = *piVar3 + 1;
      }
      *piVar3 = *piVar3 + -1;
      goto LAB_005be8f2;
    }
    iVar5 = iVar5 - param_3[2];
    if (param_3[4] <= iVar5) {
      return 0;
    }
    *param_4 = iVar5;
    param_4 = (int *)0x3;
    if (param_3[3] == 0) goto LAB_005be8f2;
    *piVar3 = 0;
    iVar5 = iVar5 + 1;
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(param_1 + 0x7c);
    }
    while ((iVar5 != 0 && (iVar1 = *piVar3, iVar1 < iVar4))) {
      piVar2 = *(int **)(param_1 + 0x7c);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((iVar1 < 0) || (iVar6 + -1 < iVar1)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + iVar1 * 4);
      }
      if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x78) & 0x20) == 0)) {
        iVar5 = iVar5 + -1;
      }
      *piVar3 = iVar1 + 1;
    }
  }
  *piVar3 = *piVar3 + -1;
LAB_005be8f2:
  param_3[5] = param_2;
  param_3[6] = (int)param_4;
  param_3[7] = *piVar3;
  return (int)param_4;
}


