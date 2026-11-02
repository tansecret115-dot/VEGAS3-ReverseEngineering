/* Module: ednt3260.dll
   Function: FUN_630f1110
   Address: 630f1110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f1110(double *param_1,int param_2,double *param_3,double *param_4,short param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  
  iVar3 = (int)param_5;
  pdVar6 = (double *)(param_2 + (iVar3 / 2) * 8);
  pdVar2 = (double *)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  param_3 = param_3 + (int)pdVar2;
  pdVar4 = param_4 + iVar3 + -1;
  pdVar5 = param_1 + iVar3 + -1;
  pdVar7 = param_4;
  pdVar8 = param_1;
  param_1 = pdVar6 + -1;
  param_4 = pdVar2;
  pdVar1 = param_3;
  if (0 < (int)pdVar2) {
    do {
      _param_5 = pdVar1 + -1;
      *pdVar6 = *pdVar5 * *pdVar7 + *pdVar4 * *pdVar8;
      *(undefined4 *)(pdVar6 + 1) = *(undefined4 *)param_3;
      *(undefined4 *)((int)pdVar6 + 0xc) = *(undefined4 *)((int)param_3 + 4);
      *param_3 = *pdVar4 * *pdVar5 - *pdVar7 * *pdVar8;
      *param_1 = pdVar5[-1] * pdVar7[1] + pdVar4[-1] * pdVar8[1];
      *(undefined4 *)(param_1 + -1) = *(undefined4 *)_param_5;
      *(undefined4 *)((int)param_1 + -4) = *(undefined4 *)((int)pdVar1 + -4);
      *_param_5 = pdVar4[-1] * pdVar5[-1] - pdVar7[1] * pdVar8[1];
      param_4 = (double *)((int)param_4 + -1);
      pdVar4 = pdVar4 + -2;
      pdVar5 = pdVar5 + -2;
      pdVar6 = pdVar6 + 2;
      pdVar7 = pdVar7 + 2;
      pdVar8 = pdVar8 + 2;
      param_1 = param_1 + -2;
      param_3 = param_3 + 1;
      pdVar1 = _param_5;
    } while (param_4 != (double *)0x0);
  }
  return;
}


