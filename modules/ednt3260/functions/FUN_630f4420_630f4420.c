/* Module: ednt3260.dll
   Function: FUN_630f4420
   Address: 630f4420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4420(double *param_1,double *param_2,double *param_3,short param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  int iVar8;
  
  iVar8 = (int)param_4;
  pdVar7 = param_1 + iVar8 * 2;
  if (0 < iVar8) {
    do {
      dVar1 = *pdVar7;
      dVar2 = *param_3;
      dVar3 = *param_2;
      dVar4 = *param_1;
      dVar5 = pdVar7[1];
      dVar6 = param_1[1];
      *param_1 = dVar2 * dVar5 - dVar3 * dVar4;
      param_1[1] = dVar3 * dVar5 + dVar2 * dVar4;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 2;
      iVar8 = iVar8 + -1;
      *pdVar7 = dVar2 * dVar6 - dVar3 * dVar1;
      pdVar7[1] = dVar2 * dVar1 + dVar3 * dVar6;
      pdVar7 = pdVar7 + 2;
    } while (iVar8 != 0);
  }
  return;
}


