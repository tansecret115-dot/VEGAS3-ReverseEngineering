/* Module: ednt3260.dll
   Function: FUN_630f43b0
   Address: 630f43b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f43b0(double *param_1,double *param_2,double *param_3,short param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  iVar4 = (int)param_4;
  if (0 < iVar4) {
    do {
      dVar1 = *param_1;
      dVar2 = *param_3;
      dVar3 = *param_2;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
      *param_1 = dVar2 * param_1[1] - dVar3 * dVar1;
      param_1[1] = dVar3 * param_1[1] + dVar2 * dVar1;
      param_1 = param_1 + 2;
    } while (iVar4 != 0);
  }
  return;
}


