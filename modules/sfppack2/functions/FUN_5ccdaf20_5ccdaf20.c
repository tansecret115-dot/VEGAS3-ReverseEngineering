/* Module: sfppack2.dll
   Function: FUN_5ccdaf20
   Address: 5ccdaf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccdaf20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  while (param_2 = param_2 + -1, piVar3 = param_1, iVar4 = param_2, param_2 != 0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar5 = piVar3 + 2;
      iVar1 = *piVar3;
      if (*piVar5 < iVar1) {
        iVar2 = piVar3[1];
        *piVar3 = *piVar5;
        piVar3[1] = piVar3[3];
        *piVar5 = iVar1;
        piVar3[3] = iVar2;
      }
      piVar3 = piVar5;
    }
  }
  return;
}


