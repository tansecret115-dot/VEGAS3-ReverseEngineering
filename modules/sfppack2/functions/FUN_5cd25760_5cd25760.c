/* Module: sfppack2.dll
   Function: FUN_5cd25760
   Address: 5cd25760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd25760(double *param_1,uint param_2,double param_3,double param_4,double param_5)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  uint uVar8;
  
  if (param_2 >> 1 != 0) {
    dVar6 = param_3 + _DAT_5cd51510;
    uVar1 = (param_2 >> 1) + 1;
    uVar8 = uVar1 >> 1;
    pdVar7 = param_1 + uVar1;
    dVar2 = _DAT_5cd51510;
    dVar3 = _DAT_5cd51520;
    do {
      uVar8 = uVar8 - 1;
      dVar5 = dVar2 * pdVar7[-1] - dVar3 * *pdVar7;
      dVar4 = dVar3 * pdVar7[-1] + dVar2 * *pdVar7;
      pdVar7[-1] = (*param_1 - dVar5) * param_5;
      *pdVar7 = (param_1[1] - dVar4) * param_5;
      *param_1 = (dVar5 + *param_1) * param_5;
      param_1[1] = (dVar4 + param_1[1]) * param_5;
      dVar4 = dVar3 * param_4;
      dVar3 = dVar2 * param_4 + dVar6 * dVar3;
      pdVar7 = pdVar7 + 2;
      param_1 = param_1 + 2;
      dVar2 = (dVar2 * param_3 - dVar4) + dVar2;
    } while (uVar8 != 0);
  }
  return;
}


