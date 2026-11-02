/* Module: vegas30.exe
   Function: FUN_004aa980
   Address: 004aa980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aa980(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar2;
  iVar5 = 1;
  iVar4 = param_3;
  if (iVar1 < 2) {
    return 0;
  }
  while( true ) {
    iVar4 = iVar4 + -1;
    param_3 = param_3 + 1;
    if (((param_5 != -1) && (iVar3 = FUN_004aa940(piVar2,param_3), iVar3 != 0)) &&
       ((*(int *)(iVar3 + 4) == param_2 || (*(int *)(iVar3 + 4) == 0)))) {
      if (param_4 != (int *)0x0) {
        *param_4 = param_3;
      }
      return 1;
    }
    if (((param_5 != 1) && (iVar3 = FUN_004aa940(piVar2,iVar4), iVar3 != 0)) &&
       ((*(int *)(iVar3 + 4) == param_2 || (*(int *)(iVar3 + 4) == 0)))) break;
    iVar5 = iVar5 + 1;
    if (iVar1 <= iVar5) {
      return 0;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return 1;
}


