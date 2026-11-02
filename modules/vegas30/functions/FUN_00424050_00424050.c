/* Module: vegas30.exe
   Function: FUN_00424050
   Address: 00424050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424050(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_00647e50 != 0) {
    iVar1 = ftol();
    *param_1 = iVar1;
  }
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((((iVar2 < iVar1) || (param_2[1] < param_1[1])) && (iVar1 != 0)) &&
     (iVar4 = param_1[1], iVar4 != 0)) {
    iVar2 = (iVar2 + -1 + iVar1) / iVar2;
    iVar3 = (param_2[1] + -1 + iVar4) / param_2[1];
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    *param_1 = iVar1 / iVar2;
    param_1[1] = iVar4 / iVar2;
    return;
  }
  if ((iVar2 != 0) && (param_2[1] != 0)) {
    iVar4 = param_2[1] / param_1[1];
    if (iVar2 / iVar1 < iVar4) {
      iVar4 = iVar2 / iVar1;
    }
    *param_1 = iVar1 * iVar4;
    param_1[1] = param_1[1] * iVar4;
  }
  return;
}


