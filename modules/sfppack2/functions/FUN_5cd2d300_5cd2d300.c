/* Module: sfppack2.dll
   Function: FUN_5cd2d300
   Address: 5cd2d300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd2d300(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  
  *param_1 = *param_1 * *param_2;
  param_1[1] = param_2[1] * param_1[1];
  if (2 < param_3 - 1U) {
    iVar5 = (int)param_2 - (int)param_1;
    uVar6 = param_3 - 2U >> 1;
    pdVar4 = param_1 + 3;
    do {
      param_2 = param_2 + 2;
      dVar1 = *param_2;
      dVar2 = pdVar4[-1];
      dVar3 = *(double *)(iVar5 + (int)pdVar4);
      uVar6 = uVar6 - 1;
      pdVar4[-1] = *param_2 * pdVar4[-1] - *pdVar4 * *(double *)(iVar5 + -0x10 + (int)(pdVar4 + 2));
      *pdVar4 = dVar2 * dVar3 + *pdVar4 * dVar1;
      pdVar4 = pdVar4 + 2;
    } while (uVar6 != 0);
  }
  return;
}


