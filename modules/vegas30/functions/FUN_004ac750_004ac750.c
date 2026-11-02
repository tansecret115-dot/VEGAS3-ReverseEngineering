/* Module: vegas30.exe
   Function: FUN_004ac750
   Address: 004ac750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ac750(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar4 = DAT_006477b0;
  iVar3 = *piVar1;
  if (param_2 < iVar3) {
    iVar2 = FUN_004aa940(piVar1,param_2);
    iVar3 = *(int *)(*(int *)(iVar2 + 0x69c) + 0x1c);
    iVar4 = *(int *)(*(int *)(iVar2 + 0x69c) + 0x24) - iVar3;
  }
  else {
    if (iVar3 < 1) {
      iVar3 = DAT_006477b0 * param_2 + *(int *)(param_1 + 0xac4);
    }
    else {
      iVar2 = FUN_004aa960(piVar1);
      iVar3 = (param_2 - iVar3) * iVar4 + *(int *)(*(int *)(iVar2 + 0x69c) + 0x24);
    }
    iVar2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return iVar2;
}


