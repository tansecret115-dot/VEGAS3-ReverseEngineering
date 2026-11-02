/* Module: mpgvout.001
   Function: FUN_1001a728
   Address: 1001a728
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001a728(int param_1,int *param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  iVar1 = param_5 >> 1;
  if (*(int *)(param_1 + 0x590) != 3) {
    if (0 < param_4) {
      iVar3 = param_4 + 1 >> 1;
    }
    *param_2 = iVar3 + *param_3;
    if (0 < param_5) {
      iVar1 = param_5 + 1 >> 1;
    }
    iVar1 = iVar1 + param_3[1];
    param_2[1] = iVar1;
    if (*(int *)(param_1 + 0x590) == 1) {
      iVar1 = iVar1 + -1;
    }
    else {
      iVar1 = iVar1 + 1;
    }
    param_2[1] = iVar1;
    return;
  }
  if (*(int *)(param_1 + 0x588) == 0) {
    iVar2 = param_4 * 3;
    if (0 < param_4) {
      iVar2 = iVar2 + 1;
    }
    *param_2 = (iVar2 >> 1) + (int)*param_3;
    iVar2 = param_5 * 3;
    if (0 < param_5) {
      iVar2 = iVar2 + 1;
    }
    param_2[1] = param_3[1] + -1 + (iVar2 >> 1);
    if (0 < param_4) {
      iVar3 = param_4 + 1 >> 1;
    }
    param_2[2] = iVar3 + *param_3;
    iVar3 = (int)param_3[1];
    if (param_5 < 1) {
      iVar1 = iVar3 + 1 + iVar1;
      goto LAB_1001a7ab;
    }
    iVar1 = param_5 + 1;
  }
  else {
    iVar1 = param_4;
    if (0 < param_4) {
      iVar1 = param_4 + 1;
    }
    *param_2 = (iVar1 >> 1) + (int)*param_3;
    iVar1 = param_5;
    if (0 < param_5) {
      iVar1 = param_5 + 1;
    }
    param_2[1] = param_3[1] + -1 + (iVar1 >> 1);
    iVar1 = param_4 * 3;
    if (0 < param_4) {
      iVar1 = iVar1 + 1;
    }
    param_2[2] = (iVar1 >> 1) + (int)*param_3;
    iVar1 = param_5 * 3;
    iVar3 = (int)param_3[1];
    if (0 < param_5) {
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = iVar3 + 1 + (iVar1 >> 1);
LAB_1001a7ab:
  param_2[3] = iVar1;
  return;
}


