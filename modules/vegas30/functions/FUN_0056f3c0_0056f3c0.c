/* Module: vegas30.exe
   Function: FUN_0056f3c0
   Address: 0056f3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056f3c0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_3 + 0x2b0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_2 * 4);
  }
  if (iVar2 != 0) {
    if (((param_4 == 9) || (param_4 == 4)) && (*(int *)(param_3 + 0x280) == 0)) {
      FUN_0056ea20(1,iVar2,param_6);
    }
    FUN_0056e8e0(param_2,*param_5,param_5[1]);
    if (*(int *)(param_3 + 0x280) != 0) {
      FUN_0056ef60(1,iVar2,param_5);
    }
    if (((param_4 == 8) || (param_4 == 4)) && (*(int *)(param_3 + 0x280) != 0)) {
      FUN_0056ef40(iVar2);
    }
  }
  return;
}


