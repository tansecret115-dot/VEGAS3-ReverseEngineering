/* Module: ednt3260.dll
   Function: FUN_630f4680
   Address: 630f4680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4680(int param_1,double *param_2,double *param_3,double *param_4,short param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  short sVar5;
  double *pdVar6;
  short *psVar7;
  double *pdVar8;
  
  pdVar6 = (double *)(int)param_5;
  psVar7 = &DAT_63101c70;
  _param_5 = param_2 + (int)pdVar6 * 2 + -1;
  pdVar8 = param_2;
  param_2 = pdVar6;
  if (0 < (int)pdVar6) {
    do {
      sVar5 = *psVar7;
      psVar7 = psVar7 + 1;
      dVar1 = *param_3;
      dVar2 = *param_4;
      pdVar6 = (double *)(sVar5 * 0x10 + param_1);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      dVar3 = *pdVar6;
      dVar4 = pdVar6[1];
      *pdVar8 = dVar2 * dVar3 - dVar1 * dVar4;
      *_param_5 = dVar2 * dVar4 + dVar1 * dVar3;
      param_2 = (double *)((int)param_2 + -1);
      pdVar8 = pdVar8 + 2;
      _param_5 = _param_5 + -2;
    } while (param_2 != (double *)0x0);
  }
  return;
}


