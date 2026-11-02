/* Module: ednt3260.dll
   Function: FUN_630f5c60
   Address: 630f5c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f5c60(undefined4 *param_1,double *param_2,short param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar6 = (int)param_3 / 2 + -1;
  pdVar4 = (double *)(param_1 + 4);
  pdVar5 = pdVar4;
  iVar7 = iVar6;
  if (0 < iVar6) {
    do {
      dVar1 = *param_2;
      dVar2 = *pdVar4;
      dVar3 = param_2[1];
      param_2 = param_2 + 2;
      *pdVar4 = dVar1 * dVar2 - dVar3 * pdVar4[1];
      pdVar5 = pdVar4 + 2;
      iVar7 = iVar7 + -1;
      pdVar4[1] = dVar1 * pdVar4[1] + dVar3 * dVar2;
      pdVar4 = pdVar5;
    } while (iVar7 != 0);
  }
  dVar1 = *param_2;
  dVar2 = *pdVar5;
  dVar3 = param_2[1];
  *pdVar5 = dVar1 * dVar2 - dVar3 * pdVar5[1];
  pdVar5[1] = dVar1 * pdVar5[1] + dVar3 * dVar2;
  if (0 < iVar6) {
    do {
      pdVar4 = pdVar5 + 2;
      dVar1 = *pdVar4;
      dVar2 = param_2[-1];
      param_2 = param_2 + -2;
      dVar3 = *param_2;
      iVar6 = iVar6 + -1;
      *pdVar4 = dVar3 * dVar1 - -dVar2 * pdVar5[3];
      pdVar5[3] = dVar3 * pdVar5[3] + -dVar2 * dVar1;
      pdVar5 = pdVar4;
    } while (iVar6 != 0);
  }
  return;
}


